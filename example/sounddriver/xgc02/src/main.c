#include <genesis.h>
#include <malloc.h>
#include <memory.h>
#include <res.h>

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
int xgm_play(XgmPlayer* v/*, sample_t *out, sample_t *end*/);
void process_command(XgmPlayer* v);

static uint32_t parse_uint32_le(const uint8_t *data) {
  return data[0] | data[1] << 8 | data[2]<< 16 | data[3] << 24;
}

static uint32_t parse_uint16_le(const uint8_t *data) {
  return data[0] | data[1] << 8;
}
void xgm_init(XgmPlayer* v, u8 *data,u32 len) {
  v->data =data;
  v->size=len;
  if (v->size < 0x104) return;
  v->blocksize= parse_uint16_le(&v->data[0xFC])*256;
  uint8_t version = v->data[0xFE];
  uint8_t misc = v->data[0xFF];
  v->offset=0x100+v->blocksize;
  uint32_t musiclen = parse_uint32_le(&v->data[v->offset]);
  v->offset+=4;
  v->pos=v->offset;
  v->end=v->pos+musiclen;
  PSG_init();
}

int xgm_play(XgmPlayer* v) {
  while (1) {
    while (!v->wait_pending) {
      if (v->pos >= v->end) break;
      process_command(v);
    }
    v->wait_pending = 0;
    if (v->pos >= v->end) return 0;
    return 1;
  }
}

void process_command(XgmPlayer* v) {
  switch (v->data[v->pos++]) {
  case 1: v->wait_pending=1;break;
  case 0x1b*2: PSG_write(v->data[v->pos++]);
  case 0x1a*2: PSG_write(v->data[v->pos++]);
  case 0x19*2: PSG_write(v->data[v->pos++]);
  case 0x18*2: PSG_write(v->data[v->pos++]); break;
  case 0x17*2: PSG_write(v->data[v->pos++]);
  case 0x16*2: PSG_write(v->data[v->pos++]);
  case 0x15*2: PSG_write(v->data[v->pos++]);
  case 0x14*2: PSG_write(v->data[v->pos++]);
  case 0x13*2: PSG_write(v->data[v->pos++]);
  case 0x12*2: PSG_write(v->data[v->pos++]);
  case 0x11*2: PSG_write(v->data[v->pos++]);
  case 0x10*2: PSG_write(v->data[v->pos++]);break;
  case 0x7f*2: v->pos=v->offset;break;
  }
}

int main() {
  XgmPlayer v;
  xgm_init(&v,cdefg,sizeof(cdefg));
  while(1) {
    VDP_waitVSync();
    xgm_play(&v);
  }
  return 0;
}
