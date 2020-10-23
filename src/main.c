#include <genesis.h>
#include "title.h"
int main(){
  VDP_drawImage(PLAN_A,&title0,0,0);
  VDP_drawImageEx(PLAN_A,&title1,TILE_ATTR_FULL(PAL1,0,0,0,curTileInd),8,1,TRUE,DMA);
  curTileInd+=title1.tileset->numTile;
  VDP_drawImageEx(PLAN_A,&title2,TILE_ATTR_FULL(PAL2,0,0,0,curTileInd),7,8,TRUE,DMA);
  while(1){}
  return 0;
}
