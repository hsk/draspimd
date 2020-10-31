#include "genesis.h"
#include "z80.h"
#include "pcm.h"
void play_sample(u32 addr, u32 len) {
    *(vu16*)Z80_HALT_PORT = 0x100;// Disable Z80
    vu8 *pb = (u8 *) 0xa0003a;
    *pb++ = 1;
    *pb++ = addr & 0xff;
    *pb++ = (addr >> 8) & 0xff;
    *pb++ = (addr >> 16) & 0xff;
    *pb++ = len & 0xff;
    *pb++ = (len >> 8) & 0xff;
    *pb++ = (len >> 16) & 0xff;
    *(vu16*)Z80_HALT_PORT = 0; // Enable Z80
}

void main() {
    *(vu16 *) Z80_HALT_PORT = 0x100;
    Z80_upload(0,z80,sizeof(z80),TRUE);
    *(vu16 *) Z80_HALT_PORT = 0;
    play_sample(sega_pcm, sizeof(sega_pcm));

    u16 palette[16];
    memset(palette,0,16*2);
    VDP_setPalette(0,palette);
    VDP_loadTileSet(sega_img.tileset,TILE_USERINDEX,CPU);
    VDP_drawImageEx(PLAN_A,&sega_img,TILE_ATTR_FULL(PAL0,0,0,0,TILE_USERINDEX),0,0,FALSE,CPU);
    VDP_fade(0,15,palette,sega_img.palette->data,60,FALSE);
    for(int i=0;i<60*2;i++)VDP_waitVSync();
    VDP_fade(0,15,sega_img.palette->data,palette,60,FALSE);
    while (1) {}
}
