#include <genesis.h>
//http://md.railgun.works/index.php?title=PSG#Setting_Frequency
void wait(int n){
  for(int i=0;i<n;i++)VDP_waitVSync();
}
int main(){
  while(1) {
    PSG_setTone(3,0);
    PSG_setEnvelope(3,0xf);
    wait(60);
    PSG_setEnvelope(3,0);
    
    for(int j=1;j<2;j++) {
      for(int i=0;i<4;i++) {
        PSG_setNoise(j,i);
        char str[256];
        sprintf(str,"%d %d ",j,i);
        VDP_drawText(str,0,0);
        wait(60);
      }
    }
    PSG_setEnvelope(3,0xf);
    wait(60);
    PSG_setTone(3,0);
    wait(60);
    VDP_drawText("stop",0,0);
  }
  return 0;
}
