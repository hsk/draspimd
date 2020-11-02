#include "genesis.h"
#include "vgm.h"
#include "res.h"
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
    char buf[32];
void play_vgm(u32 addr) {
  Z80_requestBus(TRUE);
  Z80_clear(0,0x2000,TRUE);
  Z80_upload(0,vgm,sizeof(vgm),TRUE);
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
    VgmPlayer v;
    vgm_init(&v,af03vgm,sizeof(af03vgm));
    play_vgm(&v.data[v.pos]);
    while (1) {
      VDP_waitVSync();
      Z80_requestBus(TRUE);
      *(vu8*)0xa00010 = 1;
      u16 addr2=*(vu8*)0xa00014 + (*(vu8*)0xa00015<<8);
      Z80_releaseBus();
  sprintf(buf,"addr2 %4x%04x",addr2>>16,addr2&0xffff);
  VDP_drawText(buf,0,1);

    }
}
