#include "genesis.h"
#include "font.h"
#include "score.h"
u32 score = SCORE_INIT;
u32 top_score = TOP_SCORE_INIT;
void score_add(int point) {
  score += point;
  if (top_score < score) top_score = score;
}
static inline void scoreToStr(u32 score,char* score_str) {
  intToStr(score,score_str,7);
}
static void drawText(const char *str, u16 x, u16 y,u16 pal) {
    *(vu32*)0xC00004 = GFX_WRITE_VRAM_ADDR(SCORE_VDP_PLAN + ((x + (y << planWidthSft)) <<1));
    u16 base = (pal << 13) | (1 << 15) | 0x580 ;
    while (*str) *(vu16*)0xC00000 = base | *str++;
}
char score_str[9];
void score_init() {
  score_str[7]=score_str[8]=0;
  score = SCORE_INIT;
  scoreToStr(score,score_str);
  score_str[7]='0';
  drawText(score_str, SCORE_X, SCORE_Y,SCORE_PAL);
  scoreToStr(top_score,score_str);
  score_str[7]='0';
  drawText(score_str, TOP_SCORE_X, TOP_SCORE_Y,TOP_SCORE_PAL);
}
void score_update() {
  scoreToStr(score,score_str);
  if (top_score==score) drawText(score_str,TOP_SCORE_X,TOP_SCORE_Y,TOP_SCORE_PAL);
  drawText(score_str,SCORE_X,SCORE_Y,SCORE_PAL);
}
