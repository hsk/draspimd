#include "_game.h"
#include "genesis.h"
#include "score.h"
#include "gfxfont.h"
char str[128];
vu8 flg;
void drawText2(const char *str, u16 x, u16 y) {
    *((u32 *) GFX_CTRL_PORT) = GFX_WRITE_VRAM_ADDR(VDP_PLAN_B + (x + (y<<6)) * 2);
    while (*str) *( (u16 *) GFX_DATA_PORT) = 0xc580 | *str++;
}
static void vint() {
  score_update();
  flg = FALSE;
}
int main() {
  score_init();
  score_stage(1);
  SYS_setVIntCallback(&vint);
  VDP_setPalette(PAL0,top.palette->data);
  VDP_setPalette(TOP_SCORE_PAL,font_image.palette->data);
  VDP_setPalette(STAGE_PAL,font_big.palette->data);
  VDP_setPalette(SCORE_PAL,top.palette->data);
  while(1){
    score_add(0x1);
    u16 n=0;
    flg=TRUE;
    while(flg)n++;
    uintToStr(n,str,4);
    drawText2(str,10,0);
  }
  return 0;
}
