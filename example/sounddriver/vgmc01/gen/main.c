#include <stdint.h>
#include <malloc.h>
#include <memory.h>
#define MIN(a,b) (((a)<(b))?(a):(b))

typedef struct VgmPlayer {
    uint8_t* data;
    uint32_t offset;
    uint32_t pos;
    uint32_t end;
    uint32_t ym2612_clock;
    int32_t wait_pending;
} VgmPlayer;
int step = 0;
static uint32_t parse_uint32_le(const uint8_t *data) {
  return data[0] | data[1] << 8 | data[2]<< 16 | data[3] << 24;
}

static uint32_t parse_uint16_le(const uint8_t *data) {
  return data[0] | data[1] << 8;
}
int vgm_init(VgmPlayer* v,uint8_t* data,uint32_t len) {
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
  return 0;
}
void process_command(FILE* fp,VgmPlayer* v) {
  switch (v->data[v->pos++]) {
  case 0x4F:
    v->pos++;
    break;
  case 0x50:
    fprintf(fp,"      psg_write(%d);\n",v->data[v->pos++]);
    break;
  case 0x61:
    v->wait_pending = parse_uint16_le(&v->data[v->pos]);
    //fprintf(fp,"      //v->wait_pending=%d;\n",v->wait_pending);
    fprintf(fp,"      return;\n");
    fprintf(fp,"    case %d:\n",step++);
    v->pos += 2;
    break;
  case 0x62:
    v->wait_pending = 737;
    //fprintf(fp,"      //v->wait_pending=%d;\n",v->wait_pending);
    fprintf(fp,"      return;\n");
    fprintf(fp,"    case %d:\n",step++);
    break;
  case 0x66:
    v->end = MIN(v->end, v->pos);
    fprintf(fp,"    v->pos=0;\n");
    fprintf(fp,"      return;\n");
    //fprintf(fp,"      v->end=%d;\n",v->end);
    break;
  }
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

int main(int argn,char** argv) {
  uint32_t size;
  uint8_t *data = read_file(argv[1],&size);
  VgmPlayer v;
  vgm_init(&v,data,size);
  step = 0;
  char* dot = strrchr(argv[1],'.');
  dot[1]='h';
  dot[2]='\0';
  FILE* fp = fopen(argv[1],"w");
  dot[0]=0;
  fprintf(fp,"void %s(VgmPlayer* v);\n",argv[1]);
  fclose(fp);
  dot[0]='.';
  dot[1]='c';
  fp = fopen(argv[1],"w");
  dot[0]=0;

  fprintf(fp,"#include <stdint.h>\n");
  fprintf(fp,"typedef struct {\n");
  fprintf(fp,"  uint16_t pos;\n");
  fprintf(fp,"}VgmPlayer;\n");
  fprintf(fp,"#define psg_write(v) *(volatile uint8_t*)0xC00011 = v;\n");

  fprintf(fp,"void %s(VgmPlayer* v){\n",argv[1]);
  fprintf(fp,"  switch(v->pos++){\n");
  fprintf(fp,"    case %d:\n",step++);
  while (v.pos < v.end) {
    process_command(fp,&v);
  }
  fprintf(fp,"  }\n");
  fprintf(fp,"}\n");
  fclose(fp);
  return 0;
}
