#define SCORE_VDP_PLAN VDP_PLAN_A
#define SCORE_PAL PAL3
#define SCORE_X 29
#define SCORE_Y 2
#define TOP_SCORE_PAL    PAL1
#define TOP_SCORE_X 7
#define TOP_SCORE_Y 2
#define TOP_SCORE_INIT 0x1000000
#define SCORE_INIT     0x0999900
#define STAGE_PAL PAL2
#define STAGE_X 28
#define STAGE_Y 26
#define STAGE_X2 (STAGE_X+6)
//#define MAX_SCORE 0x9999999
u32 score;
u32 top_score;
void score_add(int point);
void score_init();
void score_update();
void score_stage(u8 n);

void harriers_update();
