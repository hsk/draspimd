#include <genesis.h>
#include <malloc.h>
#include <memory.h>
#include <res.h>
#define NOISE_CH 3
#define MASK_CH 3
#define MIN(a,b) (((a)<(b))?(a):(b))

typedef struct VgmPlayer {
    uint8_t* data;
    uint32_t offset;
    uint32_t pos;
    uint32_t end;
    uint32_t ym2612_clock;
    int32_t wait_pending;
    uint16_t next;
    uint16_t ch;
} VgmPlayer;

u8 mask[5];
u8 tone0[5];
u8 tone1[5];
u8 env[5];
static uint32_t parse_uint32_le(const uint8_t *data) {
  return data[0] | data[1] << 8 | data[2]<< 16 | data[3] << 24;
}

static uint32_t parse_uint16_le(const uint8_t *data) {
  return data[0] | data[1] << 8;
}
int vgm_init(VgmPlayer* v,u8* data,u32 len) {
  v->data = data;
  v->end=len;
  if (v->end < 0x40) return -1;
  if (*(int*)v->data != *(int*)"Vgm ") return -1;
  uint32_t version = parse_uint32_le(&v->data[0x08]);
  if (version < 0x150) v->offset = 0x40;
  else v->offset = 0x34 + parse_uint32_le(&v->data[0x34]);
  if (v->offset >= v->end) return -1;
  v->ym2612_clock = parse_uint32_le(&v->data[0x2C]);
  v->pos = v->offset;
  v->wait_pending = 0;
  v->next=0;
  return 0;
}
void process_command(VgmPlayer* v) {
  u8 i,ch;
  switch (v->data[v->pos++]) {
  case 0x4F:
    v->pos++;
    break;
  case 0x50:
    i = v->data[v->pos++];
    if(v->next){
      if(!mask[v->ch])
        PSG_write(i);
      tone1[v->ch]=i;
      v->next=0;
      break;
    }
    switch(0xf0&i) {
      case 0x80:
      case 0xa0:
      case 0xc0:
        v->ch = ((i>>5)&3);v->next=1;
        tone0[v->ch]=i;
        break;
      case 0x90:
      case 0xb0:
      case 0xd0:
      case 0xf0:
        v->ch = ((i>>5)&3);
        env[v->ch]=i;
        break;
      case 0xe0:
        v->ch = NOISE_CH;
        tone0[v->ch]=i;
        break;
    }
    /*
    switch(0xf0&i) {
    case 0x80:
      v->ch = 0;v->next=1;
      tone0[v->ch]=i;
      break;
    case 0xa0:
      v->ch = 1;v->next=1;
      tone0[v->ch]=i;
      break;
    case 0xc0:
      v->ch = 2;v->next=1;
      tone0[v->ch]=i;
      break;
    case 0xe0:
      tone0[v->ch = NOISE_CH]=i;
      break;
    case 0x10:
        v->ch = 0;
        env[0]=i;
        break;
    case 0x50:
        v->ch = 1;
        env[1]=i;
        break;
    case 0x70:
        v->ch = 2;
        env[2]=i;
        break;
    }*/
    if(!mask[v->ch])
      PSG_write(i);
    
    break;
  case 0x61:
    v->wait_pending = parse_uint16_le(&v->data[v->pos]);
    v->pos += 2;
    break;
  case 0x62:
    v->wait_pending = 737;
    break;
  case 0x63:
    v->wait_pending = 882;
    break;
  case 0x66:
    v->end = MIN(v->end, v->pos);
    break;
  }
}

int vgm_update(VgmPlayer* v) {
  
  for(int i=0;i<5;i++) {
    if(mask[i]==2) {
      mask[i]=0;
      PSG_write(env[i]);
      PSG_write(tone0[i]);
      if(tone0[i]&0x10)PSG_write(tone1[i]);
    }
  }
  
  while (v->wait_pending<737) {
    if (v->pos >= v->end) break;
    process_command(v);
  }
  v->wait_pending -= 737;
  if (v->pos >= v->end) {
    v->wait_pending = 0;
    v->pos = 0;
    return 0;
  }
  return 1;
}
int se_init(VgmPlayer* v,u8* data,u32 len) {
  int r=vgm_init(v,data,len);
  v->pos=v->end;
  return r;
}
void process_command2(int ch,VgmPlayer* v) {
  uint8_t i;
  switch (v->data[v->pos++]) {
  case 0x4F:
    v->pos++;
    break;
  case 0x50:
    i = v->data[v->pos++];
    if(v->next){
      PSG_write(i);
      v->next=0;
      break;
    }
    switch(0xf0&i) {
      case 0x80:case 0xa0:case 0xc0:v->next=1;
      case 0x90:case 0xb0:case 0xd0:i=i|(ch<<5);PSG_write(i);break;
      case 0xf0:case 0xe0:PSG_write(i);break;
    }
    break;
  case 0x61:
    v->wait_pending += parse_uint16_le(&v->data[v->pos]);
    v->pos += 2;
    break;
  case 0x62:
    v->wait_pending += 737;
    break;
  case 0x66:
    v->end = MIN(v->end, v->pos);
    break;
  }
}
int se_update(int ch,VgmPlayer* v) {
  if (v->pos >= v->end) return 0;
  while (v->wait_pending<737) {
    if (v->pos >= v->end) break;
    process_command2(ch,v);
  }
  v->wait_pending -= 737;
  if (v->pos >= v->end) {
    v->wait_pending = 0;
    v->next=0;
    if(mask[ch]==1) mask[ch]=2;
    return 0;
  }
  return 1;
}
void se_start(int ch,VgmPlayer* se,VgmPlayer* se1) {
  se=se1;
  se->pos=se->next=se->wait_pending = 0;
  mask[ch]=1;
}
void joy_init(u16 port) {
  switch (JOY_getPortType(port)) {
  case PORT_TYPE_MENACER:
    JOY_setSupport(port, JOY_SUPPORT_MENACER);
    break;
  case PORT_TYPE_JUSTIFIER:
    JOY_setSupport(port, JOY_SUPPORT_JUSTIFIER_BOTH);
    break;
  case PORT_TYPE_MOUSE:
    JOY_setSupport(port, JOY_SUPPORT_MOUSE);
    break;
  case PORT_TYPE_TEAMPLAYER:
    JOY_setSupport(port, JOY_SUPPORT_TEAMPLAYER);
    break;
  }
}

int main() {
  for(int i=0;i<5;i++) {
    mask[i]=0;
    tone0[i]=0x80|(i<<5)|0;
    tone1[i]=0;
    env[i]=0x90|(i<<5)|0xf;
  }
  joy_init(JOY_1);
  joy_init(JOY_2);
  PSG_init();
  VgmPlayer v;
  vgm_init(&v,af03vgm,sizeof(af03vgm));
  vgm_init(&v,fz2wsvgm,sizeof(fz2wsvgm));
  VgmPlayer se1;
  se_init(&se1,cdefg,sizeof(cdefg));
  VgmPlayer *se = &se1;
  while(1) {
    VDP_waitVSync();
    se_update(2,se);
    vgm_update(&v);
    char str[256];
    //sprintf(str, "%d %d %d %d",mask[0],mask[1],mask[2],mask[3]);
    //VDP_drawText(str,0,0);
    u16 joy_value = JOY_readJoypad(0);
    if(joy_value & BUTTON_A) se_start(2,se,&se1);
    char buf[4];
    		sprintf(buf, "%3d", SYS_getCPULoad());
		VDP_drawText(buf, 35, 1);

  }
  return 0;
}
