#include <stdint.h>
#include <malloc.h>
#include <memory.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct VgmPlayer {
    uint8_t* vgm_data;
    uint32_t vgm_data_size;
    uint8_t* data_bank;
    uint32_t data_bank_size;
    uint32_t vgm_offset;
    uint32_t vgm_end;
    uint32_t ym2612_clock;
    uint32_t play_pos;
    uint32_t wait_pending;
    uint32_t pcm_pos;
    uint32_t pcm_len;
} VgmPlayer;
void error(char* str){printf("%s\n",str);exit(-1);}
void vgm_init(VgmPlayer* v,const char *filename);
int vgm_play(VgmPlayer* v/*, sample_t *out, sample_t *end*/);
void process_command(VgmPlayer* v);

static uint32_t parse_uint32_le(const uint8_t *data) {
  return data[0] | data[1] << 8 | data[2]<< 16 | data[3] << 24;
}

static uint32_t parse_uint16_le(const uint8_t *data) {
  return data[0] | data[1] << 8;
}
uint8_t* read_file(const char* filename, uint32_t* size) {
  *size = 0;
  FILE* fp = fopen(filename,"rb");
  if(!fp) return NULL;
  fseek(fp,0,SEEK_END);
  *size = ftell(fp);
  uint8_t *buf = malloc(*size);
  fseek(fp,0,SEEK_SET);
  int s = fread(buf,1,*size,fp);
  if(*size!=s)printf("fread error %d %d\n",s,*size);
  fclose(fp);
  return buf;
}
void vgm_init(VgmPlayer* v, const char *filename) {
  printf("open %s\n",filename);
  v->vgm_data = read_file(filename,&v->vgm_data_size);
  if (v->vgm_data_size < 0x40) {
    error("invalid VGM file: file header too small");
  }
  printf("size=%d\n",v->vgm_data_size);
  if (memcmp(&v->vgm_data[0], "Vgm ",4)!=0) {
    char str[256];
    printf("invalid VGM file: wrong file type %c%c%c%c\n",v->vgm_data[0],v->vgm_data[1],v->vgm_data[2],v->vgm_data[3]);
    //error(str);
  }
  uint32_t version = parse_uint32_le(&v->vgm_data[0x08]);
  printf("version %x\n",version);
  if (version < 0x150) {
    v->vgm_offset = 0x40;
  } else {
    v->vgm_offset = 0x34 + parse_uint32_le(&v->vgm_data[0x34]);
  }

  if (v->vgm_offset >= v->vgm_data_size) {
    error("invalid VGM file: data offset out of range");
  }

  v->ym2612_clock = parse_uint32_le(&v->vgm_data[0x2C]);//+parse_uint32_le(&v->vgm_data[0x48]);
  printf("clock=%d\n",v->ym2612_clock);
  v->vgm_end = v->vgm_data_size;
  v->play_pos = v->vgm_offset;
  v->wait_pending = 0;
  v->pcm_pos = 0;
  v->pcm_len = 0;
  //YM2612Init();
  //YM2612Config(YM2612_ENHANCED);
  //YM2612ResetChip();
}

int vgm_play(VgmPlayer* v) {
  while (1) {
    while (!v->wait_pending) {
      if (v->play_pos >= v->vgm_end) break;
      process_command(v);
    }
    uint32_t wait_now = v->wait_pending;
    while(v->pcm_len>0&&wait_now>0){
      //YM2612Write(0, 0x2A);
      //YM2612Write(1, v->data_bank[v->pcm_pos]);
      //YM2612Update(out, 1);
      wait_now--;
      v->wait_pending--;
      v->pcm_len--;
      if((v->pcm_len&3)==0) v->pcm_pos++;
    }
    if (wait_now) {
      //YM2612Update(out, wait_now);
      v->wait_pending -= wait_now;
    }
    if (v->play_pos >= v->vgm_end) return 0;
    if (v->wait_pending) {
      return 1;
    }
  }
}

void process_command(VgmPlayer* v) {
  uint8_t cmd = v->vgm_data[v->play_pos++];
  printf("cmd %x %x ",v->play_pos-1,cmd);
  switch (cmd) {
  case 0x4F: {
    uint8_t val = v->vgm_data[v->play_pos++];
    printf("psg stereo %d\n",val);
    break;
  }

  case 0x50: {
    uint8_t i = v->vgm_data[v->play_pos++];
    static uint8_t ch,next=0;
    if(next){printf("___ ");next=0;}else
    switch(0xf0&i) {
      case 0x80:
      case 0xa0:
      case 0xc0:
        printf("ton ");
        ch = ((i>>5)&3);next=1;
        break;
      case 0x90:
      case 0xb0:
      case 0xd0:
      case 0xf0:
        printf("env ");
        ch = ((i>>5)&3);
        break;
      case 0xe0:
        ch = 3;
        printf("nis ");
        break;
      default:
        printf("err ");
    }
    printf("psg %02x ch %d\n",i,ch);
    break;
  }
  /*
  case 0x52: {
    uint8_t adr = v->vgm_data[v->play_pos++];
    uint8_t val = v->vgm_data[v->play_pos++];
    YM2612Write(0, adr);
    YM2612Write(1, val);
    break;
  }
  case 0x53: {
    uint8_t adr = v->vgm_data[v->play_pos++];
    uint8_t val = v->vgm_data[v->play_pos++];
    YM2612Write(2, adr);
    YM2612Write(3, val);
    break;
  }*/
  /*case 0x40: {
    uint8_t val = v->vgm_data[v->play_pos++];
    printf("RF5C68 clock %d ",parse_uint32_le(v->vgm_data[v->play_pos]));
    v->play_pos+=4;
    break;
  }*/
  case 0x56: {
    uint8_t reg = v->vgm_data[v->play_pos++];
    uint8_t val = v->vgm_data[v->play_pos++];
    printf("YM2608 port 0 %d %d\n",reg,val);
    break;
  }

  case 0x57: {
    uint8_t reg = v->vgm_data[v->play_pos++];
    uint8_t val = v->vgm_data[v->play_pos++];
    printf("YM2608 port 1 %d %d\n",reg,val);
    break;
  }
  case 0x61: {
    v->wait_pending = parse_uint16_le(&v->vgm_data[v->play_pos]);
    printf("wait %d\n",v->wait_pending);
    v->play_pos += 2;
    break;
  }
  case 0x62:
    v->wait_pending = 735;
    printf("wait %d\n",v->wait_pending);
    break;
  case 0x63:
    v->wait_pending = 882;
    break;
  case 0x66:
    v->vgm_end = MIN(v->vgm_end, v->play_pos);
    printf("end\n");
    break;
  /*
  case 0x67: {
    v->play_pos++; // skip 0x66 byte
    uint8_t datatype = v->vgm_data[v->play_pos++];
    if (datatype != 0) {
      std::runtime_error("unrecognised data type in data block");
    }
    uint32_t size = parse_uint32_le(&v->vgm_data[v->play_pos]);
    v->play_pos += 4;
    v->data_bank = &v->vgm_data[v->play_pos];
    v->data_bank_size = size;
    v->play_pos += size;
    break;
  }
  case 0xE0: {
    uint32_t seek_to = parse_uint32_le(&v->vgm_data[v->play_pos]);
    v->play_pos += 4;
    if (seek_to >= v->data_bank_size) {
      error("PCM data bank seek out of range");
    }
    printf("seek %d\n",seek_to);
    v->pcm_pos = seek_to;
    break;
  }
  case 0x90: {
    uint8_t ss = v->vgm_data[v->play_pos++];
    uint8_t tt = v->vgm_data[v->play_pos++];
    uint8_t pp = v->vgm_data[v->play_pos++];
    uint8_t cc = v->vgm_data[v->play_pos++];
    printf("Setup Stream Controll id=%d tip=%d %d %d\n", ss, tt, pp, cc);
    YM2612Write(cc, pp);
    break;
  }
  case 0x91: {
    uint8_t ss = v->vgm_data[v->play_pos++];
    uint8_t dd = v->vgm_data[v->play_pos++];
    uint8_t ll = v->vgm_data[v->play_pos++];
    uint8_t bb = v->vgm_data[v->play_pos++];
    printf("Set Stream Data id=%d bankid=%d step size=%d base size=%d\n", ss,
           dd, ll, bb);
    break;
  }
  case 0x92: {
    uint8_t ss = v->vgm_data[v->play_pos++];
    uint32_t ll = parse_uint32_le(&v->vgm_data[v->play_pos]);
    v->play_pos += 4;
    printf("Set Stream Frequency id=%d freq=%d\n", ss, ll);
    break;
  }
  case 0x93: {
    uint8_t ss = v->vgm_data[v->play_pos++];
    uint32_t aa = parse_uint32_le(&v->vgm_data[v->play_pos]);
    v->play_pos += 4;
    uint8_t mm = v->vgm_data[v->play_pos++];
    uint32_t ll = parse_uint32_le(&v->vgm_data[v->play_pos]);
    v->play_pos += 4;
    printf("Start Stream id=%d start offset=%d len mode=%d len=%d\n", ss, aa,
           mm, ll);
    v->pcm_pos = aa;
    v->pcm_len = ll*4;
    break;
  }
  // case 0x94: printf("pos++\n");v->play_pos+=1;break;
  // case 0x95: v->play_pos+=4;break;
  */
  default:
    switch (cmd & 0xF0) {
    case 0x70:
      v->wait_pending = (cmd & 0x0F) + 1;
      printf("write pending %d\n",v->wait_pending);
      break;
    /*
    case 0x80:
      printf("pcm write\n");
      v->wait_pending = cmd & 0x0F;
      if (v->pcm_pos >= v->data_bank_size) {
        error("PCM data bank seek out of range");
      }
      YM2612Write(0, 0x2A);
      YM2612Write(1, v->data_bank[v->pcm_pos++]);
      break;
    */
    default:
      fprintf(stderr, "unrecognised VGM command %02x\n", cmd);
      //error("unrecognised VGM command");
    }
  }
}

int main(int argn,char** argv) {
  VgmPlayer* v=malloc(sizeof(VgmPlayer));
  vgm_init(v,argv[1]);
  vgm_play(v);
  return 0;
}