#define USP "  "
#define LSP "  "
#define U0 ":\\"
#define L0 "<]"
#define U1 "mw"
#define L1 "'("
#define U2 "ab"
#define L2 "<@"
#define U3 "cb"
#define L3 "de"
#define U4 "fg"
#define L4 "hi"
#define U5 ">j"
#define L5 "k]"
#define U6 ">\""
#define L6 "<]"
#define U7 "l\\"
#define L7 " ,"
#define U8 "nb"
#define L8 "oe"
#define U9 ">*"
#define L9 "pq"
#define UA ")*"
#define LA "+,"
#define UB ">b"
#define LB "<e"
#define UC ":/"
#define LC "<r"
#define UD ":s"
#define LD "<]"
#define UE ">U"
#define LE "<@"
#define UG ":;"
#define LG "<="
#define UH "tu"
#define LH "+,"
#define UI "vw"
#define LI "'("
#define UK "tL"
#define LK "z{"
#define UL "x "
#define LL "<y"
#define UM "-."
#define LM "~\x7f"
#define UN "^_"
#define LN "+`"
#define UO ":\\"
#define LO "<]"
#define UP "NQ"
#define LP "zV"
#define UQ ":\\"
#define LQ "BM"
#define UR "NQ"
#define LR "z{"
#define US "!\""
#define Ls "#$"
#define UT "%&"
#define LT "'("
#define UU "x|"
#define LU "<]"
#define UV "x|"
#define LV "<}"
#define UW "FH"
#define LW "IJ"
#define UY "KL"
#define LY "'("
#define UZ "WX"
#define LZ "Z["
#define drawTextL(S,X,Y) drawText2(S,X+16,Y)
#define STAGE1(x,y) {\
  drawTextL(US UT UA UG UE USP U1,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1,x,y+1);\
  drawTextL(UM UO UO UT,x+3,y+3);\
  drawTextL(LM LO LO LT,x+3,y+4);}
#define STAGE2(x,y) {\
  drawTextL(US UT UA UG UE USP U2,x,y);\
  drawTextL(Ls LT LA LG LE LSP L2,x,y+1);\
  drawTextL(UG UE UE UZ UA,x+2,y+3);\
  drawTextL(LG LE LE LZ LA,x+2,y+4);}
#define STAGE3(x,y) {\
  drawTextL(US UT UA UG UE USP U3,x,y);\
  drawTextL(Ls LT LA LG LE LSP L3,x,y+1);\
  drawTextL(UA UM UA UR,x+3,y+3);\
  drawTextL(LA LM LA LR,x+3,y+4);}
#define STAGE4(x,y) {\
  drawTextL(US UT UA UG UE USP U4,x,y);\
  drawTextL(Ls LT LA LG LE LSP L4,x,y+1);\
  drawTextL(UC UE UI UC UI UE UL,x,y+3);\
  drawTextL(LC LE LI LC LI LE LL,x,y+4);}
#define STAGE5(x,y) {\
  drawTextL(UB UO UN UU US,x,y);\
  drawTextL(LB LO LN LU Ls,x,y+1);\
  drawTextL(US UT UA UG UE,x,y+2);\
  drawTextL(Ls LT LA LG LE,x,y+3);}
#define STAGE6(x,y) {\
  drawTextL(US UT UA UG UE USP U6,x,y);\
  drawTextL(Ls LT LA LG LE LSP L6,x,y+1);\
  drawTextL(UO UL UI US UI US,x+1,y+3);\
  drawTextL(LO LL LI Ls LI Ls,x+1,y+4);}
#define STAGE7(x,y) {\
  drawTextL(US UT UA UG UE USP U7,x,y);\
  drawTextL(Ls LT LA LG LE LSP L7,x,y+1);\
  drawTextL(UL UU UC UA US UI UA,x,y+3);\
  drawTextL(LL LU LC LA Ls LI LA,x,y+4);}
#define STAGE8(x,y) {\
  drawTextL(US UT UA UG UE USP U8,x,y);\
  drawTextL(Ls LT LA LG LE LSP L8,x,y+1);\
  drawTextL(UI UD UA,x+4,y+3);\
  drawTextL(LI LD LA,x+4,y+4);}
#define STAGE9(x,y) {\
  drawTextL(US UT UA UG UE USP U9,x,y);\
  drawTextL(Ls LT LA LG LE LSP L9,x,y+1);\
  drawTextL(UR UE UV UI,x+3,y+3);\
  drawTextL(LR LE LV LI,x+3,y+4);}
#define STAGE10(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U0,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L0,x,y+1);\
  drawTextL(UM UI UN UI UA,x+3,y+3);\
  drawTextL(LM LI LN LI LA,x+3,y+4);}
#define STAGE11(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U1,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L1,x,y+1);\
  drawTextL(UP UA UR UM US,x+3,y+3);\
  drawTextL(LP LA LR LM Ls,x+3,y+4);}
#define STAGE12(x,y) {\
  drawTextL(UB UO UN UU US,x,y);\
  drawTextL(LB LO LN LU Ls,x,y+1);\
  drawTextL(US UT UA UG UE,x,y+2);\
  drawTextL(Ls LT LA LG LE,x,y+3);}
#define STAGE13(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U3,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L3,x,y+1);\
  drawTextL(UD UR UA UI UL,x+3,y+3);\
  drawTextL( LD LR LA LI LL,x+3,y+4);}
#define STAGE14(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U4,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L4,x,y+1);\
  drawTextL( UA US UU UT UE,x+3,y+3);\
  drawTextL( LA Ls LU LT LE,x+3,y+4);}
#define STAGE15(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U5,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L5,x,y+1);\
  drawTextL( UV UI UC UE UL,x+3,y+3);\
  drawTextL( LV LI LC LE LL,x+3,y+4);}
#define STAGE16(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U6,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L6,x,y+1);\
  drawTextL( UN UA UT UU UR UA,x+2,y+3);\
  drawTextL( LN LA LT LU LR LA,x+2,y+4);}
#define STAGE17(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U7,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L7,x,y+1);\
  drawTextL( UN UA UR UK,x+4,y+3);\
  drawTextL( LN LA LR LK,x+4,y+4);}
#define STAGE18(x,y) {\
  drawTextL(US UT UA UG UE USP U1 U8,x,y);\
  drawTextL(Ls LT LA LG LE LSP L1 L8,x,y+1);\
  drawTextL( UA UB US UY UM UB UE UL,x,y+3);\
  drawTextL( LA LB Ls LY LM LB LE LL,x,y+4);}
#define GAMEOVER(x,y) {\
  drawTextL(UG UA UM UE USP UO UV UE UR,x,y);\
  drawTextL(LG LA LM LE LSP LO LV LE LR,x,y+1);}
#define STAGE_CLEAR(x,y) {\
  drawTextL("                ",x,y);\
  drawTextL("                ",x,y+1);\
  drawTextL("                ",x,y+3);\
  drawTextL("                ",x,y+4);}
#define BONUS_STAGE_CLEAR(x,y) {\
  drawTextL("                ",x,y);\
  drawTextL("                ",x,y+1);\
  drawTextL("                ",x,y+2);\
  drawTextL("                ",x,y+3);}
#define BOSS0(x,y) {\
  drawText0("                  ",x,y); \
  drawText0("                  ",x,y+1);}
#define BOSS1(x,y) {\
  drawText0( UG UO UD UA UR UN UI,x,y); \
  drawText0( LG LO LD LA LR LN LI,x,y+1);}
#define BOSS2(x,y) {\
  drawText0( UB UA UR UB UA UR UI UA UN,x,y); \
  drawText0( LB LA LR LB LA LR LI LA LN,x,y+1);}
#define BOSS3(x,y) {\
  drawText0( US UQ UU UI UL UL UA,x,y); \
  drawText0( Ls LQ LU LI LL LL LA,x,y+1);}
#define BOSS4(x,y) {\
  drawText0( UI UD UA,x,y); \
  drawText0( LI LD LA,x,y+1);}
#define BOSS5(x,y) {\
  drawText0( US UA UL UP UE UD UO UN,x,y); \
  drawText0( Ls LA LL LP LE LD LO LN,x,y+1);}
#define BOSS6(x,y) {\
  drawText0( US UY UU UR UA,x,y); \
  drawText0( Ls LY LU LR LA,x,y+1);}
#define BOSS7(x,y) {\
  drawText0( UV UA UL UD UA,x,y); \
  drawText0( LV LA LL LD LA,x,y+1);}
#define BOSS8(x,y) {\
  drawText0( UC UO UN UG UR UA UT UU UL UA UT UI UO UN US,x,y); \
  drawText0( LC LO LN LG LR LA LT LU LL LA LT LI LO LN Ls,x,y+1); \
  drawText0( UY UO UU USP UW UI UN,x+8,y+4); \
  drawText0( LY LO LU LSP LW LI LN,x+8,y+5);}
#define BOSS9(x,y) {\
  drawText0( UU UR UI UA UH,x,y); \
  drawText0( LU LR LI LA LH,x,y+1);}
#define BOSS10(x,y) {\
  drawText0("                              ",x,y); \
  drawText0("                              ",x,y+1);}
#define BOSS12(x,y) {\
  drawText0( UH UA UY UA " " UO UH,x,y); \
  drawText0( LH LA LY LA " " LO LH,x,y+1);}
