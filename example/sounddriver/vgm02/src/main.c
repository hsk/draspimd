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
  case 0x62:
    v->wait_pending = 737;
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
        v->pos=v->offset;
        return 0;
      }
      return 1;
    }
  }
}

int main() {
  PSG_init();
  VgmPlayer v;
  vgm_init(&v,fz2wsvgm,sizeof(fz2wsvgm));
  //vgm_init(&v,af03vgm,sizeof(af03vgm));
  while(1)
  vgm_play(&v);
  return 0;
}
