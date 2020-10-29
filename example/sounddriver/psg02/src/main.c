#include <genesis.h>
#undef PSG_PORT
#define PSG_PORT 0xC00011
static void psg_write(u8 data) {
  *(vu8*)PSG_PORT = data;
}

void psg_setEnvelope(u8 ch, u8 value) {
  psg_write(0x90 | ((ch & 3) << 5) | (value & 0xF));
}

void psg_setTone(u8 ch, u16 value) {
  psg_write(0x80 | ((ch & 3) << 5) | (value & 0xF));
  psg_write((value >> 4) & 0x3F);
}

void psg_init() {
  for (u16 i = 0; i < 4; i++) {
    psg_setTone(i,0);
    psg_setEnvelope(i,0xf);
  }
}

int main(){
  psg_init();
  psg_setEnvelope(0,0);
  psg_setTone(0,256);
  while(1){}
  return 0;
}
