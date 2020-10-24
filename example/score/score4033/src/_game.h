enum {TITLE_MODE};
extern char str[128];
#define PL0 PAL0
#define PL2 PAL2
#define PL3 PAL1
#define PL_B PLAN_A
enum TILENO {
/*00000*/TILE_SYS=0, //システム用 単色タイル16色
/*00010*/TILE_TREE =   16, //ユーザー用開始位置 背景の木(233)
/*01f20*/TILE_HARRIER =  249, //ハリアー(120)
/*02e20*/TILE_BOMB3 =  369, //爆発(4)
/*02ea0*/TILE_SHOT =  373, //ショット(47)
/*03480*/TILE_SHADOW =  420, //影(10)
/*035c0*/TILE_CHARS =  430, //通常キャラ開始位置(741)
/*09260*/TILE_HARRIER_WU = 1171, //ハリアーこけパターン3個 (42)
/*097a0*/TILE_FIELD_OLD = 1213, //フィールドタイル (227)->(200)
/*097a0*/TILE_TOP = 1213, // TOPタイル
/*09b00*/TILE_FIELD = 1240, //フィールドタイル
/*0b400*/TILE_FONTNO = 1440, //フォント 96キャラ分 (96)
/*0c000*/TILE_BG_TOP = 1536, //縦10キャラ window,planaBG,planbBG,scrolltblBG(40) 80px
/*0c500*/TILE_BOMB4 = 1576, //爆発(20)
/*0c780*/TILE_STAGE_CHANGE = 1596, //未使用(28)   (48)
/*0cb00*/TILE_BG_STG = 1624, //縦6キャラ ステージ表示(24)
/*0ce00*/TILE_BG_BG = 1648, //背景画像BG    512x96px(48)
/*0d400*/TILE_BG_FIELD = 1696, //フィールド1BG 512x96px(48)
/*0da00*/TILE_BG_FIELD2 = 1744, //フィールド2BG 512x96px(48)
/*0e000*/TILE_BOMB1 = 1792, //爆発1                (64)
/*0e800*/TILE_BOMB2 = 1856, //爆発2                (64) (128)
/*0f000*/TILE_SPLIST = 1920, //スプライトリスト 8bytes*80=640 0x280=(20)
/*0f280*/TILE_BG_TILE = 1940, //背景タイル                 (53)     26+60で86個欲しい 53+28 =81
/*0f8c0*/TILE_HARRIER_DAMAGE = 1993, //ハリアー倒れる 0x7f0 bytes (55) (108)
/*10000*/TILE_MAX = 2048, //
};
