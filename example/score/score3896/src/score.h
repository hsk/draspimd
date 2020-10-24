#define SCORE_VDP_PLAN VDP_PLAN_A
#define SCORE_PAL PAL0
#define SCORE_X 29
#define SCORE_Y 3
#define TOP_SCORE_PAL    PAL1
#define TOP_SCORE_X 7
#define TOP_SCORE_Y 3
#define TOP_SCORE_INIT 100000
#define SCORE_INIT     99900
//#define MAX_SCORE 9999999
u32 score;
u32 top_score;
void score_add(int point);
void score_init();
void score_update();
