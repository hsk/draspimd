#include <genesis.h>
#include <malloc.h>
#include <memory.h>
struct VgmPlayer;
typedef void (*FPVGM)(struct VgmPlayer* v);

typedef struct VgmPlayer {
    uint32_t pos;
    FPVGM fp;
} VgmPlayer;

int vgm_init(VgmPlayer* v,FPVGM fp) {
  v->pos=0;
  v->fp=fp;
  return 0;
}

int vgm_play(VgmPlayer* v) {
    v->fp(v);
}
#include "fz2ws.h"
int main() {
  VDP_drawText("test",0,0);
  PSG_init();
  VgmPlayer v;
  vgm_init(&v,fz2ws);
  while(1) {
    VDP_waitVSync();
    vgm_play(&v);
    char buf[32];
    sprintf(buf, "CPU %3d", SYS_getCPULoad());
    VDP_drawText(buf, 3, 1);
  }
  return 0;
}
