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
static const  __attribute__((aligned(2)))  char digits[]=
                             "0001020304050607080910111213141516171819"
                             "2021222324252627282930313233343536373839"
                             "4041424344454647484950515253545556575859"
                             "6061626364656667686970717273747576777879"
                             "8081828384858687888990919293949596979899";
void drawInt16(u16 v,u16 x,u16 y){
  char str[4];
  char *dst = &str[4];
  while (v >= 100) {
    const u16 quot = v/100;
    const u8 remain = v%100;
    v = quot;
    dst-=2;
    *(u16*)dst = *(u16*)&digits[remain*2];
  }
  if(v<10) *--dst = " 123456789"[v];
  else {
    dst-=2;
    *(u16*)dst = *(u16*)&digits[v*2];
  }
  while (dst != str) *--dst = ' ';
  *(vu32*)GFX_CTRL_PORT = GFX_WRITE_VRAM_ADDR(VDP_PLAN_B + (x + (y<<6)) * 2);
  *(vu32*)GFX_DATA_PORT = 0xc580 | *dst++;
  *(vu16*)GFX_DATA_PORT = 0xc580 | *dst++;
  *(vu16*)GFX_DATA_PORT = 0xc580 | *dst++;
  *(vu16*)GFX_DATA_PORT = 0xc580 | *dst;
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
    drawInt16(n,10,0);
  }
  return 0;
}
