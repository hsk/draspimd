#include <genesis.h>
char str[128];
int pos;
void log(char* str) {
  VDP_drawText(str,0,pos++);
}
#include "z80.h"
#include "cdefg.h"
u16 run_z80(u32 addr) {
  sprintf(str," addr %04x%04x",(addr>>16)&0xffff,addr&0xffff);log(str);
  Z80_requestBus(TRUE);
  Z80_clear(0,0x2000,TRUE);
  Z80_upload(0,z80,sizeof(z80),TRUE);
  Z80_releaseBus();
  Z80_requestBus(TRUE);
    *(vu8*)0xa00014 = addr & 0xff;
    *(vu8*)0xa00015 = (addr >> 8) & 0xff;
    *(vu8*)0xa00016 = (addr >> 16) & 0xff;
  Z80_releaseBus();
  while(1){
    Z80_requestBus(TRUE);
    u8 r = *(vu8*)0xa00011;
    u16 v = *(vu8*)0xa00017;
    v += (*(vu8*)0xa00018)<<8;
    Z80_releaseBus();
    sprintf(str,"test z80 %3d",r);log(str);
    sprintf(str," z80 ix %x",v);log(str);
    pos--;
    pos--;
    VDP_waitVSync();
  }
  
  log("test z80 end");
}
int main() {
  pos=0;
  run_z80(cdefg);
  while(1){}
  return 0;
}
