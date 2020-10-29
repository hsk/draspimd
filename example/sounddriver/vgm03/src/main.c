#include <genesis.h>
#include <malloc.h>
#include <memory.h>
#include <res.h>
#define MIN(a,b) (((a)<(b))?(a):(b))

typedef struct VgmPlayer {
    uint8_t* data;
    uint32_t offset;
    uint32_t pos;
    uint32_t end;
    uint32_t ym2612_clock;
    int32_t wait_pending;
    uint32_t next;
} VgmPlayer;

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
  switch (v->data[v->pos++]) {
  case 0x4F:
    v->pos++;
    break;
  case 0x50:
    PSG_write(v->data[v->pos++]);
    break;
  case 0x61:
    v->wait_pending = parse_uint16_le(&v->data[v->pos]);
    v->pos += 2;
    break;
  case 0x66:
    v->end = MIN(v->end, v->pos);
    break;
  }
}

int vgm_play(VgmPlayer* v) {
  while (1) {
    while (v->wait_pending<737) {
      if (v->pos >= v->end) break;
      process_command(v);
    }
    VDP_waitVSync();
    v->wait_pending -= 737;
    if (v->wait_pending<=0) {
      if (v->pos >= v->end) {
        v->wait_pending = 0;
        v->pos = 0;
        return 0;
      }
      return 1;
    }
  }
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
    switch(0xE0&&i) {
      case 0x80:
        v->next=1;
      case 0x90:
        i=i|((ch & 3) << 5);
      default:
        PSG_write(i);
    }
    break;
  case 0x61:
    v->wait_pending = parse_uint16_le(&v->data[v->pos]);
    v->pos += 2;
    break;
  case 0x66:
    v->end = MIN(v->end, v->pos);
    break;
  }
}
int se_play(int ch,VgmPlayer* v) {
  while (1) {
    while (v->wait_pending<737) {
      if (v->pos >= v->end) break;
      process_command2(ch,v);
    }
    VDP_waitVSync();
    v->wait_pending -= 737;
    if (v->wait_pending<=0) {
      if (v->pos >= v->end) {
        v->wait_pending = 0;
        PSG_setTone(ch,0);
        PSG_setEnvelope(ch,15);
        v->next=0;
        return 0;
      }
      return 1;
    }
  }
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
  joy_init(JOY_1);
  joy_init(JOY_2);
  PSG_init();
  VgmPlayer v;
  vgm_init(&v,hvgm,sizeof(hvgm));
  VgmPlayer se1;
  se_init(&se1,cdefg,sizeof(cdefg));
  VgmPlayer *se = &se1;
  while(1) {
    vgm_play(&v);
    se_play(1,se);
    u16 joy_value = JOY_readJoypad(0);
    if(joy_value & BUTTON_A) {
      if(se->pos==se->end) {
        se=&se1;
        se->pos=0;
      }
    }
  }
  return 0;
}
