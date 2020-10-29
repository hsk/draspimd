#include <stdint.h>
#include <malloc.h>
#include <memory.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct VgmPlayer {
    uint8_t* vgm_data;
    uint32_t vgm_data_size;
    uint32_t vgm_offset;
    uint32_t vgm_end;
    uint32_t ym2612_clock;
    uint32_t play_pos;
    uint32_t wait_pending;
} VgmPlayer;
void error(char* str){printf("%s\n");exit(-1);}
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
void vgm_init(VgmPlayer* v, const char *filename) {
  v->vgm_data = read_file(filename,&v->vgm_data_size);
  if (v->vgm_data_size < 0x40) {
    error("invalid VGM file: file header too small");
  }
  printf("read ok\n");
  if (memcmp(&v->vgm_data[0], "Vgm ",4)!=0) {
    error("invalid VGM file: wrong file type");
  }
  uint32_t version = parse_uint32_le(&v->vgm_data[0x08]);
  if (version < 0x150) {
    v->vgm_offset = 0x40;
  } else {
    v->vgm_offset = 0x34 + parse_uint32_le(&v->vgm_data[0x34]);
  }
  if (v->vgm_offset >= v->vgm_data_size) {
    error("invalid VGM file: data offset out of range");
  }
  v->ym2612_clock = parse_uint32_le(&v->vgm_data[0x2C]);
  printf("clock=%d\n",v->ym2612_clock);
  v->vgm_end = v->vgm_data_size;
  v->play_pos = v->vgm_offset;
  v->wait_pending = 0;
  //YM2612Init();
  //YM2612Config(YM2612_ENHANCED);
  //YM2612ResetChip();
  printf("init ok\n");
}

int vgm_play(VgmPlayer* v) {
  while (1) {
    while (!v->wait_pending) {
      if (v->play_pos >= v->vgm_end) break;
      process_command(v);
    }
    uint32_t wait_now = v->wait_pending;
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
  switch (cmd) {
  case 0x4F: {//0x4F dd    : Game Gear PSG stereo, write dd to port 0x06
    uint8_t val = v->vgm_data[v->play_pos++];
    break;
  }
  case 0x50: {//  0x50 dd    : PSG (SN76489/SN76496) write value dd
    uint8_t val = v->vgm_data[v->play_pos++];
    printf("port 0a %d\n",val);
    break;
  }
  case 0x61: {
    v->wait_pending = parse_uint16_le(&v->vgm_data[v->play_pos]);
    printf("wait %d\n",v->wait_pending);
    v->play_pos += 2;
    break;
  }
  case 0x66:
    v->vgm_end = MIN(v->vgm_end, v->play_pos);
    printf("end\n");
    break;
  default:
    fprintf(stderr, "unrecognised VGM command %02x\n", cmd);
    error("unrecognised VGM command");
  }
}

int main(int argn,char** argv) {
  VgmPlayer* v=malloc(sizeof(VgmPlayer));
  vgm_init(v,argv[1]);
  vgm_play(v);
  return 0;
}
