#include "genesis.h"
#include "font.h"
#include "_game.h"
#include "score.h"
#include "gfxfont.h"
static inline u8 abcd(u8 d0, u8 d1, u8 flags_in, u8* flags_out) {
	u8 res;
	asm volatile ("move %4,%%cc\n"
		"abcd %3,%0\n"
		"move %%sr,%1\n"
		: "=d" (res), "=d" (*flags_out)
		: "0" (d1), "d" (d0), "d" (flags_in)
		: "cc"
	);
	return res;
}
u32 score = SCORE_INIT;
u32 top_score = TOP_SCORE_INIT;
static inline u32 score_add2(u32 a,u32 b) {
  u8 flg=0;
  u32 res=0;
  for(int i=0;i<4;i++) {
    res += abcd(a & 0xff,b & 0xff,flg,&flg)<<(i*8);
    a >>= 8;
    b >>= 8;
  }
  #ifdef MAX_SCORE
    if(res >= MAX_SCORE) return MAX_SCORE;
  #endif
  return res;
}
void score_add(int point) {
  score = score_add2(score,point);
  if (top_score < score) top_score = score;
}
static inline void scoreToStr(u32 score,char* score_str) {
  int j=24;
  for(;j>=0;j-=4) {
    if(score>>j) break;
    *score_str++ = ' ';
  }
  for(;j>=0;j-=4) *score_str++ = ((score>>j) & 0xf)+'0'; 
}
static inline void scoreDraw(u32 score,u8 x,u8 y,u8 pal) {
    *(vu32*)0xC00004 = GFX_WRITE_VRAM_ADDR(SCORE_VDP_PLAN + ((x + (y << 6)) <<1));
    u16 base = (pal << 13) | (1 << 15) | 0x580 ;
    int j=24;
    for(;j>=0;j-=4) {
      if(score>>j) break;
      *(vu16*)0xC00000 = base | ' ';
    }
    for(;j>=0;j-=4) *(vu16*)0xC00000 = base | (((score>>j) & 0xf)+'0'); 
}
static void drawText(const char *str, u16 x, u16 y,u16 pal) {
    *(vu32*)0xC00004 = GFX_WRITE_VRAM_ADDR(SCORE_VDP_PLAN + ((x + (y << 6)) <<1));
    u16 base = (pal << 13) | (1 << 15) | 0x580 ;
    while (*str) *(vu16*)0xC00000 = base | *str++;
}
char score_str[9];
static void harriers_init();
void score_init() {
  score_str[7]=score_str[8]=0;
  score = SCORE_INIT;
  scoreToStr(score,score_str);
  score_str[7]='0';
  drawText(score_str, SCORE_X, SCORE_Y,SCORE_PAL);
  scoreToStr(top_score,score_str);
  score_str[7]='0';
  drawText(score_str, TOP_SCORE_X, TOP_SCORE_Y,TOP_SCORE_PAL);
  VDP_loadFont(font_big.tileset, 1);
  VDP_loadTileSet(top.tileset,TILE_TOP,DMA);
  VDP_setMapEx(PLAN_B,top.map,TILE_ATTR_FULL(SCORE_PAL,1,0,0,TILE_TOP),2,1,0,0,4,3);
  VDP_setMapEx(PLAN_B,top.map,TILE_ATTR_FULL(SCORE_PAL,1,0,0,TILE_TOP),22,1,4,0,6,3);
  drawText("STAGE",STAGE_X,STAGE_Y,STAGE_PAL);
  harriers_init();
}
void score_update() {
  if (top_score==score) scoreDraw(score,TOP_SCORE_X,TOP_SCORE_Y,TOP_SCORE_PAL);
  scoreDraw(score,SCORE_X,SCORE_Y,SCORE_PAL);
  //harriers_update();
}

void score_stage(u8 n) {
  const char* const stages[]={"  "," 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9",
                       "10","11","12","13","14","15","16","17","18",};
  drawText(stages[n],STAGE_X2,STAGE_Y,STAGE_PAL);

}

s16 game_mode;//todo

#define BTR(n,x,y) \
  {VDP_setTileMapXY(PLAN_B,TILE_ATTR_FULL(PAL3, TRUE, FALSE, FALSE, TILE_TOP+2+n),x,y);\
  VDP_setTileMapXY(PLAN_B,TILE_ATTR_FULL(PAL3, TRUE, FALSE, FALSE, TILE_TOP+13+2+n),x,y+1);}
#define STR(n,x,y) \
  VDP_setTileMapXY(PLAN_B,TILE_ATTR_FULL(PAL3, TRUE, FALSE, FALSE, TILE_TOP+18+n),x,y)
#define BHR(x) BTR(0,2+x,25)
#define SHR(x) STR(0,2+x,26)

#define SCR(x,y) VDP_setTileMapXY(PLAN_B,TILE_ATTR_FULL(PAL3, TRUE, FALSE, FALSE, 0),x,y)
#define BCR(x,y) {SCR(x,y);SCR(x,y+1);}
#define BCHR(x) BCR(2+x,25)
#define SCHR(x) SCR(2+x,26)

u8 harriers=0;// 残機数
int harriers_inc=0;
void harriers_clear();
static void harriers_init() {
  harriers = 4;
  harriers_inc = 0;
  //bonus=0;
  harriers_set(harriers);
  //harriers_all();
  harriers_inc = 3;
  harriers_update();
}
void harriers_all() {
  for(int i=0;i<9;i++)BHR(i);
  for(int i=9;i<18;i++)SHR(i);
}
void harriers_clear() {
  for(int i=0;i<9;i++)BCHR(i);
  for(int i=9;i<18;i++)SCHR(i);
}
void harriers_set(u8 c) {
  harriers_clear();
  int b = c>>4;
  int x=0;
  for(int i=0;i<b;i++,x++)BHR(x);
  int s = c & 0xf;
  for(int i=0;i<s;i++,x++)SHR(x);
}
static u8 harriers_update2(int n,int x,int y,u8 v,int inc){
  if(inc>0) {
    int s = v&0xf;
    int b = (v>>4)&0xf;
    if(s+inc>=10) {
      BTR(n,x+b,y);
      b++;
      v = (b<<4)+(s+inc-10);
      b+=s+inc-10;
      for(int i=0;i<9-inc;i++,b++)SCR(x+b,y+1);
    } else {
      for(int i=0;i<inc;i++,s++)STR(n,x+b+s,y+1);
      v+=inc;
    }
    return v;
  }
  int s = v&0xf;
  int b = (v>>4)&0xf;
  if(s==0) {
    BCR(x+b-1,y);
    b--;
    v=(b<<4)+9;
    for(int i=0;i<9;i++,b++)STR(n,x+b,y+1);
  } else {
    SCR(x+b+s-1,y+1);
    v--;
  }
  return v;
}
#define clearTile(p,x,y,w,h) VDP_fillTileMapRect(p,TILE_ATTR_FULL(PL0,1,0,0,0),x,y,w,h)
#include "font.h"
#define drawTextL(S,X,Y) drawText2(S,X+16,Y)
void font_small() {
  VDP_loadFont(font_big.tileset, 1);
}
void drawText3(const char *str, u16 x, u16 y,u16 pal) {
//    VDP_setAutoInc(2);
    *((u32 *) GFX_CTRL_PORT) = GFX_WRITE_VRAM_ADDR(VDP_PLAN_B + (x + (y << 6)) * 2);
    u16 base = (((pal & 3) << 13)) | ((TRUE & 1) << 15) | 0x580 ;
    while (*str) *( (u16 *) GFX_DATA_PORT) = base | *str++;
}

//#define clearTile(p,x,y,w,h) VDP_clearTileMapRect(p,x,y,w,h)
void harriers_update() {
  if(harriers==0 && harriers_inc<=0) {
    switch(harriers_inc) {
    case -1:
      STAGE_CLEAR(12,10);
      GAMEOVER(11,10);
      break;
    case -148:
      //clearTile(PL_B,0,4,16,7);
      break;
    case -149:
      //clearTile(PL_B,0,10,512>>3,5);
      break;
    case -150:
      font_small();
      clearTile(PLAN_B,11+16,10,18,2);
      break;
    case -151:
      //play(99); todo
      drawText3("RANKING LIST",16+12+3,5,PAL3);
      drawText3("SCORE  NAME",16+12+6,7,PAL3);
      drawText3("TOP  1000000  KAN",16+12,8,PAL2);
      break;
    case -152:
    case -153:
    case -154:
    case -155:
    case -156:
    case -157:
    case -158: {
      int i = -harriers_inc-152;
      sprintf(str,"%2d.  1000000",i+1);
      drawText3(str,16+12,8+2+i*2,PAL3);
      drawText3("KAN",16+12+14,8+2+i*2,PL3);
      break;
    }
    case -30*40-2: clearTile(PL_B,0,4,16,7); break;
    case -30*40-1: clearTile(PL_B,0,10,512>>3,5); break;
    case -30*40: game_mode=TITLE_MODE; break;
    }
    harriers_inc--;
  } else {
    harriers = harriers_update2(0,2,25,harriers,harriers_inc);
    harriers_inc=0;
  }
}
u8 bonus=0;
int bonus_inc=0;
static u8 bonus_update2(int n,int x,int y,u8 v,int inc){
  if(inc>0) {
    int s = v&0xf;
    int b = (v>>4)&0xf;
    if(s+inc>=10) {
      BTR(n,x+b,y);
      b++;
      v = (b<<4)+(s+inc-10);
      for(int i=s+inc-10;i<s;i++)SCR(x+i,y+1+2);
    } else {
      for(int i=0;i<inc;i++,s++)STR(n,x+s,y+1+2);
      v+=inc;
    }
    return v;
  }
  if(v==0) return 0;
  int s = v&0xf;
  int b = (v>>4)&0xf;
  if(s==0) {
    BCR(x+b-1,y);
    b--;
    v=(b<<4)+9;
    for(int i=0;i<9;i++)STR(n,x+i,y+1+2);
  } else {
    SCR(x+s-1,y+1+2);
    v--;
  }
  return v;
}
void bonus_update(u8 stageV) {
  bonus=bonus_update2(stageV==5?1:2,32,12,bonus,bonus_inc);
  bonus_inc=0;
}
