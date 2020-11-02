#include <stdint.h>
#include <malloc.h>
#include <memory.h>
#define XGM 4
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
  if (v->size < 0x104+XGM) {
    error("invalid XGM file: file header too small");
  }
  printf("read ok size %x\n",v->size);
  v->blocksize= parse_uint16_le(&v->data[0xFC+XGM])*256;
  printf("blocksize %d\n",v->blocksize);
  uint8_t version = v->data[0xFE + XGM];
  printf("version %d\n",version);
  uint8_t misc = v->data[0xFE + XGM];
  printf("misc %d\n",misc);
  v->offset=0x100+v->blocksize+XGM;
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
  printf("cmd %02x ",cmd);
  switch (cmd) {
  case 0: printf("next_frame\n");break;
  case 0x17: printf("%x ",v->data[v->pos++]);
  case 0x16: printf("%x ",v->data[v->pos++]);
  case 0x15: printf("%x ",v->data[v->pos++]);
  case 0x14: printf("%x ",v->data[v->pos++]);
  case 0x13: printf("%x ",v->data[v->pos++]);
  case 0x12: printf("%x ",v->data[v->pos++]);
  case 0x11: printf("%x ",v->data[v->pos++]);
  case 0x10: printf("%x\n",v->data[v->pos++]);break;
  case 0x7f: printf("com_end\n");break;
  default:
    fprintf(stderr, "unrecognised XGM command %02x\n", cmd);
    error("unrecognised XGM command");
  }
}

int main(int argn,char** argv) {
  XgmPlayer* v=malloc(sizeof(XgmPlayer));
  xgm_init(v,argv[1]);
  xgm_play(v);
  return 0;
}
