#include <genesis.h>
int main(){
  PSG_init();
  PSG_setEnvelope(0,0);
  PSG_setTone(0,256);
  while(1){}
  return 0;
}
