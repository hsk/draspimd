#include <stdint.h>
#include <malloc.h>
#include <memory.h>
#define XGC 0
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct XgmPlayer {
    uint8_t* data;
    uint32_t size;
    uint32_t blocksize;
    uint32_t offset;
    uint32_t end;
    uint32_t ym2612_clock;
    uint32_t pos;
    uint32_t wait_pending;
} XgmPlayer;
void error(char* str){printf("%s\n",str);exit(-1);}
void xgm_init(XgmPlayer* v,const char *filename);
int xgm_play(XgmPlayer* v/*, sample_t *out, sample_t *end*/);
void process_command(XgmPlayer* v);

static uint32_t parse_uint32_le(const uint8_t *data) {
  return data[0] | data[1] << 8 | data[2]<< 16 | data[3] << 24;
}

static uint32_t parse_uint16_le(const uint8_t *data) {
  return data[0] | data[1] << 8;
}
uint8_t* read_file(const char* filename, uint32_t* size) {
  *size = 0;
  FILE* fp = fopen(filename,"r");
  if(!fp) return NULL;
  fseek(fp,0,SEEK_END);
  *size = ftell(fp);
  uint8_t *buf = malloc(*size);
  fseek(fp,0,SEEK_SET);
  fread(buf,1,*size,fp);
  fclose(fp);
  return buf;
}
void xgm_init(XgmPlayer* v, const char *filename) {
  v->data = read_file(filename,&v->size);
  if (v->size < 0x104+XGC) {
    error("invalid XGC file: file header too small");
  }
  printf("read ok size %x\n",v->size);
  v->blocksize= parse_uint16_le(&v->data[0xFC+XGC])*256;
  printf("blocksize %d\n",v->blocksize);
  uint8_t version = v->data[0xFE + XGC];
  printf("version %d\n",version);
  uint8_t misc = v->data[0xFE + XGC];
  printf("misc %d\n",misc);
  v->offset=0x100+v->blocksize+XGC;
  printf("offset %x\n",v->offset);
  uint32_t musiclen = parse_uint32_le(&v->data[v->offset]);
  printf("musiclen %x\n",musiclen);
  v->offset+=4;
  v->pos=v->offset;
  v->end=v->pos+musiclen;
  //YM2612Init();
  //YM2612Config(YM2612_ENHANCED);
  //YM2612ResetChip();
  printf("init ok\n");
}

int xgm_play(XgmPlayer* v) {
  while (1) {
    while (!v->wait_pending) {
      if (v->pos >= v->end) break;
      process_command(v);
    }
    uint32_t wait_now = v->wait_pending;
    if (wait_now) {
      v->wait_pending -= wait_now;
    }
    if (v->pos >= v->end) return 0;
    if (v->wait_pending) {
      return 1;
    }
  }
}

void process_command(XgmPlayer* v) {
  printf("%04x: ",v->pos);
  uint8_t cmd = v->data[v->pos++];
  uint8_t size;
  printf("cmd %02x %02x:",cmd,cmd>>1);
  switch (cmd) {
  case 1: printf("frame size %d\n",size=v->data[v->pos++]);break;
  case 0x1b*2: printf("%x ",v->data[v->pos++]);
  case 0x1a*2: printf("%x ",v->data[v->pos++]);
  case 0x19*2: printf("%x ",v->data[v->pos++]);
  case 0x18*2: printf("%x env\n",v->data[v->pos++]); break;
  
  case 0x17*2: printf("%x ",v->data[v->pos++]);
  case 0x16*2: printf("%x ",v->data[v->pos++]);
  case 0x15*2: printf("%x ",v->data[v->pos++]);
  case 0x14*2: printf("%x ",v->data[v->pos++]);
  case 0x13*2: printf("%x ",v->data[v->pos++]);
  case 0x12*2: printf("%x ",v->data[v->pos++]);
  case 0x11*2: printf("%x ",v->data[v->pos++]);
  case 0x10*2: printf("%x psg\n",v->data[v->pos++]);break;

  case 0x7f*2: printf("com_end\n");break;
  default:
    fprintf(stderr, "unrecognised XGC command %02x\n", cmd);
    error("unrecognised XGC command");
  }
}

int main(int argn,char** argv) {
  XgmPlayer* v=malloc(sizeof(XgmPlayer));
  xgm_init(v,argv[1]);
  xgm_play(v);
  return 0;
}
