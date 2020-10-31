#include <genesis.h>
char str[128];
int pos;
void log(char* str) {
  VDP_drawText(str,0,pos++);
}
#include "psg0.h"
u16 run_psg0() {
  Z80_requestBus(TRUE);
  Z80_clear(0,0x2000,TRUE);
  Z80_upload(0,psg0,sizeof(psg0),TRUE);
  Z80_releaseBus();
  while(1){
    Z80_requestBus(TRUE);
    u8 r = *(vu8*)0xa00011;
    Z80_releaseBus();
    sprintf(str,"test psg0 %3d",r);log(str);
    if(r!=0)break;
    pos--;
  }
  log("test psg0 end");
}
int main() {
  pos=0;
  run_psg0();
  while(1){}
  return 0;
}
