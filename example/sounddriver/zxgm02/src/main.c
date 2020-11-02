#include "genesis.h"
#include "z80.h"
#include "res.h"
#define XGM 4
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
  if (v->size < 0x104+XGM) return;
  v->blocksize= parse_uint16_le(&v->data[0xFC+XGM])*256;
  uint8_t version = v->data[0xFE + XGM];
  uint8_t misc = v->data[0xFE + XGM];
  v->offset=0x100+v->blocksize+XGM;
  uint32_t musiclen = parse_uint32_le(&v->data[v->offset]);
  v->offset+=4;
  v->pos=v->offset;
  v->end=v->pos+musiclen;
}
char buf[32];
void play_xgm(u32 addr) {
  Z80_requestBus(TRUE);
  Z80_clear(0,0x2000,TRUE);
  Z80_upload(0,z80,sizeof(z80),TRUE);
  Z80_releaseBus();
  Z80_requestBus(TRUE);
  *(vu8*)0xa00010 = 1;
  *(vu8*)0xa00011 = addr & 0xff;
  *(vu8*)0xa00012 = (addr >> 8) & 0xff;
  *(vu8*)0xa00013 = (addr >> 16) & 0xff;
  Z80_releaseBus();
  sprintf(buf,"addr %4x%04x %x",addr>>16,addr&0xffff,*(u8*)addr);
  VDP_drawText(buf,0,0);
}

void main() {
    XgmPlayer v;
    xgm_init(&v,cdefg,sizeof(cdefg));
    play_xgm(&v.data[v.pos]);
    while (1) {
      VDP_waitVSync();
      Z80_requestBus(TRUE);
      *(vu8*)0xa00010 = 1;
      Z80_releaseBus();
    }
}
