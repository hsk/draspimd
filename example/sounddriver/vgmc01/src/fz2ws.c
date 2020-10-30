#include <stdint.h>
typedef struct {
  uint16_t pos;
}VgmPlayer;
#define psg_write(v) *(volatile uint8_t*)0xC00011 = v;
void fz2ws(VgmPlayer* v){
  switch(v->pos++){
    case 0:
      psg_write(136);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(229);
      psg_write(148);
      psg_write(191);
      psg_write(223);
      psg_write(243);
      return;
    case 1:
      psg_write(133);
      psg_write(2);
      return;
    case 2:
      psg_write(136);
      psg_write(2);
      psg_write(244);
      return;
    case 3:
      psg_write(139);
      psg_write(2);
      return;
    case 4:
      psg_write(136);
      psg_write(2);
      psg_write(246);
      return;
    case 5:
      psg_write(133);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(218);
      psg_write(255);
      return;
    case 6:
      psg_write(136);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      psg_write(223);
      return;
    case 7:
      psg_write(139);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(183);
      return;
    case 8:
      psg_write(136);
      psg_write(2);
      psg_write(174);
      psg_write(0);
      return;
    case 9:
      psg_write(133);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(184);
      psg_write(220);
      return;
    case 10:
      psg_write(136);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(191);
      psg_write(223);
      return;
    case 11:
      psg_write(139);
      psg_write(2);
      return;
    case 12:
      psg_write(136);
      psg_write(2);
      psg_write(228);
      return;
    case 13:
      psg_write(133);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(246);
      return;
    case 14:
      psg_write(136);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      psg_write(250);
      return;
    case 15:
      psg_write(139);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(186);
      psg_write(255);
      return;
    case 16:
      psg_write(136);
      psg_write(2);
      psg_write(174);
      psg_write(0);
      return;
    case 17:
      psg_write(133);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(187);
      return;
    case 18:
      psg_write(136);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(191);
      return;
    case 19:
      psg_write(139);
      psg_write(2);
      psg_write(228);
      return;
    case 20:
      psg_write(136);
      psg_write(2);
      psg_write(246);
      return;
    case 21:
      psg_write(133);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(250);
      return;
    case 22:
      psg_write(136);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      psg_write(255);
      return;
    case 23:
      psg_write(139);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(189);
      return;
    case 24:
      psg_write(136);
      psg_write(2);
      psg_write(174);
      psg_write(0);
      return;
    case 25:
      psg_write(133);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(190);
      return;
    case 26:
      psg_write(140);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(230);
      psg_write(191);
      return;
    case 27:
      psg_write(137);
      psg_write(3);
      psg_write(243);
      return;
    case 28:
      psg_write(134);
      psg_write(3);
      psg_write(244);
      return;
    case 29:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(245);
      return;
    case 30:
      psg_write(140);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(247);
      return;
    case 31:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(248);
      return;
    case 32:
      psg_write(134);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      psg_write(249);
      return;
    case 33:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(250);
      return;
    case 34:
      psg_write(140);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(253);
      return;
    case 35:
      psg_write(137);
      psg_write(3);
      psg_write(255);
      return;
    case 36:
      psg_write(134);
      psg_write(3);
      return;
    case 37:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      return;
    case 38:
      psg_write(140);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      return;
    case 39:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      return;
    case 40:
      psg_write(134);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      psg_write(228);
      return;
    case 41:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(243);
      return;
    case 42:
      psg_write(140);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(244);
      return;
    case 43:
      psg_write(159);
      psg_write(245);
      return;
    case 44:
      psg_write(247);
      return;
    case 45:
      psg_write(207);
      psg_write(0);
      psg_write(248);
      return;
    case 46:
      psg_write(139);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      psg_write(148);
      psg_write(249);
      return;
    case 47:
      psg_write(136);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(250);
      return;
    case 48:
      psg_write(133);
      psg_write(2);
      psg_write(174);
      psg_write(0);
      psg_write(253);
      return;
    case 49:
      psg_write(136);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(255);
      return;
    case 50:
      psg_write(139);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      return;
    case 51:
      psg_write(136);
      psg_write(2);
      return;
    case 52:
      psg_write(133);
      psg_write(2);
      return;
    case 53:
      psg_write(207);
      psg_write(0);
      psg_write(229);
      psg_write(159);
      return;
    case 54:
      psg_write(192);
      psg_write(0);
      psg_write(244);
      return;
    case 55:
      psg_write(175);
      psg_write(0);
      psg_write(243);
      return;
    case 56:
      psg_write(174);
      psg_write(0);
      psg_write(244);
      return;
    case 57:
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      return;
    case 58:
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(246);
      return;
    case 59:
      psg_write(247);
      return;
    case 60:
      psg_write(139);
      psg_write(2);
      psg_write(148);
      psg_write(255);
      return;
    case 61:
      psg_write(136);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      return;
    case 62:
      psg_write(133);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      return;
    case 63:
      psg_write(136);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      return;
    case 64:
      psg_write(139);
      psg_write(2);
      psg_write(174);
      psg_write(0);
      return;
    case 65:
      psg_write(136);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      return;
    case 66:
      psg_write(133);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      return;
    case 67:
      psg_write(228);
      psg_write(159);
      return;
    case 68:
      psg_write(246);
      return;
    case 69:
      psg_write(207);
      psg_write(0);
      psg_write(250);
      return;
    case 70:
      psg_write(192);
      psg_write(0);
      psg_write(255);
      return;
    case 71:
      psg_write(175);
      psg_write(0);
      return;
    case 72:
      psg_write(174);
      psg_write(0);
      return;
    case 73:
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      return;
    case 74:
      psg_write(139);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(228);
      psg_write(148);
      return;
    case 75:
      psg_write(136);
      psg_write(2);
      psg_write(246);
      return;
    case 76:
      psg_write(133);
      psg_write(2);
      psg_write(250);
      return;
    case 77:
      psg_write(136);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(255);
      return;
    case 78:
      psg_write(139);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      return;
    case 79:
      psg_write(136);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      return;
    case 80:
      psg_write(133);
      psg_write(2);
      psg_write(174);
      psg_write(0);
      return;
    case 81:
      psg_write(140);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(230);
      return;
    case 82:
      psg_write(137);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(243);
      return;
    case 83:
      psg_write(134);
      psg_write(3);
      psg_write(244);
      return;
    case 84:
      psg_write(137);
      psg_write(3);
      psg_write(245);
      return;
    case 85:
      psg_write(140);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(247);
      return;
    case 86:
      psg_write(137);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(248);
      return;
    case 87:
      psg_write(134);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(249);
      return;
    case 88:
      psg_write(137);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      psg_write(250);
      return;
    case 89:
      psg_write(140);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(253);
      return;
    case 90:
      psg_write(137);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(255);
      return;
    case 91:
      psg_write(134);
      psg_write(3);
      return;
    case 92:
      psg_write(137);
      psg_write(3);
      return;
    case 93:
      psg_write(140);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      return;
    case 94:
      psg_write(137);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(228);
      return;
    case 95:
      psg_write(134);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(243);
      return;
    case 96:
      psg_write(137);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      psg_write(244);
      return;
    case 97:
      psg_write(140);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(245);
      return;
    case 98:
      psg_write(137);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(247);
      return;
    case 99:
      psg_write(134);
      psg_write(3);
      psg_write(248);
      return;
    case 100:
      psg_write(137);
      psg_write(3);
      psg_write(249);
      return;
    case 101:
      psg_write(207);
      psg_write(0);
      psg_write(159);
      psg_write(250);
      return;
    case 102:
      psg_write(192);
      psg_write(0);
      psg_write(253);
      return;
    case 103:
      psg_write(175);
      psg_write(0);
      psg_write(255);
      return;
    case 104:
      psg_write(174);
      psg_write(0);
      return;
    case 105:
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      return;
    case 106:
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      return;
    case 107:
      return;
    case 108:
      psg_write(140);
      psg_write(3);
      psg_write(229);
      psg_write(148);
      return;
    case 109:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(244);
      return;
    case 110:
      psg_write(134);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(243);
      return;
    case 111:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(244);
      return;
    case 112:
      psg_write(140);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      return;
    case 113:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(246);
      return;
    case 114:
      psg_write(134);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(247);
      return;
    case 115:
      psg_write(137);
      psg_write(3);
      psg_write(229);
      return;
    case 116:
      psg_write(140);
      psg_write(3);
      psg_write(244);
      return;
    case 117:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(243);
      return;
    case 118:
      psg_write(192);
      psg_write(0);
      psg_write(159);
      psg_write(244);
      return;
    case 119:
      psg_write(175);
      psg_write(0);
      return;
    case 120:
      psg_write(174);
      psg_write(0);
      psg_write(246);
      return;
    case 121:
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(247);
      return;
    case 122:
      psg_write(139);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(228);
      psg_write(148);
      return;
    case 123:
      psg_write(136);
      psg_write(2);
      psg_write(246);
      return;
    case 124:
      psg_write(133);
      psg_write(2);
      psg_write(250);
      return;
    case 125:
      psg_write(136);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(255);
      return;
    case 126:
      psg_write(139);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      return;
    case 127:
      psg_write(136);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      return;
    case 128:
      psg_write(133);
      psg_write(2);
      psg_write(174);
      psg_write(0);
      return;
    case 129:
      psg_write(136);
      psg_write(2);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(228);
      return;
    case 130:
      psg_write(139);
      psg_write(2);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(246);
      return;
    case 131:
      psg_write(136);
      psg_write(2);
      psg_write(250);
      return;
    case 132:
      psg_write(159);
      psg_write(255);
      return;
    case 133:
      psg_write(207);
      psg_write(0);
      return;
    case 134:
      psg_write(192);
      psg_write(0);
      return;
    case 135:
      psg_write(175);
      psg_write(0);
      return;
    case 136:
      psg_write(140);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      psg_write(230);
      psg_write(148);
      return;
    case 137:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(243);
      return;
    case 138:
      psg_write(134);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(244);
      return;
    case 139:
      psg_write(137);
      psg_write(3);
      psg_write(245);
      return;
    case 140:
      psg_write(140);
      psg_write(3);
      psg_write(247);
      return;
    case 141:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(248);
      return;
    case 142:
      psg_write(134);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(230);
      return;
    case 143:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(243);
      return;
    case 144:
      psg_write(140);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      psg_write(244);
      return;
    case 145:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(245);
      return;
    case 146:
      psg_write(134);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      psg_write(247);
      return;
    case 147:
      psg_write(137);
      psg_write(3);
      psg_write(248);
      return;
    case 148:
      psg_write(140);
      psg_write(3);
      psg_write(249);
      return;
    case 149:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(228);
      psg_write(255);
      return;
    case 150:
      psg_write(134);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(246);
      return;
    case 151:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(250);
      return;
    case 152:
      psg_write(140);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      psg_write(255);
      return;
    case 153:
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      psg_write(159);
      return;
    case 154:
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      return;
    case 155:
      return;
    case 156:
      psg_write(228);
      psg_write(148);
      return;
    case 157:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(246);
      return;
    case 158:
      psg_write(134);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(250);
      return;
    case 159:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(255);
      return;
    case 160:
      psg_write(140);
      psg_write(3);
      psg_write(174);
      psg_write(0);
      return;
    case 161:
      psg_write(137);
      psg_write(3);
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      return;
    case 162:
      psg_write(134);
      psg_write(3);
      psg_write(160);
      psg_write(0);
      psg_write(192);
      psg_write(0);
      return;
    case 163:
      psg_write(159);
      return;
    case 164:
      return;
    case 165:
      psg_write(207);
      psg_write(0);
      return;
    case 166:
      psg_write(192);
      psg_write(0);
      return;
    case 167:
      psg_write(175);
      psg_write(0);
      return;
    case 168:
      psg_write(174);
      psg_write(0);
      return;
    case 169:
      psg_write(175);
      psg_write(0);
      psg_write(207);
      psg_write(0);
      return;
    case 170:
      psg_write(139);
      psg_write(2);
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      psg_write(229);
      psg_write(148);
      psg_write(180);
      return;
    case 171:
      psg_write(136);
      psg_write(2);
      psg_write(244);
      return;
    case 172:
      psg_write(133);
      psg_write(2);
      psg_write(243);
      return;
    case 173:
      psg_write(136);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(181);
      psg_write(244);
      return;
    case 174:
      psg_write(139);
      psg_write(2);
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      return;
    case 175:
      psg_write(136);
      psg_write(2);
      psg_write(172);
      psg_write(35);
      psg_write(182);
      psg_write(246);
      return;
    case 176:
      psg_write(133);
      psg_write(2);
      psg_write(171);
      psg_write(35);
      psg_write(247);
      return;
    case 177:
      psg_write(136);
      psg_write(2);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(0);
      psg_write(228);
      psg_write(255);
      return;
    case 178:
      psg_write(139);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      psg_write(183);
      psg_write(246);
      return;
    case 179:
      psg_write(136);
      psg_write(2);
      psg_write(250);
      return;
    case 180:
      psg_write(159);
      psg_write(184);
      psg_write(255);
      return;
    case 181:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(0);
      return;
    case 182:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      return;
    case 183:
      psg_write(171);
      psg_write(35);
      psg_write(185);
      return;
    case 184:
      psg_write(139);
      psg_write(2);
      psg_write(170);
      psg_write(35);
      psg_write(229);
      psg_write(148);
      psg_write(180);
      return;
    case 185:
      psg_write(136);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(244);
      return;
    case 186:
      psg_write(133);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      psg_write(243);
      return;
    case 187:
      psg_write(136);
      psg_write(2);
      psg_write(181);
      psg_write(244);
      return;
    case 188:
      psg_write(139);
      psg_write(2);
      psg_write(171);
      psg_write(35);
      return;
    case 189:
      psg_write(136);
      psg_write(2);
      psg_write(172);
      psg_write(35);
      psg_write(207);
      psg_write(0);
      psg_write(182);
      psg_write(246);
      return;
    case 190:
      psg_write(139);
      psg_write(2);
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      psg_write(230);
      psg_write(180);
      return;
    case 191:
      psg_write(136);
      psg_write(2);
      psg_write(243);
      return;
    case 192:
      psg_write(133);
      psg_write(2);
      psg_write(244);
      return;
    case 193:
      psg_write(136);
      psg_write(2);
      psg_write(207);
      psg_write(0);
      psg_write(181);
      psg_write(245);
      return;
    case 194:
      psg_write(139);
      psg_write(2);
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      psg_write(247);
      return;
    case 195:
      psg_write(136);
      psg_write(2);
      psg_write(172);
      psg_write(35);
      psg_write(182);
      psg_write(248);
      return;
    case 196:
      psg_write(133);
      psg_write(2);
      psg_write(171);
      psg_write(35);
      psg_write(249);
      return;
    case 197:
      psg_write(136);
      psg_write(2);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(0);
      psg_write(250);
      return;
    case 198:
      psg_write(139);
      psg_write(2);
      psg_write(192);
      psg_write(0);
      psg_write(183);
      psg_write(253);
      return;
    case 199:
      psg_write(136);
      psg_write(2);
      psg_write(255);
      return;
    case 200:
      psg_write(133);
      psg_write(2);
      psg_write(184);
      return;
    case 201:
      psg_write(136);
      psg_write(2);
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(0);
      return;
    case 202:
      psg_write(139);
      psg_write(2);
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      return;
    case 203:
      psg_write(136);
      psg_write(2);
      psg_write(171);
      psg_write(35);
      psg_write(185);
      return;
    case 204:
      psg_write(140);
      psg_write(3);
      psg_write(170);
      psg_write(35);
      psg_write(228);
      psg_write(180);
      return;
    case 205:
      psg_write(140);
      psg_write(3);
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      psg_write(228);
      psg_write(148);
      psg_write(180);
      psg_write(223);
      psg_write(255);
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(228);
      psg_write(243);
      return;
    case 206:
      psg_write(134);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(244);
      return;
    case 207:
      psg_write(137);
      psg_write(3);
      psg_write(181);
      psg_write(245);
      return;
    case 208:
      psg_write(140);
      psg_write(3);
      psg_write(171);
      psg_write(35);
      psg_write(247);
      return;
    case 209:
      psg_write(137);
      psg_write(3);
      psg_write(172);
      psg_write(35);
      psg_write(207);
      psg_write(0);
      psg_write(182);
      psg_write(248);
      return;
    case 210:
      psg_write(134);
      psg_write(3);
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(0);
      psg_write(249);
      return;
    case 211:
      psg_write(137);
      psg_write(3);
      psg_write(170);
      psg_write(35);
      psg_write(250);
      return;
    case 212:
      psg_write(140);
      psg_write(3);
      psg_write(183);
      psg_write(253);
      return;
    case 213:
      psg_write(137);
      psg_write(3);
      psg_write(207);
      psg_write(0);
      psg_write(255);
      return;
    case 214:
      psg_write(134);
      psg_write(3);
      psg_write(192);
      psg_write(0);
      psg_write(184);
      return;
    case 215:
      psg_write(137);
      psg_write(3);
      psg_write(171);
      psg_write(35);
      return;
    case 216:
      psg_write(140);
      psg_write(3);
      psg_write(172);
      psg_write(35);
      return;
    case 217:
      psg_write(137);
      psg_write(3);
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(0);
      psg_write(185);
      return;
    case 218:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 219:
      psg_write(146);
      psg_write(244);
      return;
    case 220:
      psg_write(243);
      return;
    case 221:
      psg_write(181);
      psg_write(244);
      return;
    case 222:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 223:
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 224:
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(247);
      return;
    case 225:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 226:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(148);
      return;
    case 227:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      return;
    case 228:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(149);
      return;
    case 229:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 230:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 231:
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      psg_write(186);
      return;
    case 232:
      psg_write(143);
      psg_write(8);
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      return;
    case 233:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      psg_write(246);
      return;
    case 234:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(215);
      psg_write(250);
      return;
    case 235:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      psg_write(255);
      return;
    case 236:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      return;
    case 237:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      return;
    case 238:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 239:
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 240:
      psg_write(204);
      psg_write(17);
      psg_write(250);
      return;
    case 241:
      psg_write(205);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 242:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 243:
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      psg_write(182);
      return;
    case 244:
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(151);
      return;
    case 245:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 246:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(243);
      return;
    case 247:
      psg_write(163);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      psg_write(244);
      return;
    case 248:
      psg_write(164);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(245);
      return;
    case 249:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(185);
      psg_write(247);
      return;
    case 250:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(216);
      psg_write(248);
      return;
    case 251:
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(186);
      psg_write(249);
      return;
    case 252:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(147);
      psg_write(255);
      return;
    case 253:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      return;
    case 254:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 255:
      psg_write(163);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      return;
    case 256:
      psg_write(164);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      return;
    case 257:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      return;
    case 258:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 259:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 260:
      psg_write(204);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 261:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 262:
      psg_write(206);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 263:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 264:
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(182);
      return;
    case 265:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      return;
    case 266:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      psg_write(217);
      return;
    case 267:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 268:
      psg_write(168);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(184);
      psg_write(243);
      return;
    case 269:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(244);
      return;
    case 270:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 271:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(246);
      return;
    case 272:
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      psg_write(247);
      return;
    case 273:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(250);
      return;
    case 274:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(148);
      psg_write(187);
      psg_write(253);
      return;
    case 275:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(255);
      return;
    case 276:
      psg_write(168);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(149);
      psg_write(188);
      return;
    case 277:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 278:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(189);
      return;
    case 279:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      return;
    case 280:
      psg_write(143);
      psg_write(7);
      psg_write(171);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 281:
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 282:
      psg_write(206);
      psg_write(17);
      psg_write(218);
      psg_write(243);
      return;
    case 283:
      psg_write(205);
      psg_write(17);
      psg_write(181);
      psg_write(244);
      return;
    case 284:
      psg_write(172);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      return;
    case 285:
      psg_write(173);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 286:
      psg_write(172);
      psg_write(31);
      psg_write(147);
      psg_write(214);
      psg_write(247);
      return;
    case 287:
      psg_write(171);
      psg_write(31);
      psg_write(148);
      psg_write(183);
      psg_write(250);
      return;
    case 288:
      psg_write(170);
      psg_write(31);
      psg_write(253);
      return;
    case 289:
      psg_write(169);
      psg_write(31);
      psg_write(149);
      psg_write(184);
      psg_write(255);
      return;
    case 290:
      psg_write(170);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      return;
    case 291:
      psg_write(171);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 292:
      psg_write(172);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(151);
      return;
    case 293:
      psg_write(137);
      psg_write(10);
      psg_write(173);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(186);
      return;
    case 294:
      psg_write(172);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 295:
      psg_write(171);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(187);
      psg_write(243);
      return;
    case 296:
      psg_write(170);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(244);
      return;
    case 297:
      psg_write(169);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      return;
    case 298:
      psg_write(170);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(246);
      return;
    case 299:
      psg_write(171);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      psg_write(247);
      return;
    case 300:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 301:
      psg_write(146);
      psg_write(243);
      return;
    case 302:
      psg_write(244);
      return;
    case 303:
      psg_write(181);
      psg_write(245);
      return;
    case 304:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 305:
      psg_write(172);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 306:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(15);
      psg_write(249);
      return;
    case 307:
      psg_write(128);
      psg_write(9);
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 308:
      psg_write(143);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 309:
      psg_write(142);
      psg_write(8);
      psg_write(168);
      psg_write(35);
      psg_write(184);
      return;
    case 310:
      psg_write(141);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 311:
      psg_write(142);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 312:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      return;
    case 313:
      psg_write(128);
      psg_write(9);
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      return;
    case 314:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 315:
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(246);
      return;
    case 316:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 317:
      psg_write(204);
      psg_write(17);
      psg_write(181);
      psg_write(255);
      return;
    case 318:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 319:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(182);
      return;
    case 320:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 321:
      psg_write(128);
      psg_write(8);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 322:
      psg_write(143);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(244);
      return;
    case 323:
      psg_write(142);
      psg_write(7);
      psg_write(163);
      psg_write(42);
      psg_write(184);
      psg_write(243);
      return;
    case 324:
      psg_write(141);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(244);
      return;
    case 325:
      psg_write(142);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(185);
      return;
    case 326:
      psg_write(143);
      psg_write(7);
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 327:
      psg_write(128);
      psg_write(8);
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      psg_write(186);
      psg_write(247);
      return;
    case 328:
      psg_write(137);
      psg_write(10);
      psg_write(169);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 329:
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(244);
      return;
    case 330:
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 331:
      psg_write(205);
      psg_write(18);
      psg_write(181);
      psg_write(244);
      return;
    case 332:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 333:
      psg_write(171);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 334:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(147);
      psg_write(255);
      return;
    case 335:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(148);
      psg_write(183);
      return;
    case 336:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 337:
      psg_write(167);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(149);
      psg_write(184);
      psg_write(215);
      return;
    case 338:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 339:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(150);
      psg_write(185);
      return;
    case 340:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(151);
      return;
    case 341:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(186);
      return;
    case 342:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(146);
      psg_write(246);
      return;
    case 343:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(187);
      psg_write(250);
      return;
    case 344:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(255);
      return;
    case 345:
      psg_write(167);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(188);
      return;
    case 346:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 347:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(189);
      return;
    case 348:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 349:
      psg_write(207);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 350:
      psg_write(206);
      psg_write(18);
      psg_write(250);
      return;
    case 351:
      psg_write(205);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 352:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(150);
      return;
    case 353:
      psg_write(174);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(182);
      psg_write(216);
      return;
    case 354:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(151);
      return;
    case 355:
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 356:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(146);
      psg_write(243);
      return;
    case 357:
      psg_write(170);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(184);
      psg_write(244);
      return;
    case 358:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(245);
      return;
    case 359:
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(185);
      psg_write(247);
      return;
    case 360:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(248);
      return;
    case 361:
      psg_write(174);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(186);
      psg_write(249);
      return;
    case 362:
      psg_write(142);
      psg_write(15);
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(147);
      psg_write(255);
      return;
    case 363:
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(146);
      psg_write(187);
      return;
    case 364:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      return;
    case 365:
      psg_write(170);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(188);
      return;
    case 366:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      return;
    case 367:
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(189);
      return;
    case 368:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      return;
    case 369:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(217);
      return;
    case 370:
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 371:
      psg_write(205);
      psg_write(18);
      psg_write(250);
      return;
    case 372:
      psg_write(206);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 373:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(150);
      return;
    case 374:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 375:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(151);
      return;
    case 376:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 377:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(244);
      return;
    case 378:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(243);
      return;
    case 379:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(244);
      return;
    case 380:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(185);
      return;
    case 381:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(246);
      return;
    case 382:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(186);
      psg_write(247);
      return;
    case 383:
      psg_write(143);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(147);
      psg_write(250);
      return;
    case 384:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(187);
      psg_write(253);
      return;
    case 385:
      psg_write(141);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(218);
      psg_write(255);
      return;
    case 386:
      psg_write(140);
      psg_write(11);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(188);
      return;
    case 387:
      psg_write(141);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      return;
    case 388:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(189);
      return;
    case 389:
      psg_write(143);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(229);
      psg_write(180);
      return;
    case 390:
      psg_write(142);
      psg_write(11);
      psg_write(206);
      psg_write(18);
      psg_write(244);
      return;
    case 391:
      psg_write(141);
      psg_write(11);
      psg_write(205);
      psg_write(18);
      psg_write(243);
      return;
    case 392:
      psg_write(140);
      psg_write(11);
      psg_write(206);
      psg_write(18);
      psg_write(181);
      psg_write(244);
      return;
    case 393:
      psg_write(141);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(149);
      return;
    case 394:
      psg_write(142);
      psg_write(11);
      psg_write(166);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 395:
      psg_write(143);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(247);
      return;
    case 396:
      psg_write(142);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 397:
      psg_write(141);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      psg_write(253);
      return;
    case 398:
      psg_write(140);
      psg_write(11);
      psg_write(162);
      psg_write(28);
      psg_write(184);
      psg_write(255);
      return;
    case 399:
      psg_write(141);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      psg_write(150);
      return;
    case 400:
      psg_write(142);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(185);
      return;
    case 401:
      psg_write(143);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 402:
      psg_write(142);
      psg_write(11);
      psg_write(166);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(186);
      return;
    case 403:
      psg_write(141);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      return;
    case 404:
      psg_write(140);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(151);
      psg_write(187);
      psg_write(244);
      return;
    case 405:
      psg_write(141);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 406:
      psg_write(142);
      psg_write(11);
      psg_write(162);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(188);
      psg_write(244);
      return;
    case 407:
      psg_write(143);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 408:
      psg_write(142);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(189);
      psg_write(246);
      return;
    case 409:
      psg_write(141);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(152);
      psg_write(247);
      return;
    case 410:
      psg_write(134);
      psg_write(13);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 411:
      psg_write(146);
      psg_write(243);
      return;
    case 412:
      psg_write(244);
      return;
    case 413:
      psg_write(181);
      psg_write(245);
      return;
    case 414:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 415:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 416:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(249);
      return;
    case 417:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 418:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(148);
      return;
    case 419:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(184);
      return;
    case 420:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(149);
      return;
    case 421:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(150);
      psg_write(185);
      return;
    case 422:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 423:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(151);
      psg_write(186);
      return;
    case 424:
      psg_write(142);
      psg_write(11);
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 425:
      psg_write(146);
      psg_write(246);
      return;
    case 426:
      psg_write(250);
      return;
    case 427:
      psg_write(181);
      psg_write(255);
      return;
    case 428:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      return;
    case 429:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(182);
      return;
    case 430:
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      psg_write(229);
      psg_write(147);
      return;
    case 431:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(148);
      psg_write(183);
      psg_write(244);
      return;
    case 432:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(243);
      return;
    case 433:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(149);
      psg_write(184);
      psg_write(244);
      return;
    case 434:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      return;
    case 435:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(150);
      psg_write(185);
      psg_write(246);
      return;
    case 436:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(151);
      psg_write(247);
      return;
    case 437:
      psg_write(132);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 438:
      psg_write(146);
      psg_write(244);
      return;
    case 439:
      psg_write(243);
      return;
    case 440:
      psg_write(181);
      psg_write(244);
      return;
    case 441:
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      return;
    case 442:
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(182);
      psg_write(246);
      return;
    case 443:
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(247);
      return;
    case 444:
      psg_write(133);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 445:
      psg_write(132);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      return;
    case 446:
      psg_write(131);
      psg_write(11);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(184);
      return;
    case 447:
      psg_write(130);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 448:
      psg_write(131);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(185);
      return;
    case 449:
      psg_write(132);
      psg_write(11);
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      psg_write(148);
      return;
    case 450:
      psg_write(133);
      psg_write(11);
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(186);
      return;
    case 451:
      psg_write(132);
      psg_write(11);
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(228);
      return;
    case 452:
      psg_write(131);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(187);
      psg_write(246);
      return;
    case 453:
      psg_write(130);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      psg_write(215);
      psg_write(250);
      return;
    case 454:
      psg_write(131);
      psg_write(11);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(149);
      psg_write(188);
      psg_write(255);
      return;
    case 455:
      psg_write(132);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 456:
      psg_write(133);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(189);
      return;
    case 457:
      psg_write(132);
      psg_write(11);
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      return;
    case 458:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 459:
      psg_write(146);
      psg_write(246);
      return;
    case 460:
      psg_write(250);
      return;
    case 461:
      psg_write(181);
      psg_write(255);
      return;
    case 462:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 463:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      return;
    case 464:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 465:
      psg_write(143);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 466:
      psg_write(142);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(243);
      return;
    case 467:
      psg_write(141);
      psg_write(11);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(184);
      psg_write(244);
      return;
    case 468:
      psg_write(140);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(245);
      return;
    case 469:
      psg_write(141);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(185);
      psg_write(247);
      return;
    case 470:
      psg_write(142);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(148);
      psg_write(248);
      return;
    case 471:
      psg_write(143);
      psg_write(11);
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(186);
      psg_write(249);
      return;
    case 472:
      psg_write(142);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(255);
      return;
    case 473:
      psg_write(141);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(187);
      return;
    case 474:
      psg_write(140);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(215);
      return;
    case 475:
      psg_write(141);
      psg_write(11);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(149);
      psg_write(188);
      return;
    case 476:
      psg_write(142);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 477:
      psg_write(143);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(189);
      return;
    case 478:
      psg_write(134);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 479:
      psg_write(146);
      psg_write(246);
      return;
    case 480:
      psg_write(250);
      return;
    case 481:
      psg_write(181);
      psg_write(255);
      return;
    case 482:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 483:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      return;
    case 484:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 485:
      psg_write(135);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 486:
      psg_write(134);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(244);
      return;
    case 487:
      psg_write(133);
      psg_write(13);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      psg_write(243);
      return;
    case 488:
      psg_write(132);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 489:
      psg_write(133);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 490:
      psg_write(134);
      psg_write(13);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 491:
      psg_write(135);
      psg_write(13);
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 492:
      psg_write(134);
      psg_write(13);
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(250);
      return;
    case 493:
      psg_write(133);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(187);
      psg_write(253);
      return;
    case 494:
      psg_write(132);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(215);
      psg_write(255);
      return;
    case 495:
      psg_write(133);
      psg_write(13);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(149);
      psg_write(188);
      return;
    case 496:
      psg_write(134);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 497:
      psg_write(135);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(189);
      return;
    case 498:
      psg_write(134);
      psg_write(13);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 499:
      psg_write(133);
      psg_write(13);
      psg_write(167);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(180);
      return;
    case 500:
      psg_write(132);
      psg_write(13);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 501:
      psg_write(133);
      psg_write(13);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(243);
      return;
    case 502:
      psg_write(134);
      psg_write(13);
      psg_write(193);
      psg_write(20);
      psg_write(181);
      psg_write(244);
      return;
    case 503:
      psg_write(135);
      psg_write(13);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      return;
    case 504:
      psg_write(134);
      psg_write(13);
      psg_write(169);
      psg_write(22);
      psg_write(207);
      psg_write(19);
      psg_write(182);
      psg_write(246);
      return;
    case 505:
      psg_write(133);
      psg_write(13);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(247);
      return;
    case 506:
      psg_write(142);
      psg_write(15);
      psg_write(167);
      psg_write(22);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 507:
      psg_write(166);
      psg_write(22);
      psg_write(146);
      psg_write(253);
      return;
    case 508:
      psg_write(165);
      psg_write(22);
      psg_write(184);
      psg_write(255);
      return;
    case 509:
      psg_write(166);
      psg_write(22);
      return;
    case 510:
      psg_write(167);
      psg_write(22);
      psg_write(193);
      psg_write(20);
      psg_write(185);
      return;
    case 511:
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      return;
    case 512:
      psg_write(169);
      psg_write(22);
      psg_write(207);
      psg_write(19);
      psg_write(186);
      return;
    case 513:
      psg_write(141);
      psg_write(17);
      psg_write(173);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 514:
      psg_write(146);
      psg_write(244);
      return;
    case 515:
      psg_write(243);
      return;
    case 516:
      psg_write(181);
      psg_write(244);
      return;
    case 517:
      psg_write(174);
      psg_write(23);
      psg_write(196);
      psg_write(21);
      return;
    case 518:
      psg_write(175);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 519:
      psg_write(174);
      psg_write(23);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 520:
      psg_write(142);
      psg_write(15);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 521:
      psg_write(146);
      psg_write(243);
      return;
    case 522:
      psg_write(244);
      return;
    case 523:
      psg_write(181);
      psg_write(245);
      return;
    case 524:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 525:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 526:
      psg_write(141);
      psg_write(17);
      psg_write(172);
      psg_write(26);
      psg_write(147);
      psg_write(255);
      return;
    case 527:
      psg_write(171);
      psg_write(26);
      psg_write(146);
      psg_write(183);
      return;
    case 528:
      psg_write(170);
      psg_write(26);
      return;
    case 529:
      psg_write(169);
      psg_write(26);
      psg_write(184);
      return;
    case 530:
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 531:
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 532:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 533:
      psg_write(171);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 534:
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 535:
      psg_write(192);
      psg_write(20);
      psg_write(250);
      return;
    case 536:
      psg_write(207);
      psg_write(19);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 537:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      return;
    case 538:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(182);
      return;
    case 539:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(151);
      return;
    case 540:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 541:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(146);
      psg_write(244);
      return;
    case 542:
      psg_write(169);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(184);
      psg_write(215);
      psg_write(243);
      return;
    case 543:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(244);
      return;
    case 544:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(185);
      return;
    case 545:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(246);
      return;
    case 546:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 547:
      psg_write(138);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 548:
      psg_write(137);
      psg_write(10);
      psg_write(244);
      return;
    case 549:
      psg_write(136);
      psg_write(10);
      psg_write(243);
      return;
    case 550:
      psg_write(135);
      psg_write(10);
      psg_write(181);
      psg_write(244);
      return;
    case 551:
      psg_write(136);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 552:
      psg_write(137);
      psg_write(10);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(148);
      psg_write(182);
      psg_write(246);
      return;
    case 553:
      psg_write(138);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 554:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(183);
      psg_write(255);
      return;
    case 555:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 556:
      psg_write(135);
      psg_write(10);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      return;
    case 557:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(149);
      return;
    case 558:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 559:
      psg_write(138);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 560:
      psg_write(137);
      psg_write(10);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(186);
      return;
    case 561:
      psg_write(136);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(228);
      return;
    case 562:
      psg_write(135);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      psg_write(246);
      return;
    case 563:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(150);
      psg_write(215);
      psg_write(250);
      return;
    case 564:
      psg_write(137);
      psg_write(10);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(188);
      psg_write(255);
      return;
    case 565:
      psg_write(138);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 566:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(189);
      return;
    case 567:
      psg_write(136);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 568:
      psg_write(135);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(151);
      psg_write(180);
      return;
    case 569:
      psg_write(136);
      psg_write(10);
      psg_write(194);
      psg_write(21);
      psg_write(246);
      return;
    case 570:
      psg_write(137);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(250);
      return;
    case 571:
      psg_write(138);
      psg_write(10);
      psg_write(196);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 572:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      return;
    case 573:
      psg_write(136);
      psg_write(10);
      psg_write(167);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(152);
      psg_write(182);
      return;
    case 574:
      psg_write(135);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(230);
      return;
    case 575:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(183);
      psg_write(243);
      return;
    case 576:
      psg_write(137);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 577:
      psg_write(138);
      psg_write(10);
      psg_write(163);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(184);
      psg_write(245);
      return;
    case 578:
      psg_write(137);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(247);
      return;
    case 579:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(153);
      psg_write(185);
      psg_write(216);
      psg_write(248);
      return;
    case 580:
      psg_write(135);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(249);
      return;
    case 581:
      psg_write(136);
      psg_write(10);
      psg_write(167);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(154);
      psg_write(186);
      psg_write(255);
      return;
    case 582:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      return;
    case 583:
      psg_write(138);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(155);
      psg_write(187);
      return;
    case 584:
      psg_write(137);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      return;
    case 585:
      psg_write(136);
      psg_write(10);
      psg_write(163);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(156);
      psg_write(188);
      return;
    case 586:
      psg_write(135);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(157);
      return;
    case 587:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(189);
      return;
    case 588:
      psg_write(137);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(158);
      psg_write(180);
      return;
    case 589:
      psg_write(138);
      psg_write(10);
      psg_write(194);
      psg_write(21);
      psg_write(246);
      return;
    case 590:
      psg_write(137);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(159);
      psg_write(250);
      return;
    case 591:
      psg_write(136);
      psg_write(10);
      psg_write(196);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 592:
      psg_write(135);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 593:
      psg_write(136);
      psg_write(10);
      psg_write(172);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(182);
      return;
    case 594:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 595:
      psg_write(138);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(229);
      psg_write(183);
      psg_write(217);
      return;
    case 596:
      psg_write(137);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 597:
      psg_write(136);
      psg_write(10);
      psg_write(168);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(184);
      psg_write(243);
      return;
    case 598:
      psg_write(135);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 599:
      psg_write(136);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      return;
    case 600:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(246);
      return;
    case 601:
      psg_write(138);
      psg_write(10);
      psg_write(172);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(186);
      psg_write(247);
      return;
    case 602:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(250);
      return;
    case 603:
      psg_write(136);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(187);
      psg_write(253);
      return;
    case 604:
      psg_write(135);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(255);
      return;
    case 605:
      psg_write(136);
      psg_write(10);
      psg_write(168);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(188);
      return;
    case 606:
      psg_write(137);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 607:
      psg_write(138);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(189);
      return;
    case 608:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 609:
      psg_write(136);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      psg_write(229);
      psg_write(180);
      return;
    case 610:
      psg_write(135);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 611:
      psg_write(136);
      psg_write(10);
      psg_write(196);
      psg_write(21);
      psg_write(218);
      psg_write(243);
      return;
    case 612:
      psg_write(137);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(181);
      psg_write(244);
      return;
    case 613:
      psg_write(138);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      return;
    case 614:
      psg_write(137);
      psg_write(10);
      psg_write(173);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 615:
      psg_write(136);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(196);
      psg_write(21);
      psg_write(247);
      return;
    case 616:
      psg_write(135);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 617:
      psg_write(136);
      psg_write(10);
      psg_write(170);
      psg_write(31);
      psg_write(253);
      return;
    case 618:
      psg_write(137);
      psg_write(10);
      psg_write(169);
      psg_write(31);
      psg_write(184);
      psg_write(255);
      return;
    case 619:
      psg_write(138);
      psg_write(10);
      psg_write(170);
      psg_write(31);
      return;
    case 620:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      return;
    case 621:
      psg_write(136);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      return;
    case 622:
      psg_write(135);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      psg_write(229);
      psg_write(180);
      return;
    case 623:
      psg_write(136);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 624:
      psg_write(137);
      psg_write(10);
      psg_write(196);
      psg_write(21);
      psg_write(243);
      return;
    case 625:
      psg_write(138);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(181);
      psg_write(244);
      return;
    case 626:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      return;
    case 627:
      psg_write(136);
      psg_write(10);
      psg_write(173);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 628:
      psg_write(135);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(196);
      psg_write(21);
      psg_write(247);
      return;
    case 629:
      psg_write(134);
      psg_write(13);
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 630:
      psg_write(146);
      psg_write(243);
      return;
    case 631:
      psg_write(244);
      return;
    case 632:
      psg_write(181);
      psg_write(245);
      return;
    case 633:
      psg_write(171);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 634:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 635:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(19);
      psg_write(249);
      return;
    case 636:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 637:
      psg_write(169);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      return;
    case 638:
      psg_write(168);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      return;
    case 639:
      psg_write(169);
      psg_write(35);
      psg_write(207);
      psg_write(19);
      psg_write(149);
      return;
    case 640:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(185);
      return;
    case 641:
      psg_write(171);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      return;
    case 642:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(151);
      psg_write(186);
      return;
    case 643:
      psg_write(142);
      psg_write(11);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 644:
      psg_write(146);
      psg_write(246);
      return;
    case 645:
      psg_write(250);
      return;
    case 646:
      psg_write(181);
      psg_write(255);
      return;
    case 647:
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      return;
    case 648:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 649:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      return;
    case 650:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 651:
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(148);
      psg_write(244);
      return;
    case 652:
      psg_write(163);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(243);
      return;
    case 653:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      psg_write(149);
      psg_write(244);
      return;
    case 654:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(150);
      psg_write(185);
      return;
    case 655:
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(246);
      return;
    case 656:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(151);
      psg_write(186);
      psg_write(247);
      return;
    case 657:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 658:
      psg_write(146);
      psg_write(244);
      return;
    case 659:
      psg_write(243);
      return;
    case 660:
      psg_write(181);
      psg_write(244);
      return;
    case 661:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 662:
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 663:
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(247);
      return;
    case 664:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 665:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(148);
      return;
    case 666:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      return;
    case 667:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(149);
      return;
    case 668:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 669:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 670:
      psg_write(143);
      psg_write(8);
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(186);
      return;
    case 671:
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(146);
      psg_write(246);
      return;
    case 672:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(187);
      psg_write(250);
      return;
    case 673:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(215);
      psg_write(255);
      return;
    case 674:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      return;
    case 675:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      return;
    case 676:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      return;
    case 677:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 678:
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 679:
      psg_write(204);
      psg_write(17);
      psg_write(250);
      return;
    case 680:
      psg_write(205);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 681:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(150);
      return;
    case 682:
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      return;
    case 683:
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(151);
      return;
    case 684:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 685:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(243);
      return;
    case 686:
      psg_write(163);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      psg_write(244);
      return;
    case 687:
      psg_write(164);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(245);
      return;
    case 688:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(185);
      psg_write(247);
      return;
    case 689:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(216);
      psg_write(248);
      return;
    case 690:
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(186);
      psg_write(249);
      return;
    case 691:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(147);
      psg_write(255);
      return;
    case 692:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      return;
    case 693:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 694:
      psg_write(163);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      return;
    case 695:
      psg_write(164);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      return;
    case 696:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      return;
    case 697:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 698:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 699:
      psg_write(204);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 700:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 701:
      psg_write(206);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 702:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 703:
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(182);
      return;
    case 704:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      return;
    case 705:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      psg_write(217);
      return;
    case 706:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 707:
      psg_write(168);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(184);
      psg_write(243);
      return;
    case 708:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(244);
      return;
    case 709:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 710:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(246);
      return;
    case 711:
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      psg_write(247);
      return;
    case 712:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(250);
      return;
    case 713:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(148);
      psg_write(187);
      psg_write(253);
      return;
    case 714:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(255);
      return;
    case 715:
      psg_write(168);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(149);
      psg_write(188);
      return;
    case 716:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 717:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(189);
      return;
    case 718:
      psg_write(143);
      psg_write(7);
      psg_write(171);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 719:
      psg_write(204);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 720:
      psg_write(205);
      psg_write(17);
      psg_write(243);
      return;
    case 721:
      psg_write(206);
      psg_write(17);
      psg_write(181);
      psg_write(218);
      psg_write(244);
      return;
    case 722:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 723:
      psg_write(173);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 724:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(247);
      return;
    case 725:
      psg_write(171);
      psg_write(31);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 726:
      psg_write(170);
      psg_write(31);
      psg_write(148);
      psg_write(253);
      return;
    case 727:
      psg_write(169);
      psg_write(31);
      psg_write(184);
      psg_write(255);
      return;
    case 728:
      psg_write(170);
      psg_write(31);
      psg_write(149);
      return;
    case 729:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 730:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 731:
      psg_write(173);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(151);
      psg_write(186);
      return;
    case 732:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      return;
    case 733:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      psg_write(244);
      return;
    case 734:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(243);
      return;
    case 735:
      psg_write(169);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(188);
      psg_write(244);
      return;
    case 736:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 737:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(189);
      psg_write(246);
      return;
    case 738:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(247);
      return;
    case 739:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 740:
      psg_write(146);
      psg_write(243);
      return;
    case 741:
      psg_write(244);
      return;
    case 742:
      psg_write(181);
      psg_write(245);
      return;
    case 743:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 744:
      psg_write(172);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 745:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(15);
      psg_write(249);
      return;
    case 746:
      psg_write(128);
      psg_write(9);
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 747:
      psg_write(143);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 748:
      psg_write(142);
      psg_write(8);
      psg_write(168);
      psg_write(35);
      psg_write(184);
      return;
    case 749:
      psg_write(141);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 750:
      psg_write(142);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 751:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      return;
    case 752:
      psg_write(128);
      psg_write(9);
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      return;
    case 753:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 754:
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(246);
      return;
    case 755:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 756:
      psg_write(204);
      psg_write(17);
      psg_write(181);
      psg_write(255);
      return;
    case 757:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 758:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(182);
      return;
    case 759:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 760:
      psg_write(128);
      psg_write(8);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 761:
      psg_write(143);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(244);
      return;
    case 762:
      psg_write(142);
      psg_write(7);
      psg_write(163);
      psg_write(42);
      psg_write(184);
      psg_write(243);
      return;
    case 763:
      psg_write(141);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(244);
      return;
    case 764:
      psg_write(142);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(185);
      return;
    case 765:
      psg_write(143);
      psg_write(7);
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 766:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 767:
      psg_write(206);
      psg_write(18);
      psg_write(146);
      psg_write(244);
      return;
    case 768:
      psg_write(207);
      psg_write(18);
      psg_write(243);
      return;
    case 769:
      psg_write(206);
      psg_write(18);
      psg_write(181);
      psg_write(244);
      return;
    case 770:
      psg_write(170);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      return;
    case 771:
      psg_write(171);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 772:
      psg_write(170);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(247);
      return;
    case 773:
      psg_write(169);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 774:
      psg_write(168);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(148);
      return;
    case 775:
      psg_write(167);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      return;
    case 776:
      psg_write(168);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(149);
      psg_write(215);
      return;
    case 777:
      psg_write(169);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(150);
      psg_write(185);
      return;
    case 778:
      psg_write(170);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      return;
    case 779:
      psg_write(171);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(151);
      psg_write(186);
      return;
    case 780:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      return;
    case 781:
      psg_write(169);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(146);
      psg_write(187);
      psg_write(246);
      return;
    case 782:
      psg_write(168);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(250);
      return;
    case 783:
      psg_write(167);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(188);
      psg_write(255);
      return;
    case 784:
      psg_write(168);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      return;
    case 785:
      psg_write(169);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(189);
      return;
    case 786:
      psg_write(170);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      return;
    case 787:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 788:
      psg_write(207);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 789:
      psg_write(206);
      psg_write(18);
      psg_write(250);
      return;
    case 790:
      psg_write(205);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 791:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(150);
      return;
    case 792:
      psg_write(174);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(182);
      psg_write(216);
      return;
    case 793:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(151);
      return;
    case 794:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 795:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(146);
      psg_write(243);
      return;
    case 796:
      psg_write(170);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(184);
      psg_write(244);
      return;
    case 797:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(245);
      return;
    case 798:
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(185);
      psg_write(247);
      return;
    case 799:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(248);
      return;
    case 800:
      psg_write(174);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(186);
      psg_write(249);
      return;
    case 801:
      psg_write(143);
      psg_write(7);
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(147);
      psg_write(255);
      return;
    case 802:
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(146);
      psg_write(187);
      return;
    case 803:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      return;
    case 804:
      psg_write(170);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(188);
      return;
    case 805:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      return;
    case 806:
      psg_write(172);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(189);
      return;
    case 807:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      return;
    case 808:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(217);
      return;
    case 809:
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 810:
      psg_write(205);
      psg_write(18);
      psg_write(250);
      return;
    case 811:
      psg_write(206);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 812:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(150);
      return;
    case 813:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 814:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      return;
    case 815:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(146);
      psg_write(183);
      psg_write(244);
      return;
    case 816:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(243);
      return;
    case 817:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(244);
      return;
    case 818:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      return;
    case 819:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(185);
      psg_write(246);
      return;
    case 820:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(247);
      return;
    case 821:
      psg_write(140);
      psg_write(6);
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(147);
      psg_write(186);
      psg_write(250);
      return;
    case 822:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(253);
      return;
    case 823:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(187);
      psg_write(255);
      return;
    case 824:
      psg_write(137);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(218);
      return;
    case 825:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(188);
      return;
    case 826:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(148);
      return;
    case 827:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(189);
      return;
    case 828:
      psg_write(139);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(229);
      psg_write(180);
      return;
    case 829:
      psg_write(138);
      psg_write(6);
      psg_write(206);
      psg_write(18);
      psg_write(244);
      return;
    case 830:
      psg_write(137);
      psg_write(6);
      psg_write(205);
      psg_write(18);
      psg_write(243);
      return;
    case 831:
      psg_write(138);
      psg_write(6);
      psg_write(206);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(244);
      return;
    case 832:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      return;
    case 833:
      psg_write(140);
      psg_write(6);
      psg_write(166);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 834:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(247);
      return;
    case 835:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 836:
      psg_write(137);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      psg_write(253);
      return;
    case 837:
      psg_write(138);
      psg_write(6);
      psg_write(162);
      psg_write(28);
      psg_write(150);
      psg_write(184);
      psg_write(255);
      return;
    case 838:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      return;
    case 839:
      psg_write(140);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(185);
      return;
    case 840:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 841:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(186);
      return;
    case 842:
      psg_write(137);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(151);
      return;
    case 843:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(187);
      psg_write(244);
      return;
    case 844:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 845:
      psg_write(140);
      psg_write(6);
      psg_write(162);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(188);
      psg_write(244);
      return;
    case 846:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 847:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(152);
      psg_write(189);
      psg_write(246);
      return;
    case 848:
      psg_write(137);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(247);
      return;
    case 849:
      psg_write(143);
      psg_write(7);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 850:
      psg_write(146);
      psg_write(243);
      return;
    case 851:
      psg_write(244);
      return;
    case 852:
      psg_write(181);
      psg_write(245);
      return;
    case 853:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 854:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 855:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(249);
      return;
    case 856:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 857:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(148);
      return;
    case 858:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(184);
      return;
    case 859:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(149);
      return;
    case 860:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(150);
      psg_write(185);
      return;
    case 861:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 862:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 863:
      psg_write(146);
      psg_write(246);
      return;
    case 864:
      psg_write(250);
      return;
    case 865:
      psg_write(181);
      psg_write(255);
      return;
    case 866:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      return;
    case 867:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(182);
      return;
    case 868:
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      return;
    case 869:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 870:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(148);
      psg_write(244);
      return;
    case 871:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(184);
      psg_write(243);
      return;
    case 872:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      psg_write(149);
      psg_write(244);
      return;
    case 873:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(150);
      psg_write(185);
      return;
    case 874:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(246);
      return;
    case 875:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(151);
      psg_write(186);
      psg_write(247);
      return;
    case 876:
      psg_write(138);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 877:
      psg_write(146);
      psg_write(244);
      return;
    case 878:
      psg_write(243);
      return;
    case 879:
      psg_write(181);
      psg_write(244);
      return;
    case 880:
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      return;
    case 881:
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(182);
      psg_write(246);
      return;
    case 882:
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(247);
      return;
    case 883:
      psg_write(139);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 884:
      psg_write(138);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      return;
    case 885:
      psg_write(137);
      psg_write(5);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(184);
      return;
    case 886:
      psg_write(136);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 887:
      psg_write(137);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(185);
      return;
    case 888:
      psg_write(138);
      psg_write(5);
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      psg_write(148);
      return;
    case 889:
      psg_write(139);
      psg_write(5);
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(186);
      return;
    case 890:
      psg_write(138);
      psg_write(5);
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(228);
      return;
    case 891:
      psg_write(137);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(187);
      psg_write(246);
      return;
    case 892:
      psg_write(136);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      psg_write(215);
      psg_write(250);
      return;
    case 893:
      psg_write(137);
      psg_write(5);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(149);
      psg_write(188);
      psg_write(255);
      return;
    case 894:
      psg_write(138);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 895:
      psg_write(139);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(189);
      return;
    case 896:
      psg_write(138);
      psg_write(5);
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      return;
    case 897:
      psg_write(143);
      psg_write(5);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 898:
      psg_write(146);
      psg_write(246);
      return;
    case 899:
      psg_write(250);
      return;
    case 900:
      psg_write(181);
      psg_write(255);
      return;
    case 901:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 902:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      return;
    case 903:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 904:
      psg_write(128);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 905:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(243);
      return;
    case 906:
      psg_write(142);
      psg_write(5);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(184);
      psg_write(244);
      return;
    case 907:
      psg_write(141);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(245);
      return;
    case 908:
      psg_write(142);
      psg_write(5);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(185);
      psg_write(247);
      return;
    case 909:
      psg_write(143);
      psg_write(5);
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(148);
      psg_write(248);
      return;
    case 910:
      psg_write(128);
      psg_write(6);
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(186);
      psg_write(255);
      return;
    case 911:
      psg_write(143);
      psg_write(5);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 912:
      psg_write(142);
      psg_write(5);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(187);
      return;
    case 913:
      psg_write(141);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(215);
      return;
    case 914:
      psg_write(142);
      psg_write(5);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(149);
      psg_write(188);
      return;
    case 915:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 916:
      psg_write(128);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(189);
      return;
    case 917:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 918:
      psg_write(146);
      psg_write(246);
      return;
    case 919:
      psg_write(250);
      return;
    case 920:
      psg_write(181);
      psg_write(255);
      return;
    case 921:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 922:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      return;
    case 923:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 924:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 925:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(244);
      return;
    case 926:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      psg_write(243);
      return;
    case 927:
      psg_write(137);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 928:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 929:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 930:
      psg_write(140);
      psg_write(6);
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 931:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(250);
      return;
    case 932:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(187);
      psg_write(253);
      return;
    case 933:
      psg_write(137);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(215);
      psg_write(255);
      return;
    case 934:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(149);
      psg_write(188);
      return;
    case 935:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 936:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(189);
      return;
    case 937:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 938:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(180);
      return;
    case 939:
      psg_write(137);
      psg_write(6);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 940:
      psg_write(138);
      psg_write(6);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(243);
      return;
    case 941:
      psg_write(139);
      psg_write(6);
      psg_write(193);
      psg_write(20);
      psg_write(181);
      psg_write(244);
      return;
    case 942:
      psg_write(140);
      psg_write(6);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      return;
    case 943:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(22);
      psg_write(207);
      psg_write(19);
      psg_write(182);
      psg_write(246);
      return;
    case 944:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(247);
      return;
    case 945:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(22);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 946:
      psg_write(166);
      psg_write(22);
      psg_write(146);
      psg_write(253);
      return;
    case 947:
      psg_write(165);
      psg_write(22);
      psg_write(184);
      psg_write(255);
      return;
    case 948:
      psg_write(166);
      psg_write(22);
      return;
    case 949:
      psg_write(167);
      psg_write(22);
      psg_write(193);
      psg_write(20);
      psg_write(185);
      return;
    case 950:
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      return;
    case 951:
      psg_write(169);
      psg_write(22);
      psg_write(207);
      psg_write(19);
      psg_write(186);
      return;
    case 952:
      psg_write(173);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 953:
      psg_write(148);
      psg_write(244);
      return;
    case 954:
      psg_write(243);
      return;
    case 955:
      psg_write(149);
      psg_write(181);
      psg_write(244);
      return;
    case 956:
      psg_write(174);
      psg_write(23);
      psg_write(196);
      psg_write(21);
      psg_write(150);
      return;
    case 957:
      psg_write(175);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 958:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 959:
      psg_write(146);
      psg_write(243);
      return;
    case 960:
      psg_write(244);
      return;
    case 961:
      psg_write(181);
      psg_write(245);
      return;
    case 962:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 963:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 964:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(249);
      return;
    case 965:
      psg_write(143);
      psg_write(5);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 966:
      psg_write(170);
      psg_write(26);
      psg_write(146);
      return;
    case 967:
      psg_write(169);
      psg_write(26);
      psg_write(184);
      return;
    case 968:
      psg_write(170);
      psg_write(26);
      return;
    case 969:
      psg_write(171);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(185);
      return;
    case 970:
      psg_write(172);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      return;
    case 971:
      psg_write(173);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(186);
      return;
    case 972:
      psg_write(171);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 973:
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 974:
      psg_write(192);
      psg_write(20);
      psg_write(250);
      return;
    case 975:
      psg_write(207);
      psg_write(19);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 976:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      return;
    case 977:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(182);
      return;
    case 978:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(151);
      return;
    case 979:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 980:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(146);
      psg_write(244);
      return;
    case 981:
      psg_write(169);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(184);
      psg_write(215);
      psg_write(243);
      return;
    case 982:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(244);
      return;
    case 983:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(185);
      return;
    case 984:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(246);
      return;
    case 985:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 986:
      psg_write(140);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 987:
      psg_write(139);
      psg_write(6);
      psg_write(244);
      return;
    case 988:
      psg_write(138);
      psg_write(6);
      psg_write(243);
      return;
    case 989:
      psg_write(137);
      psg_write(6);
      psg_write(181);
      psg_write(244);
      return;
    case 990:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 991:
      psg_write(139);
      psg_write(6);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(148);
      psg_write(182);
      psg_write(246);
      return;
    case 992:
      psg_write(140);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 993:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(183);
      psg_write(255);
      return;
    case 994:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 995:
      psg_write(137);
      psg_write(6);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      return;
    case 996:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(149);
      return;
    case 997:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 998:
      psg_write(140);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 999:
      psg_write(139);
      psg_write(6);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(186);
      return;
    case 1000:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(228);
      return;
    case 1001:
      psg_write(137);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      psg_write(246);
      return;
    case 1002:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(150);
      psg_write(215);
      psg_write(250);
      return;
    case 1003:
      psg_write(139);
      psg_write(6);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(188);
      psg_write(255);
      return;
    case 1004:
      psg_write(140);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 1005:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(189);
      return;
    case 1006:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(228);
      psg_write(180);
      return;
    case 1007:
      psg_write(137);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(151);
      psg_write(246);
      return;
    case 1008:
      psg_write(138);
      psg_write(6);
      psg_write(194);
      psg_write(21);
      psg_write(250);
      return;
    case 1009:
      psg_write(139);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 1010:
      psg_write(140);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      return;
    case 1011:
      psg_write(139);
      psg_write(6);
      psg_write(167);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      return;
    case 1012:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(152);
      return;
    case 1013:
      psg_write(137);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(230);
      psg_write(183);
      return;
    case 1014:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(243);
      return;
    case 1015:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      psg_write(244);
      return;
    case 1016:
      psg_write(140);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(245);
      return;
    case 1017:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      psg_write(247);
      return;
    case 1018:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(153);
      psg_write(216);
      psg_write(248);
      return;
    case 1019:
      psg_write(137);
      psg_write(6);
      psg_write(167);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(186);
      psg_write(249);
      return;
    case 1020:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(154);
      psg_write(255);
      return;
    case 1021:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      return;
    case 1022:
      psg_write(140);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(155);
      return;
    case 1023:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(188);
      return;
    case 1024:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(156);
      return;
    case 1025:
      psg_write(137);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(157);
      psg_write(189);
      return;
    case 1026:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      return;
    case 1027:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(158);
      psg_write(180);
      return;
    case 1028:
      psg_write(140);
      psg_write(6);
      psg_write(194);
      psg_write(21);
      psg_write(246);
      return;
    case 1029:
      psg_write(139);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(159);
      psg_write(250);
      return;
    case 1030:
      psg_write(138);
      psg_write(6);
      psg_write(196);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 1031:
      psg_write(137);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1032:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(182);
      return;
    case 1033:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1034:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(229);
      psg_write(183);
      psg_write(217);
      return;
    case 1035:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 1036:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(184);
      psg_write(243);
      return;
    case 1037:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 1038:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      return;
    case 1039:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(246);
      return;
    case 1040:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(186);
      psg_write(247);
      return;
    case 1041:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(250);
      return;
    case 1042:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(187);
      psg_write(253);
      return;
    case 1043:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(255);
      return;
    case 1044:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(188);
      return;
    case 1045:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1046:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(189);
      return;
    case 1047:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1048:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      psg_write(229);
      psg_write(180);
      return;
    case 1049:
      psg_write(137);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 1050:
      psg_write(138);
      psg_write(6);
      psg_write(196);
      psg_write(21);
      psg_write(218);
      psg_write(243);
      return;
    case 1051:
      psg_write(139);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(181);
      psg_write(244);
      return;
    case 1052:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      return;
    case 1053:
      psg_write(139);
      psg_write(6);
      psg_write(173);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 1054:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(214);
      psg_write(247);
      return;
    case 1055:
      psg_write(137);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(183);
      psg_write(250);
      return;
    case 1056:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(253);
      return;
    case 1057:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(31);
      psg_write(184);
      psg_write(255);
      return;
    case 1058:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(196);
      psg_write(21);
      return;
    case 1059:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 1060:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      return;
    case 1061:
      psg_write(137);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(180);
      return;
    case 1062:
      psg_write(138);
      psg_write(6);
      psg_write(196);
      psg_write(21);
      psg_write(244);
      return;
    case 1063:
      psg_write(139);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(243);
      return;
    case 1064:
      psg_write(140);
      psg_write(6);
      psg_write(194);
      psg_write(21);
      psg_write(181);
      psg_write(244);
      return;
    case 1065:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      return;
    case 1066:
      psg_write(138);
      psg_write(6);
      psg_write(173);
      psg_write(31);
      psg_write(196);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 1067:
      psg_write(137);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(247);
      return;
    case 1068:
      psg_write(134);
      psg_write(13);
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1069:
      psg_write(146);
      psg_write(243);
      return;
    case 1070:
      psg_write(244);
      return;
    case 1071:
      psg_write(181);
      psg_write(245);
      return;
    case 1072:
      psg_write(171);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 1073:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 1074:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(19);
      psg_write(249);
      return;
    case 1075:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1076:
      psg_write(169);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      return;
    case 1077:
      psg_write(168);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      return;
    case 1078:
      psg_write(169);
      psg_write(35);
      psg_write(207);
      psg_write(19);
      psg_write(149);
      return;
    case 1079:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(185);
      return;
    case 1080:
      psg_write(171);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      return;
    case 1081:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(151);
      psg_write(186);
      return;
    case 1082:
      psg_write(142);
      psg_write(11);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1083:
      psg_write(146);
      psg_write(246);
      return;
    case 1084:
      psg_write(250);
      return;
    case 1085:
      psg_write(181);
      psg_write(255);
      return;
    case 1086:
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      return;
    case 1087:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 1088:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      return;
    case 1089:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1090:
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(148);
      psg_write(244);
      return;
    case 1091:
      psg_write(163);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(243);
      return;
    case 1092:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      psg_write(149);
      psg_write(244);
      return;
    case 1093:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(150);
      psg_write(185);
      return;
    case 1094:
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(246);
      return;
    case 1095:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(151);
      psg_write(186);
      psg_write(247);
      return;
    case 1096:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1097:
      psg_write(146);
      psg_write(244);
      return;
    case 1098:
      psg_write(243);
      return;
    case 1099:
      psg_write(181);
      psg_write(244);
      return;
    case 1100:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 1101:
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 1102:
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(147);
      psg_write(255);
      return;
    case 1103:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(183);
      return;
    case 1104:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 1105:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(149);
      psg_write(184);
      return;
    case 1106:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      return;
    case 1107:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 1108:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(151);
      return;
    case 1109:
      psg_write(143);
      psg_write(8);
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(186);
      return;
    case 1110:
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(146);
      psg_write(246);
      return;
    case 1111:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(187);
      psg_write(250);
      return;
    case 1112:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(215);
      psg_write(255);
      return;
    case 1113:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      return;
    case 1114:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      return;
    case 1115:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      return;
    case 1116:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1117:
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 1118:
      psg_write(204);
      psg_write(17);
      psg_write(250);
      return;
    case 1119:
      psg_write(205);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1120:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(150);
      return;
    case 1121:
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      return;
    case 1122:
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(151);
      return;
    case 1123:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 1124:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(243);
      return;
    case 1125:
      psg_write(163);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      psg_write(244);
      return;
    case 1126:
      psg_write(164);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(245);
      return;
    case 1127:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(185);
      psg_write(247);
      return;
    case 1128:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(216);
      psg_write(248);
      return;
    case 1129:
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(186);
      psg_write(249);
      return;
    case 1130:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(147);
      psg_write(255);
      return;
    case 1131:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      return;
    case 1132:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 1133:
      psg_write(163);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      return;
    case 1134:
      psg_write(164);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      return;
    case 1135:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      return;
    case 1136:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 1137:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1138:
      psg_write(204);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 1139:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 1140:
      psg_write(206);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1141:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 1142:
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(182);
      return;
    case 1143:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      return;
    case 1144:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      psg_write(217);
      return;
    case 1145:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 1146:
      psg_write(168);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(184);
      psg_write(243);
      return;
    case 1147:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(244);
      return;
    case 1148:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 1149:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(246);
      return;
    case 1150:
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(147);
      psg_write(186);
      psg_write(247);
      return;
    case 1151:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(250);
      return;
    case 1152:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(187);
      psg_write(253);
      return;
    case 1153:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(149);
      psg_write(255);
      return;
    case 1154:
      psg_write(168);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(188);
      return;
    case 1155:
      psg_write(169);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 1156:
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(151);
      psg_write(189);
      return;
    case 1157:
      psg_write(143);
      psg_write(7);
      psg_write(171);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1158:
      psg_write(204);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 1159:
      psg_write(205);
      psg_write(17);
      psg_write(243);
      return;
    case 1160:
      psg_write(206);
      psg_write(17);
      psg_write(181);
      psg_write(218);
      psg_write(244);
      return;
    case 1161:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 1162:
      psg_write(173);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 1163:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(247);
      return;
    case 1164:
      psg_write(171);
      psg_write(31);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 1165:
      psg_write(170);
      psg_write(31);
      psg_write(148);
      psg_write(253);
      return;
    case 1166:
      psg_write(169);
      psg_write(31);
      psg_write(184);
      psg_write(255);
      return;
    case 1167:
      psg_write(170);
      psg_write(31);
      psg_write(149);
      return;
    case 1168:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 1169:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 1170:
      psg_write(173);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(151);
      psg_write(186);
      return;
    case 1171:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      return;
    case 1172:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      psg_write(244);
      return;
    case 1173:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(243);
      return;
    case 1174:
      psg_write(169);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(188);
      psg_write(244);
      return;
    case 1175:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 1176:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(189);
      psg_write(246);
      return;
    case 1177:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(247);
      return;
    case 1178:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1179:
      psg_write(146);
      psg_write(243);
      return;
    case 1180:
      psg_write(244);
      return;
    case 1181:
      psg_write(181);
      psg_write(245);
      return;
    case 1182:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 1183:
      psg_write(172);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 1184:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(15);
      psg_write(249);
      return;
    case 1185:
      psg_write(128);
      psg_write(9);
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1186:
      psg_write(143);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 1187:
      psg_write(142);
      psg_write(8);
      psg_write(168);
      psg_write(35);
      psg_write(184);
      return;
    case 1188:
      psg_write(141);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 1189:
      psg_write(142);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 1190:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      return;
    case 1191:
      psg_write(128);
      psg_write(9);
      psg_write(172);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      return;
    case 1192:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1193:
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(246);
      return;
    case 1194:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 1195:
      psg_write(204);
      psg_write(17);
      psg_write(181);
      psg_write(255);
      return;
    case 1196:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 1197:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(182);
      return;
    case 1198:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      return;
    case 1199:
      psg_write(128);
      psg_write(8);
      psg_write(165);
      psg_write(42);
      psg_write(147);
      psg_write(183);
      psg_write(244);
      return;
    case 1200:
      psg_write(143);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(243);
      return;
    case 1201:
      psg_write(142);
      psg_write(7);
      psg_write(163);
      psg_write(42);
      psg_write(184);
      psg_write(244);
      return;
    case 1202:
      psg_write(141);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      return;
    case 1203:
      psg_write(142);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(185);
      psg_write(246);
      return;
    case 1204:
      psg_write(143);
      psg_write(7);
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      psg_write(148);
      psg_write(247);
      return;
    case 1205:
      psg_write(137);
      psg_write(10);
      psg_write(169);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1206:
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(244);
      return;
    case 1207:
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 1208:
      psg_write(205);
      psg_write(18);
      psg_write(181);
      psg_write(244);
      return;
    case 1209:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1210:
      psg_write(171);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 1211:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(247);
      return;
    case 1212:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1213:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      return;
    case 1214:
      psg_write(167);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(184);
      psg_write(215);
      return;
    case 1215:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(149);
      return;
    case 1216:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(150);
      psg_write(185);
      return;
    case 1217:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1218:
      psg_write(171);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(151);
      psg_write(186);
      return;
    case 1219:
      psg_write(142);
      psg_write(11);
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      return;
    case 1220:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(146);
      psg_write(187);
      psg_write(246);
      return;
    case 1221:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(250);
      return;
    case 1222:
      psg_write(167);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(188);
      psg_write(255);
      return;
    case 1223:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1224:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(189);
      return;
    case 1225:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1226:
      psg_write(172);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1227:
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 1228:
      psg_write(205);
      psg_write(18);
      psg_write(250);
      return;
    case 1229:
      psg_write(206);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1230:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(150);
      psg_write(216);
      return;
    case 1231:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 1232:
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(151);
      return;
    case 1233:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 1234:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(243);
      return;
    case 1235:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(244);
      return;
    case 1236:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(245);
      return;
    case 1237:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(185);
      psg_write(247);
      return;
    case 1238:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(248);
      return;
    case 1239:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(186);
      psg_write(249);
      return;
    case 1240:
      psg_write(142);
      psg_write(15);
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(147);
      psg_write(255);
      return;
    case 1241:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(146);
      psg_write(187);
      return;
    case 1242:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      return;
    case 1243:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(188);
      return;
    case 1244:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      return;
    case 1245:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(189);
      return;
    case 1246:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(217);
      return;
    case 1247:
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 1248:
      psg_write(205);
      psg_write(18);
      psg_write(250);
      return;
    case 1249:
      psg_write(206);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1250:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      return;
    case 1251:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(150);
      psg_write(182);
      return;
    case 1252:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(151);
      return;
    case 1253:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1254:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(244);
      return;
    case 1255:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(243);
      return;
    case 1256:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(244);
      return;
    case 1257:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(185);
      return;
    case 1258:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(246);
      return;
    case 1259:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(186);
      psg_write(247);
      return;
    case 1260:
      psg_write(143);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(147);
      psg_write(250);
      return;
    case 1261:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(187);
      psg_write(253);
      return;
    case 1262:
      psg_write(141);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(218);
      psg_write(255);
      return;
    case 1263:
      psg_write(140);
      psg_write(11);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(188);
      return;
    case 1264:
      psg_write(141);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      return;
    case 1265:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(189);
      return;
    case 1266:
      psg_write(143);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      return;
    case 1267:
      psg_write(142);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(180);
      return;
    case 1268:
      psg_write(141);
      psg_write(11);
      psg_write(205);
      psg_write(18);
      psg_write(244);
      return;
    case 1269:
      psg_write(140);
      psg_write(11);
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 1270:
      psg_write(141);
      psg_write(11);
      psg_write(207);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(244);
      return;
    case 1271:
      psg_write(142);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 1272:
      psg_write(143);
      psg_write(11);
      psg_write(166);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 1273:
      psg_write(142);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(247);
      return;
    case 1274:
      psg_write(141);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 1275:
      psg_write(140);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      psg_write(253);
      return;
    case 1276:
      psg_write(141);
      psg_write(11);
      psg_write(162);
      psg_write(28);
      psg_write(150);
      psg_write(184);
      psg_write(255);
      return;
    case 1277:
      psg_write(142);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      return;
    case 1278:
      psg_write(143);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(185);
      return;
    case 1279:
      psg_write(142);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 1280:
      psg_write(141);
      psg_write(11);
      psg_write(166);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(186);
      return;
    case 1281:
      psg_write(140);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(151);
      return;
    case 1282:
      psg_write(141);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(187);
      psg_write(244);
      return;
    case 1283:
      psg_write(142);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 1284:
      psg_write(143);
      psg_write(11);
      psg_write(162);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(188);
      psg_write(244);
      return;
    case 1285:
      psg_write(142);
      psg_write(11);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 1286:
      psg_write(141);
      psg_write(11);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(152);
      psg_write(189);
      psg_write(246);
      return;
    case 1287:
      psg_write(140);
      psg_write(11);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(247);
      return;
    case 1288:
      psg_write(134);
      psg_write(13);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1289:
      psg_write(146);
      psg_write(243);
      return;
    case 1290:
      psg_write(244);
      return;
    case 1291:
      psg_write(181);
      psg_write(245);
      return;
    case 1292:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 1293:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 1294:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(147);
      psg_write(255);
      return;
    case 1295:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(148);
      psg_write(183);
      return;
    case 1296:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 1297:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(149);
      psg_write(184);
      return;
    case 1298:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 1299:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(150);
      psg_write(185);
      return;
    case 1300:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(151);
      return;
    case 1301:
      psg_write(142);
      psg_write(11);
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1302:
      psg_write(146);
      psg_write(246);
      return;
    case 1303:
      psg_write(250);
      return;
    case 1304:
      psg_write(181);
      psg_write(255);
      return;
    case 1305:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      return;
    case 1306:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(182);
      return;
    case 1307:
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      return;
    case 1308:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1309:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(148);
      psg_write(244);
      return;
    case 1310:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(184);
      psg_write(243);
      return;
    case 1311:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      psg_write(149);
      psg_write(244);
      return;
    case 1312:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(150);
      psg_write(185);
      return;
    case 1313:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(246);
      return;
    case 1314:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(151);
      psg_write(186);
      psg_write(247);
      return;
    case 1315:
      psg_write(132);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1316:
      psg_write(146);
      psg_write(244);
      return;
    case 1317:
      psg_write(243);
      return;
    case 1318:
      psg_write(181);
      psg_write(244);
      return;
    case 1319:
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      return;
    case 1320:
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(182);
      psg_write(246);
      return;
    case 1321:
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(247);
      return;
    case 1322:
      psg_write(133);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1323:
      psg_write(132);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      return;
    case 1324:
      psg_write(131);
      psg_write(11);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(184);
      return;
    case 1325:
      psg_write(130);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 1326:
      psg_write(131);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(185);
      return;
    case 1327:
      psg_write(132);
      psg_write(11);
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      psg_write(148);
      return;
    case 1328:
      psg_write(133);
      psg_write(11);
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(186);
      return;
    case 1329:
      psg_write(132);
      psg_write(11);
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(228);
      return;
    case 1330:
      psg_write(131);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(187);
      psg_write(246);
      return;
    case 1331:
      psg_write(130);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      psg_write(215);
      psg_write(250);
      return;
    case 1332:
      psg_write(131);
      psg_write(11);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(149);
      psg_write(188);
      psg_write(255);
      return;
    case 1333:
      psg_write(132);
      psg_write(11);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 1334:
      psg_write(133);
      psg_write(11);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(189);
      return;
    case 1335:
      psg_write(132);
      psg_write(11);
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      return;
    case 1336:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1337:
      psg_write(146);
      psg_write(246);
      return;
    case 1338:
      psg_write(250);
      return;
    case 1339:
      psg_write(181);
      psg_write(255);
      return;
    case 1340:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 1341:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      return;
    case 1342:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(230);
      return;
    case 1343:
      psg_write(143);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(147);
      psg_write(183);
      psg_write(243);
      return;
    case 1344:
      psg_write(142);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(244);
      return;
    case 1345:
      psg_write(141);
      psg_write(11);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(184);
      psg_write(245);
      return;
    case 1346:
      psg_write(140);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(247);
      return;
    case 1347:
      psg_write(141);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(185);
      psg_write(248);
      return;
    case 1348:
      psg_write(142);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(148);
      psg_write(249);
      return;
    case 1349:
      psg_write(143);
      psg_write(11);
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(186);
      psg_write(255);
      return;
    case 1350:
      psg_write(142);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 1351:
      psg_write(141);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(187);
      return;
    case 1352:
      psg_write(140);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(215);
      return;
    case 1353:
      psg_write(141);
      psg_write(11);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(149);
      psg_write(188);
      return;
    case 1354:
      psg_write(142);
      psg_write(11);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 1355:
      psg_write(143);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(189);
      return;
    case 1356:
      psg_write(134);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1357:
      psg_write(146);
      psg_write(246);
      return;
    case 1358:
      psg_write(250);
      return;
    case 1359:
      psg_write(181);
      psg_write(255);
      return;
    case 1360:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 1361:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      return;
    case 1362:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 1363:
      psg_write(135);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1364:
      psg_write(134);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(244);
      return;
    case 1365:
      psg_write(133);
      psg_write(13);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      psg_write(243);
      return;
    case 1366:
      psg_write(132);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 1367:
      psg_write(133);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 1368:
      psg_write(134);
      psg_write(13);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 1369:
      psg_write(135);
      psg_write(13);
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 1370:
      psg_write(134);
      psg_write(13);
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(250);
      return;
    case 1371:
      psg_write(133);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(187);
      psg_write(253);
      return;
    case 1372:
      psg_write(132);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(215);
      psg_write(255);
      return;
    case 1373:
      psg_write(133);
      psg_write(13);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(149);
      psg_write(188);
      return;
    case 1374:
      psg_write(134);
      psg_write(13);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 1375:
      psg_write(135);
      psg_write(13);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(189);
      return;
    case 1376:
      psg_write(134);
      psg_write(13);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 1377:
      psg_write(133);
      psg_write(13);
      psg_write(167);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(180);
      return;
    case 1378:
      psg_write(132);
      psg_write(13);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 1379:
      psg_write(133);
      psg_write(13);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(243);
      return;
    case 1380:
      psg_write(134);
      psg_write(13);
      psg_write(193);
      psg_write(20);
      psg_write(181);
      psg_write(244);
      return;
    case 1381:
      psg_write(135);
      psg_write(13);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      return;
    case 1382:
      psg_write(134);
      psg_write(13);
      psg_write(169);
      psg_write(22);
      psg_write(207);
      psg_write(19);
      psg_write(182);
      psg_write(246);
      return;
    case 1383:
      psg_write(133);
      psg_write(13);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(247);
      return;
    case 1384:
      psg_write(142);
      psg_write(15);
      psg_write(167);
      psg_write(22);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 1385:
      psg_write(166);
      psg_write(22);
      psg_write(146);
      psg_write(253);
      return;
    case 1386:
      psg_write(165);
      psg_write(22);
      psg_write(184);
      psg_write(255);
      return;
    case 1387:
      psg_write(166);
      psg_write(22);
      return;
    case 1388:
      psg_write(167);
      psg_write(22);
      psg_write(193);
      psg_write(20);
      psg_write(185);
      return;
    case 1389:
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      return;
    case 1390:
      psg_write(141);
      psg_write(17);
      psg_write(173);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1391:
      psg_write(146);
      psg_write(244);
      return;
    case 1392:
      psg_write(243);
      return;
    case 1393:
      psg_write(181);
      psg_write(244);
      return;
    case 1394:
      psg_write(174);
      psg_write(23);
      psg_write(196);
      psg_write(21);
      return;
    case 1395:
      psg_write(175);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 1396:
      psg_write(174);
      psg_write(23);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 1397:
      psg_write(142);
      psg_write(15);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1398:
      psg_write(146);
      psg_write(243);
      return;
    case 1399:
      psg_write(244);
      return;
    case 1400:
      psg_write(181);
      psg_write(245);
      return;
    case 1401:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 1402:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 1403:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(249);
      return;
    case 1404:
      psg_write(141);
      psg_write(17);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1405:
      psg_write(170);
      psg_write(26);
      psg_write(146);
      return;
    case 1406:
      psg_write(169);
      psg_write(26);
      psg_write(184);
      return;
    case 1407:
      psg_write(170);
      psg_write(26);
      return;
    case 1408:
      psg_write(171);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(185);
      return;
    case 1409:
      psg_write(172);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      return;
    case 1410:
      psg_write(173);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(186);
      return;
    case 1411:
      psg_write(171);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1412:
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 1413:
      psg_write(192);
      psg_write(20);
      psg_write(250);
      return;
    case 1414:
      psg_write(207);
      psg_write(19);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1415:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      return;
    case 1416:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(182);
      return;
    case 1417:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(151);
      return;
    case 1418:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1419:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(146);
      psg_write(244);
      return;
    case 1420:
      psg_write(169);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(184);
      psg_write(215);
      psg_write(243);
      return;
    case 1421:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(244);
      return;
    case 1422:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(185);
      return;
    case 1423:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(246);
      return;
    case 1424:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 1425:
      psg_write(138);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1426:
      psg_write(137);
      psg_write(10);
      psg_write(244);
      return;
    case 1427:
      psg_write(136);
      psg_write(10);
      psg_write(243);
      return;
    case 1428:
      psg_write(135);
      psg_write(10);
      psg_write(181);
      psg_write(244);
      return;
    case 1429:
      psg_write(136);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 1430:
      psg_write(137);
      psg_write(10);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(148);
      psg_write(182);
      psg_write(246);
      return;
    case 1431:
      psg_write(138);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 1432:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(183);
      psg_write(255);
      return;
    case 1433:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 1434:
      psg_write(135);
      psg_write(10);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      return;
    case 1435:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(149);
      return;
    case 1436:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 1437:
      psg_write(138);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 1438:
      psg_write(137);
      psg_write(10);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(186);
      return;
    case 1439:
      psg_write(136);
      psg_write(10);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(246);
      return;
    case 1440:
      psg_write(135);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      psg_write(250);
      return;
    case 1441:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(150);
      psg_write(215);
      psg_write(255);
      return;
    case 1442:
      psg_write(137);
      psg_write(10);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(188);
      return;
    case 1443:
      psg_write(138);
      psg_write(10);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 1444:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(189);
      return;
    case 1445:
      psg_write(136);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(228);
      psg_write(180);
      return;
    case 1446:
      psg_write(135);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(151);
      psg_write(246);
      return;
    case 1447:
      psg_write(136);
      psg_write(10);
      psg_write(194);
      psg_write(21);
      psg_write(250);
      return;
    case 1448:
      psg_write(137);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 1449:
      psg_write(138);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      return;
    case 1450:
      psg_write(137);
      psg_write(10);
      psg_write(167);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      return;
    case 1451:
      psg_write(136);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(152);
      return;
    case 1452:
      psg_write(135);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(230);
      psg_write(183);
      return;
    case 1453:
      psg_write(136);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(243);
      return;
    case 1454:
      psg_write(137);
      psg_write(10);
      psg_write(163);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      psg_write(244);
      return;
    case 1455:
      psg_write(138);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(245);
      return;
    case 1456:
      psg_write(137);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      psg_write(247);
      return;
    case 1457:
      psg_write(136);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(153);
      psg_write(216);
      psg_write(248);
      return;
    case 1458:
      psg_write(135);
      psg_write(10);
      psg_write(167);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(186);
      psg_write(249);
      return;
    case 1459:
      psg_write(136);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(154);
      psg_write(255);
      return;
    case 1460:
      psg_write(137);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      return;
    case 1461:
      psg_write(138);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(155);
      return;
    case 1462:
      psg_write(137);
      psg_write(10);
      psg_write(163);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(188);
      return;
    case 1463:
      psg_write(136);
      psg_write(10);
      psg_write(164);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(156);
      return;
    case 1464:
      psg_write(135);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(157);
      psg_write(189);
      return;
    case 1465:
      psg_write(136);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      return;
    case 1466:
      psg_write(137);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(158);
      psg_write(180);
      return;
    case 1467:
      psg_write(138);
      psg_write(10);
      psg_write(194);
      psg_write(21);
      psg_write(246);
      return;
    case 1468:
      psg_write(137);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(159);
      psg_write(250);
      return;
    case 1469:
      psg_write(136);
      psg_write(10);
      psg_write(196);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 1470:
      psg_write(135);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1471:
      psg_write(136);
      psg_write(10);
      psg_write(172);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(182);
      return;
    case 1472:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1473:
      psg_write(138);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(229);
      psg_write(183);
      psg_write(217);
      return;
    case 1474:
      psg_write(137);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 1475:
      psg_write(136);
      psg_write(10);
      psg_write(168);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(184);
      psg_write(243);
      return;
    case 1476:
      psg_write(135);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(244);
      return;
    case 1477:
      psg_write(136);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      return;
    case 1478:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(246);
      return;
    case 1479:
      psg_write(138);
      psg_write(10);
      psg_write(172);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(186);
      psg_write(247);
      return;
    case 1480:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(250);
      return;
    case 1481:
      psg_write(136);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(187);
      psg_write(253);
      return;
    case 1482:
      psg_write(135);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(255);
      return;
    case 1483:
      psg_write(136);
      psg_write(10);
      psg_write(168);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(188);
      return;
    case 1484:
      psg_write(137);
      psg_write(10);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1485:
      psg_write(138);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(189);
      return;
    case 1486:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(180);
      return;
    case 1487:
      psg_write(136);
      psg_write(10);
      psg_write(194);
      psg_write(21);
      psg_write(244);
      return;
    case 1488:
      psg_write(135);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(243);
      return;
    case 1489:
      psg_write(136);
      psg_write(10);
      psg_write(196);
      psg_write(21);
      psg_write(181);
      psg_write(218);
      psg_write(244);
      return;
    case 1490:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      return;
    case 1491:
      psg_write(138);
      psg_write(10);
      psg_write(173);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 1492:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(247);
      return;
    case 1493:
      psg_write(136);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 1494:
      psg_write(135);
      psg_write(10);
      psg_write(170);
      psg_write(31);
      psg_write(253);
      return;
    case 1495:
      psg_write(136);
      psg_write(10);
      psg_write(169);
      psg_write(31);
      psg_write(184);
      psg_write(255);
      return;
    case 1496:
      psg_write(137);
      psg_write(10);
      psg_write(170);
      psg_write(31);
      return;
    case 1497:
      psg_write(138);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      return;
    case 1498:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      return;
    case 1499:
      psg_write(136);
      psg_write(10);
      psg_write(173);
      psg_write(31);
      psg_write(194);
      psg_write(21);
      psg_write(186);
      return;
    case 1500:
      psg_write(135);
      psg_write(10);
      psg_write(171);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(180);
      return;
    case 1501:
      psg_write(136);
      psg_write(10);
      psg_write(196);
      psg_write(21);
      psg_write(244);
      return;
    case 1502:
      psg_write(137);
      psg_write(10);
      psg_write(195);
      psg_write(21);
      psg_write(243);
      return;
    case 1503:
      psg_write(138);
      psg_write(10);
      psg_write(194);
      psg_write(21);
      psg_write(181);
      psg_write(244);
      return;
    case 1504:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      return;
    case 1505:
      psg_write(136);
      psg_write(10);
      psg_write(173);
      psg_write(31);
      psg_write(196);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 1506:
      psg_write(135);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(21);
      psg_write(247);
      return;
    case 1507:
      psg_write(134);
      psg_write(13);
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1508:
      psg_write(146);
      psg_write(243);
      return;
    case 1509:
      psg_write(244);
      return;
    case 1510:
      psg_write(181);
      psg_write(245);
      return;
    case 1511:
      psg_write(171);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 1512:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 1513:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(19);
      psg_write(249);
      return;
    case 1514:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1515:
      psg_write(169);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      return;
    case 1516:
      psg_write(168);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      return;
    case 1517:
      psg_write(169);
      psg_write(35);
      psg_write(207);
      psg_write(19);
      psg_write(149);
      return;
    case 1518:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(185);
      return;
    case 1519:
      psg_write(171);
      psg_write(35);
      psg_write(193);
      psg_write(20);
      return;
    case 1520:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(20);
      psg_write(151);
      psg_write(186);
      return;
    case 1521:
      psg_write(142);
      psg_write(11);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1522:
      psg_write(146);
      psg_write(246);
      return;
    case 1523:
      psg_write(250);
      return;
    case 1524:
      psg_write(181);
      psg_write(255);
      return;
    case 1525:
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      return;
    case 1526:
      psg_write(167);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 1527:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      return;
    case 1528:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1529:
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(148);
      psg_write(244);
      return;
    case 1530:
      psg_write(163);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(243);
      return;
    case 1531:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      psg_write(149);
      psg_write(244);
      return;
    case 1532:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(150);
      psg_write(185);
      return;
    case 1533:
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(246);
      return;
    case 1534:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1535:
      psg_write(146);
      psg_write(244);
      return;
    case 1536:
      psg_write(243);
      return;
    case 1537:
      psg_write(181);
      psg_write(244);
      return;
    case 1538:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 1539:
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 1540:
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(247);
      return;
    case 1541:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1542:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(148);
      return;
    case 1543:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      return;
    case 1544:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(149);
      return;
    case 1545:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 1546:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 1547:
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      psg_write(186);
      return;
    case 1548:
      psg_write(143);
      psg_write(8);
      psg_write(167);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      return;
    case 1549:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      psg_write(246);
      return;
    case 1550:
      psg_write(165);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      psg_write(215);
      psg_write(250);
      return;
    case 1551:
      psg_write(164);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      psg_write(255);
      return;
    case 1552:
      psg_write(165);
      psg_write(53);
      psg_write(204);
      psg_write(17);
      return;
    case 1553:
      psg_write(166);
      psg_write(53);
      psg_write(205);
      psg_write(17);
      psg_write(189);
      return;
    case 1554:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(17);
      return;
    case 1555:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1556:
      psg_write(204);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 1557:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 1558:
      psg_write(206);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1559:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 1560:
      psg_write(167);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(182);
      return;
    case 1561:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      return;
    case 1562:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 1563:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(243);
      return;
    case 1564:
      psg_write(163);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(184);
      psg_write(244);
      return;
    case 1565:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(245);
      return;
    case 1566:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      psg_write(216);
      psg_write(247);
      return;
    case 1567:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(248);
      return;
    case 1568:
      psg_write(167);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      psg_write(249);
      return;
    case 1569:
      psg_write(137);
      psg_write(10);
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(255);
      return;
    case 1570:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      return;
    case 1571:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 1572:
      psg_write(163);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(188);
      return;
    case 1573:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 1574:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      psg_write(189);
      return;
    case 1575:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      return;
    case 1576:
      psg_write(170);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1577:
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 1578:
      psg_write(206);
      psg_write(17);
      psg_write(250);
      return;
    case 1579:
      psg_write(205);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1580:
      psg_write(171);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(150);
      return;
    case 1581:
      psg_write(172);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      return;
    case 1582:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(217);
      return;
    case 1583:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(183);
      psg_write(244);
      return;
    case 1584:
      psg_write(169);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(243);
      return;
    case 1585:
      psg_write(168);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      psg_write(244);
      return;
    case 1586:
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      return;
    case 1587:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(185);
      psg_write(246);
      return;
    case 1588:
      psg_write(171);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(247);
      return;
    case 1589:
      psg_write(172);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(186);
      psg_write(250);
      return;
    case 1590:
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(148);
      psg_write(253);
      return;
    case 1591:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(187);
      psg_write(255);
      return;
    case 1592:
      psg_write(169);
      psg_write(35);
      psg_write(204);
      psg_write(17);
      psg_write(149);
      return;
    case 1593:
      psg_write(168);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      psg_write(188);
      return;
    case 1594:
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      return;
    case 1595:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      psg_write(189);
      return;
    case 1596:
      psg_write(143);
      psg_write(7);
      psg_write(171);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1597:
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(244);
      return;
    case 1598:
      psg_write(206);
      psg_write(17);
      psg_write(218);
      psg_write(243);
      return;
    case 1599:
      psg_write(205);
      psg_write(17);
      psg_write(181);
      psg_write(244);
      return;
    case 1600:
      psg_write(172);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      return;
    case 1601:
      psg_write(173);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      psg_write(246);
      return;
    case 1602:
      psg_write(172);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(247);
      return;
    case 1603:
      psg_write(171);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 1604:
      psg_write(170);
      psg_write(31);
      psg_write(148);
      psg_write(253);
      return;
    case 1605:
      psg_write(169);
      psg_write(31);
      psg_write(184);
      psg_write(255);
      return;
    case 1606:
      psg_write(170);
      psg_write(31);
      psg_write(149);
      return;
    case 1607:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(150);
      psg_write(185);
      return;
    case 1608:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 1609:
      psg_write(173);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(151);
      psg_write(186);
      return;
    case 1610:
      psg_write(137);
      psg_write(10);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      return;
    case 1611:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      psg_write(187);
      psg_write(244);
      return;
    case 1612:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(243);
      return;
    case 1613:
      psg_write(169);
      psg_write(31);
      psg_write(204);
      psg_write(17);
      psg_write(188);
      psg_write(244);
      return;
    case 1614:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      return;
    case 1615:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(17);
      psg_write(189);
      psg_write(246);
      return;
    case 1616:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(17);
      psg_write(247);
      return;
    case 1617:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1618:
      psg_write(146);
      psg_write(243);
      return;
    case 1619:
      psg_write(244);
      return;
    case 1620:
      psg_write(181);
      psg_write(245);
      return;
    case 1621:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 1622:
      psg_write(172);
      psg_write(35);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 1623:
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(15);
      psg_write(249);
      return;
    case 1624:
      psg_write(128);
      psg_write(9);
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1625:
      psg_write(143);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 1626:
      psg_write(142);
      psg_write(8);
      psg_write(168);
      psg_write(35);
      psg_write(184);
      return;
    case 1627:
      psg_write(141);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      return;
    case 1628:
      psg_write(142);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 1629:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      return;
    case 1630:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1631:
      psg_write(205);
      psg_write(17);
      psg_write(146);
      psg_write(246);
      return;
    case 1632:
      psg_write(206);
      psg_write(17);
      psg_write(250);
      return;
    case 1633:
      psg_write(205);
      psg_write(17);
      psg_write(181);
      psg_write(255);
      return;
    case 1634:
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(17);
      return;
    case 1635:
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(17);
      psg_write(182);
      return;
    case 1636:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(17);
      return;
    case 1637:
      psg_write(128);
      psg_write(8);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1638:
      psg_write(143);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(244);
      return;
    case 1639:
      psg_write(142);
      psg_write(7);
      psg_write(163);
      psg_write(42);
      psg_write(184);
      psg_write(243);
      return;
    case 1640:
      psg_write(141);
      psg_write(7);
      psg_write(164);
      psg_write(42);
      psg_write(244);
      return;
    case 1641:
      psg_write(142);
      psg_write(7);
      psg_write(165);
      psg_write(42);
      psg_write(207);
      psg_write(18);
      psg_write(185);
      return;
    case 1642:
      psg_write(143);
      psg_write(7);
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 1643:
      psg_write(128);
      psg_write(8);
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(18);
      psg_write(186);
      psg_write(247);
      return;
    case 1644:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1645:
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(244);
      return;
    case 1646:
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 1647:
      psg_write(205);
      psg_write(18);
      psg_write(181);
      psg_write(244);
      return;
    case 1648:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1649:
      psg_write(171);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 1650:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(247);
      return;
    case 1651:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1652:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      return;
    case 1653:
      psg_write(167);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(184);
      psg_write(215);
      return;
    case 1654:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(149);
      return;
    case 1655:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(150);
      psg_write(185);
      return;
    case 1656:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1657:
      psg_write(171);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(151);
      psg_write(186);
      return;
    case 1658:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      return;
    case 1659:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(146);
      psg_write(187);
      psg_write(246);
      return;
    case 1660:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      psg_write(250);
      return;
    case 1661:
      psg_write(167);
      psg_write(47);
      psg_write(207);
      psg_write(18);
      psg_write(188);
      psg_write(255);
      return;
    case 1662:
      psg_write(168);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1663:
      psg_write(169);
      psg_write(47);
      psg_write(205);
      psg_write(18);
      psg_write(189);
      return;
    case 1664:
      psg_write(170);
      psg_write(47);
      psg_write(206);
      psg_write(18);
      return;
    case 1665:
      psg_write(172);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1666:
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 1667:
      psg_write(205);
      psg_write(18);
      psg_write(250);
      return;
    case 1668:
      psg_write(206);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1669:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(150);
      psg_write(216);
      return;
    case 1670:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 1671:
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(151);
      return;
    case 1672:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 1673:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(243);
      return;
    case 1674:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(244);
      return;
    case 1675:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(245);
      return;
    case 1676:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(185);
      psg_write(247);
      return;
    case 1677:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      psg_write(248);
      return;
    case 1678:
      psg_write(143);
      psg_write(7);
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(147);
      psg_write(186);
      psg_write(255);
      return;
    case 1679:
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      psg_write(146);
      return;
    case 1680:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(187);
      return;
    case 1681:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(18);
      return;
    case 1682:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(188);
      return;
    case 1683:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(18);
      return;
    case 1684:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(18);
      psg_write(189);
      return;
    case 1685:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(217);
      return;
    case 1686:
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(246);
      return;
    case 1687:
      psg_write(205);
      psg_write(18);
      psg_write(250);
      return;
    case 1688:
      psg_write(206);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1689:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(150);
      return;
    case 1690:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(182);
      return;
    case 1691:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(151);
      return;
    case 1692:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1693:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(146);
      psg_write(244);
      return;
    case 1694:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(184);
      psg_write(243);
      return;
    case 1695:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(244);
      return;
    case 1696:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(185);
      return;
    case 1697:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(246);
      return;
    case 1698:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(186);
      psg_write(247);
      return;
    case 1699:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      psg_write(147);
      psg_write(250);
      return;
    case 1700:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(187);
      psg_write(253);
      return;
    case 1701:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      psg_write(218);
      psg_write(255);
      return;
    case 1702:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(188);
      return;
    case 1703:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(18);
      return;
    case 1704:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(189);
      return;
    case 1705:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(18);
      return;
    case 1706:
      psg_write(139);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(180);
      return;
    case 1707:
      psg_write(138);
      psg_write(6);
      psg_write(205);
      psg_write(18);
      psg_write(244);
      return;
    case 1708:
      psg_write(137);
      psg_write(6);
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 1709:
      psg_write(138);
      psg_write(6);
      psg_write(207);
      psg_write(18);
      psg_write(149);
      psg_write(181);
      psg_write(244);
      return;
    case 1710:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 1711:
      psg_write(140);
      psg_write(6);
      psg_write(166);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(182);
      psg_write(246);
      return;
    case 1712:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(247);
      return;
    case 1713:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(183);
      psg_write(214);
      psg_write(250);
      return;
    case 1714:
      psg_write(137);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      psg_write(253);
      return;
    case 1715:
      psg_write(138);
      psg_write(6);
      psg_write(162);
      psg_write(28);
      psg_write(150);
      psg_write(184);
      psg_write(255);
      return;
    case 1716:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      return;
    case 1717:
      psg_write(140);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(185);
      return;
    case 1718:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 1719:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(186);
      return;
    case 1720:
      psg_write(137);
      psg_write(6);
      psg_write(165);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(151);
      return;
    case 1721:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(187);
      psg_write(244);
      return;
    case 1722:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      psg_write(243);
      return;
    case 1723:
      psg_write(140);
      psg_write(6);
      psg_write(162);
      psg_write(28);
      psg_write(205);
      psg_write(18);
      psg_write(188);
      psg_write(244);
      return;
    case 1724:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(28);
      psg_write(206);
      psg_write(18);
      return;
    case 1725:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(28);
      psg_write(207);
      psg_write(18);
      psg_write(152);
      psg_write(189);
      psg_write(246);
      return;
    case 1726:
      psg_write(143);
      psg_write(7);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1727:
      psg_write(146);
      psg_write(243);
      return;
    case 1728:
      psg_write(244);
      return;
    case 1729:
      psg_write(181);
      psg_write(245);
      return;
    case 1730:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(247);
      return;
    case 1731:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      psg_write(248);
      return;
    case 1732:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(249);
      return;
    case 1733:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1734:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(148);
      return;
    case 1735:
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(184);
      return;
    case 1736:
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(149);
      return;
    case 1737:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(150);
      psg_write(185);
      return;
    case 1738:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 1739:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(151);
      psg_write(186);
      return;
    case 1740:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1741:
      psg_write(146);
      psg_write(246);
      return;
    case 1742:
      psg_write(250);
      return;
    case 1743:
      psg_write(181);
      psg_write(255);
      return;
    case 1744:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      return;
    case 1745:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(182);
      return;
    case 1746:
      psg_write(173);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      return;
    case 1747:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1748:
      psg_write(171);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(148);
      psg_write(244);
      return;
    case 1749:
      psg_write(170);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(184);
      psg_write(243);
      return;
    case 1750:
      psg_write(171);
      psg_write(37);
      psg_write(205);
      psg_write(11);
      psg_write(149);
      psg_write(244);
      return;
    case 1751:
      psg_write(172);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(150);
      psg_write(185);
      return;
    case 1752:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(11);
      psg_write(246);
      return;
    case 1753:
      psg_write(174);
      psg_write(37);
      psg_write(206);
      psg_write(11);
      psg_write(151);
      psg_write(186);
      psg_write(247);
      return;
    case 1754:
      psg_write(138);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1755:
      psg_write(146);
      psg_write(244);
      return;
    case 1756:
      psg_write(243);
      return;
    case 1757:
      psg_write(181);
      psg_write(244);
      return;
    case 1758:
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      return;
    case 1759:
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(182);
      psg_write(246);
      return;
    case 1760:
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(247);
      return;
    case 1761:
      psg_write(139);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1762:
      psg_write(138);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      return;
    case 1763:
      psg_write(137);
      psg_write(5);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(184);
      return;
    case 1764:
      psg_write(136);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 1765:
      psg_write(137);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(185);
      return;
    case 1766:
      psg_write(138);
      psg_write(5);
      psg_write(161);
      psg_write(40);
      psg_write(199);
      psg_write(13);
      psg_write(148);
      return;
    case 1767:
      psg_write(139);
      psg_write(5);
      psg_write(162);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(186);
      return;
    case 1768:
      psg_write(138);
      psg_write(5);
      psg_write(161);
      psg_write(40);
      psg_write(197);
      psg_write(13);
      psg_write(228);
      return;
    case 1769:
      psg_write(137);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(187);
      psg_write(246);
      return;
    case 1770:
      psg_write(136);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(199);
      psg_write(13);
      psg_write(215);
      psg_write(250);
      return;
    case 1771:
      psg_write(137);
      psg_write(5);
      psg_write(174);
      psg_write(39);
      psg_write(198);
      psg_write(13);
      psg_write(149);
      psg_write(188);
      psg_write(255);
      return;
    case 1772:
      psg_write(138);
      psg_write(5);
      psg_write(175);
      psg_write(39);
      psg_write(197);
      psg_write(13);
      return;
    case 1773:
      psg_write(139);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(198);
      psg_write(13);
      psg_write(189);
      return;
    case 1774:
      psg_write(143);
      psg_write(5);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1775:
      psg_write(146);
      psg_write(246);
      return;
    case 1776:
      psg_write(250);
      return;
    case 1777:
      psg_write(181);
      psg_write(255);
      return;
    case 1778:
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 1779:
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      return;
    case 1780:
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 1781:
      psg_write(128);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 1782:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(243);
      return;
    case 1783:
      psg_write(142);
      psg_write(5);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(184);
      psg_write(244);
      return;
    case 1784:
      psg_write(141);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(245);
      return;
    case 1785:
      psg_write(142);
      psg_write(5);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(185);
      psg_write(247);
      return;
    case 1786:
      psg_write(143);
      psg_write(5);
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(148);
      psg_write(248);
      return;
    case 1787:
      psg_write(128);
      psg_write(6);
      psg_write(173);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(186);
      psg_write(249);
      return;
    case 1788:
      psg_write(143);
      psg_write(5);
      psg_write(172);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      psg_write(255);
      return;
    case 1789:
      psg_write(142);
      psg_write(5);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(187);
      return;
    case 1790:
      psg_write(141);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      psg_write(215);
      return;
    case 1791:
      psg_write(142);
      psg_write(5);
      psg_write(169);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(149);
      psg_write(188);
      return;
    case 1792:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(31);
      psg_write(205);
      psg_write(15);
      return;
    case 1793:
      psg_write(128);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(15);
      psg_write(189);
      return;
    case 1794:
      psg_write(143);
      psg_write(5);
      psg_write(172);
      psg_write(31);
      psg_write(207);
      psg_write(15);
      return;
    case 1795:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1796:
      psg_write(146);
      psg_write(246);
      return;
    case 1797:
      psg_write(250);
      return;
    case 1798:
      psg_write(181);
      psg_write(255);
      return;
    case 1799:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 1800:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      return;
    case 1801:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 1802:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1803:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(244);
      return;
    case 1804:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      psg_write(243);
      return;
    case 1805:
      psg_write(137);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 1806:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 1807:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 1808:
      psg_write(140);
      psg_write(6);
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 1809:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(250);
      return;
    case 1810:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(187);
      psg_write(253);
      return;
    case 1811:
      psg_write(137);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(215);
      psg_write(255);
      return;
    case 1812:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(149);
      psg_write(188);
      return;
    case 1813:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      return;
    case 1814:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(189);
      return;
    case 1815:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      return;
    case 1816:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(180);
      return;
    case 1817:
      psg_write(137);
      psg_write(6);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 1818:
      psg_write(138);
      psg_write(6);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(243);
      return;
    case 1819:
      psg_write(139);
      psg_write(6);
      psg_write(193);
      psg_write(20);
      psg_write(181);
      psg_write(244);
      return;
    case 1820:
      psg_write(140);
      psg_write(6);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      return;
    case 1821:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(22);
      psg_write(207);
      psg_write(19);
      psg_write(182);
      psg_write(246);
      return;
    case 1822:
      psg_write(143);
      psg_write(7);
      psg_write(168);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(214);
      psg_write(247);
      return;
    case 1823:
      psg_write(167);
      psg_write(22);
      psg_write(146);
      psg_write(183);
      psg_write(250);
      return;
    case 1824:
      psg_write(166);
      psg_write(22);
      psg_write(253);
      return;
    case 1825:
      psg_write(165);
      psg_write(22);
      psg_write(184);
      psg_write(255);
      return;
    case 1826:
      psg_write(166);
      psg_write(22);
      psg_write(193);
      psg_write(20);
      return;
    case 1827:
      psg_write(167);
      psg_write(22);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 1828:
      psg_write(168);
      psg_write(22);
      psg_write(207);
      psg_write(19);
      return;
    case 1829:
      psg_write(173);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 1830:
      psg_write(148);
      psg_write(244);
      return;
    case 1831:
      psg_write(243);
      return;
    case 1832:
      psg_write(149);
      psg_write(181);
      psg_write(244);
      return;
    case 1833:
      psg_write(174);
      psg_write(23);
      psg_write(196);
      psg_write(21);
      psg_write(150);
      return;
    case 1834:
      psg_write(175);
      psg_write(23);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 1835:
      psg_write(174);
      psg_write(23);
      psg_write(194);
      psg_write(21);
      psg_write(151);
      psg_write(247);
      return;
    case 1836:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 1837:
      psg_write(146);
      psg_write(243);
      return;
    case 1838:
      psg_write(244);
      return;
    case 1839:
      psg_write(181);
      psg_write(245);
      return;
    case 1840:
      psg_write(172);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 1841:
      psg_write(173);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 1842:
      psg_write(172);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(249);
      return;
    case 1843:
      psg_write(143);
      psg_write(5);
      psg_write(171);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1844:
      psg_write(170);
      psg_write(26);
      psg_write(146);
      return;
    case 1845:
      psg_write(169);
      psg_write(26);
      psg_write(184);
      return;
    case 1846:
      psg_write(170);
      psg_write(26);
      return;
    case 1847:
      psg_write(171);
      psg_write(26);
      psg_write(193);
      psg_write(20);
      psg_write(185);
      return;
    case 1848:
      psg_write(172);
      psg_write(26);
      psg_write(192);
      psg_write(20);
      return;
    case 1849:
      psg_write(173);
      psg_write(26);
      psg_write(207);
      psg_write(19);
      psg_write(186);
      return;
    case 1850:
      psg_write(171);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1851:
      psg_write(193);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 1852:
      psg_write(192);
      psg_write(20);
      psg_write(250);
      return;
    case 1853:
      psg_write(207);
      psg_write(19);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 1854:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      return;
    case 1855:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(182);
      return;
    case 1856:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(151);
      return;
    case 1857:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 1858:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(146);
      psg_write(244);
      return;
    case 1859:
      psg_write(169);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(184);
      psg_write(215);
      psg_write(243);
      return;
    case 1860:
      psg_write(170);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(244);
      return;
    case 1861:
      psg_write(171);
      psg_write(31);
      psg_write(207);
      psg_write(19);
      psg_write(185);
      return;
    case 1862:
      psg_write(172);
      psg_write(31);
      psg_write(192);
      psg_write(20);
      psg_write(246);
      return;
    case 1863:
      psg_write(173);
      psg_write(31);
      psg_write(193);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 1864:
      psg_write(140);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1865:
      psg_write(139);
      psg_write(6);
      psg_write(244);
      return;
    case 1866:
      psg_write(138);
      psg_write(6);
      psg_write(243);
      return;
    case 1867:
      psg_write(137);
      psg_write(6);
      psg_write(181);
      psg_write(244);
      return;
    case 1868:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 1869:
      psg_write(139);
      psg_write(6);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(148);
      psg_write(182);
      psg_write(246);
      return;
    case 1870:
      psg_write(140);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(228);
      return;
    case 1871:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(183);
      return;
    case 1872:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(250);
      return;
    case 1873:
      psg_write(137);
      psg_write(6);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      psg_write(255);
      return;
    case 1874:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(149);
      return;
    case 1875:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 1876:
      psg_write(140);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 1877:
      psg_write(139);
      psg_write(6);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(186);
      return;
    case 1878:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(246);
      return;
    case 1879:
      psg_write(137);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      psg_write(250);
      return;
    case 1880:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(150);
      psg_write(215);
      psg_write(255);
      return;
    case 1881:
      psg_write(139);
      psg_write(6);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(188);
      return;
    case 1882:
      psg_write(140);
      psg_write(6);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 1883:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(189);
      return;
    case 1884:
      psg_write(138);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(230);
      psg_write(180);
      return;
    case 1885:
      psg_write(137);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(151);
      psg_write(243);
      return;
    case 1886:
      psg_write(138);
      psg_write(6);
      psg_write(194);
      psg_write(21);
      psg_write(244);
      return;
    case 1887:
      psg_write(139);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(181);
      psg_write(245);
      return;
    case 1888:
      psg_write(140);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(247);
      return;
    case 1889:
      psg_write(139);
      psg_write(6);
      psg_write(167);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(248);
      return;
    case 1890:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(152);
      psg_write(249);
      return;
    case 1891:
      psg_write(137);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(183);
      return;
    case 1892:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(244);
      return;
    case 1893:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      psg_write(243);
      return;
    case 1894:
      psg_write(140);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(244);
      return;
    case 1895:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 1896:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(153);
      psg_write(216);
      psg_write(246);
      return;
    case 1897:
      psg_write(137);
      psg_write(6);
      psg_write(167);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(186);
      psg_write(247);
      return;
    case 1898:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(228);
      psg_write(154);
      return;
    case 1899:
      psg_write(139);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      psg_write(246);
      return;
    case 1900:
      psg_write(140);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(155);
      psg_write(250);
      return;
    case 1901:
      psg_write(139);
      psg_write(6);
      psg_write(163);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(188);
      psg_write(255);
      return;
    case 1902:
      psg_write(138);
      psg_write(6);
      psg_write(164);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(156);
      return;
    case 1903:
      psg_write(137);
      psg_write(6);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(157);
      psg_write(189);
      return;
    case 1904:
      psg_write(138);
      psg_write(6);
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      return;
    case 1905:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(158);
      psg_write(180);
      return;
    case 1906:
      psg_write(140);
      psg_write(6);
      psg_write(194);
      psg_write(21);
      psg_write(246);
      return;
    case 1907:
      psg_write(139);
      psg_write(6);
      psg_write(195);
      psg_write(21);
      psg_write(159);
      psg_write(250);
      return;
    case 1908:
      psg_write(138);
      psg_write(6);
      psg_write(196);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 1909:
      psg_write(137);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1910:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(182);
      return;
    case 1911:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      return;
    case 1912:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(230);
      psg_write(183);
      psg_write(217);
      return;
    case 1913:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(243);
      return;
    case 1914:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(35);
      psg_write(194);
      psg_write(21);
      psg_write(184);
      psg_write(244);
      return;
    case 1915:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(245);
      return;
    case 1916:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      psg_write(247);
      return;
    case 1917:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(21);
      psg_write(248);
      return;
    case 1918:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(229);
      psg_write(180);
      psg_write(214);
      return;
    case 1919:
      psg_write(139);
      psg_write(6);
      psg_write(244);
      return;
    case 1920:
      psg_write(138);
      psg_write(6);
      psg_write(243);
      return;
    case 1921:
      psg_write(137);
      psg_write(6);
      psg_write(181);
      psg_write(244);
      return;
    case 1922:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(196);
      psg_write(21);
      return;
    case 1923:
      psg_write(139);
      psg_write(6);
      psg_write(173);
      psg_write(26);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 1924:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 1925:
      psg_write(139);
      psg_write(6);
      psg_write(173);
      psg_write(23);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(180);
      return;
    case 1926:
      psg_write(138);
      psg_write(6);
      psg_write(244);
      return;
    case 1927:
      psg_write(137);
      psg_write(6);
      psg_write(243);
      return;
    case 1928:
      psg_write(138);
      psg_write(6);
      psg_write(181);
      psg_write(244);
      return;
    case 1929:
      psg_write(139);
      psg_write(6);
      psg_write(174);
      psg_write(23);
      psg_write(193);
      psg_write(20);
      return;
    case 1930:
      psg_write(140);
      psg_write(6);
      psg_write(175);
      psg_write(23);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(246);
      return;
    case 1931:
      psg_write(139);
      psg_write(6);
      psg_write(174);
      psg_write(23);
      psg_write(207);
      psg_write(19);
      psg_write(247);
      return;
    case 1932:
      psg_write(173);
      psg_write(23);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(215);
      return;
    case 1933:
      psg_write(146);
      psg_write(183);
      psg_write(243);
      return;
    case 1934:
      psg_write(216);
      psg_write(247);
      return;
    case 1935:
      psg_write(184);
      psg_write(255);
      return;
    case 1936:
      psg_write(174);
      psg_write(23);
      psg_write(193);
      psg_write(20);
      psg_write(217);
      return;
    case 1937:
      psg_write(175);
      psg_write(23);
      psg_write(192);
      psg_write(20);
      psg_write(218);
      return;
    case 1938:
      psg_write(174);
      psg_write(23);
      psg_write(207);
      psg_write(19);
      psg_write(185);
      return;
    case 1939:
      psg_write(140);
      psg_write(6);
      psg_write(167);
      psg_write(22);
      psg_write(206);
      psg_write(18);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1940:
      psg_write(139);
      psg_write(6);
      psg_write(244);
      return;
    case 1941:
      psg_write(138);
      psg_write(6);
      psg_write(243);
      return;
    case 1942:
      psg_write(137);
      psg_write(6);
      psg_write(181);
      psg_write(244);
      return;
    case 1943:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(22);
      psg_write(207);
      psg_write(18);
      return;
    case 1944:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(22);
      psg_write(206);
      psg_write(18);
      psg_write(148);
      psg_write(182);
      psg_write(246);
      return;
    case 1945:
      psg_write(140);
      psg_write(6);
      psg_write(168);
      psg_write(22);
      psg_write(205);
      psg_write(18);
      psg_write(247);
      return;
    case 1946:
      psg_write(129);
      psg_write(7);
      psg_write(167);
      psg_write(22);
      psg_write(206);
      psg_write(18);
      psg_write(230);
      psg_write(147);
      psg_write(215);
      return;
    case 1947:
      psg_write(146);
      psg_write(183);
      psg_write(243);
      return;
    case 1948:
      psg_write(216);
      psg_write(247);
      return;
    case 1949:
      psg_write(184);
      psg_write(255);
      return;
    case 1950:
      psg_write(168);
      psg_write(22);
      psg_write(207);
      psg_write(18);
      psg_write(217);
      return;
    case 1951:
      psg_write(169);
      psg_write(22);
      psg_write(206);
      psg_write(18);
      psg_write(218);
      return;
    case 1952:
      psg_write(168);
      psg_write(22);
      psg_write(205);
      psg_write(18);
      psg_write(185);
      return;
    case 1953:
      psg_write(130);
      psg_write(7);
      psg_write(163);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1954:
      psg_write(129);
      psg_write(7);
      psg_write(243);
      return;
    case 1955:
      psg_write(128);
      psg_write(7);
      psg_write(244);
      return;
    case 1956:
      psg_write(143);
      psg_write(6);
      psg_write(181);
      psg_write(245);
      return;
    case 1957:
      psg_write(128);
      psg_write(7);
      psg_write(164);
      psg_write(21);
      psg_write(206);
      psg_write(17);
      psg_write(247);
      return;
    case 1958:
      psg_write(129);
      psg_write(7);
      psg_write(165);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(182);
      psg_write(248);
      return;
    case 1959:
      psg_write(130);
      psg_write(7);
      psg_write(164);
      psg_write(21);
      psg_write(204);
      psg_write(17);
      psg_write(249);
      return;
    case 1960:
      psg_write(136);
      psg_write(7);
      psg_write(163);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1961:
      psg_write(162);
      psg_write(21);
      psg_write(206);
      psg_write(17);
      psg_write(146);
      return;
    case 1962:
      psg_write(161);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(184);
      return;
    case 1963:
      psg_write(162);
      psg_write(21);
      psg_write(204);
      psg_write(17);
      return;
    case 1964:
      psg_write(163);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(185);
      return;
    case 1965:
      psg_write(164);
      psg_write(21);
      psg_write(206);
      psg_write(17);
      return;
    case 1966:
      psg_write(165);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(186);
      return;
    case 1967:
      psg_write(137);
      psg_write(7);
      psg_write(164);
      psg_write(21);
      psg_write(204);
      psg_write(17);
      psg_write(147);
      return;
    case 1968:
      psg_write(136);
      psg_write(7);
      psg_write(163);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(187);
      return;
    case 1969:
      psg_write(135);
      psg_write(7);
      psg_write(162);
      psg_write(21);
      psg_write(206);
      psg_write(17);
      psg_write(215);
      return;
    case 1970:
      psg_write(134);
      psg_write(7);
      psg_write(161);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(188);
      return;
    case 1971:
      psg_write(135);
      psg_write(7);
      psg_write(162);
      psg_write(21);
      psg_write(204);
      psg_write(17);
      return;
    case 1972:
      psg_write(136);
      psg_write(7);
      psg_write(163);
      psg_write(21);
      psg_write(205);
      psg_write(17);
      psg_write(148);
      psg_write(189);
      return;
    case 1973:
      psg_write(143);
      psg_write(7);
      psg_write(160);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 1974:
      psg_write(146);
      psg_write(244);
      return;
    case 1975:
      psg_write(243);
      return;
    case 1976:
      psg_write(181);
      psg_write(244);
      return;
    case 1977:
      psg_write(161);
      psg_write(40);
      psg_write(193);
      psg_write(20);
      return;
    case 1978:
      psg_write(162);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(246);
      return;
    case 1979:
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(19);
      psg_write(247);
      return;
    case 1980:
      psg_write(135);
      psg_write(8);
      psg_write(160);
      psg_write(40);
      psg_write(195);
      psg_write(21);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 1981:
      psg_write(175);
      psg_write(39);
      psg_write(146);
      return;
    case 1982:
      psg_write(174);
      psg_write(39);
      psg_write(184);
      return;
    case 1983:
      psg_write(175);
      psg_write(39);
      return;
    case 1984:
      psg_write(160);
      psg_write(40);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      return;
    case 1985:
      psg_write(161);
      psg_write(40);
      psg_write(195);
      psg_write(21);
      return;
    case 1986:
      psg_write(162);
      psg_write(40);
      psg_write(194);
      psg_write(21);
      psg_write(186);
      return;
    case 1987:
      psg_write(143);
      psg_write(7);
      psg_write(161);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      return;
    case 1988:
      psg_write(160);
      psg_write(40);
      psg_write(146);
      psg_write(187);
      psg_write(246);
      return;
    case 1989:
      psg_write(175);
      psg_write(39);
      psg_write(250);
      return;
    case 1990:
      psg_write(174);
      psg_write(39);
      psg_write(188);
      psg_write(255);
      return;
    case 1991:
      psg_write(175);
      psg_write(39);
      psg_write(193);
      psg_write(20);
      return;
    case 1992:
      psg_write(160);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(189);
      return;
    case 1993:
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(19);
      return;
    case 1994:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 1995:
      psg_write(146);
      psg_write(246);
      return;
    case 1996:
      psg_write(250);
      return;
    case 1997:
      psg_write(181);
      psg_write(255);
      return;
    case 1998:
      psg_write(167);
      psg_write(53);
      psg_write(207);
      psg_write(15);
      return;
    case 1999:
      psg_write(168);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      return;
    case 2000:
      psg_write(167);
      psg_write(53);
      psg_write(205);
      psg_write(15);
      return;
    case 2001:
      psg_write(166);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      psg_write(215);
      return;
    case 2002:
      psg_write(165);
      psg_write(53);
      psg_write(148);
      psg_write(243);
      return;
    case 2003:
      psg_write(164);
      psg_write(53);
      psg_write(184);
      psg_write(216);
      psg_write(244);
      return;
    case 2004:
      psg_write(165);
      psg_write(53);
      psg_write(149);
      psg_write(245);
      return;
    case 2005:
      psg_write(166);
      psg_write(53);
      psg_write(207);
      psg_write(15);
      psg_write(150);
      psg_write(185);
      psg_write(217);
      psg_write(247);
      return;
    case 2006:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(218);
      psg_write(248);
      return;
    case 2007:
      psg_write(168);
      psg_write(53);
      psg_write(205);
      psg_write(15);
      psg_write(151);
      psg_write(186);
      psg_write(249);
      return;
    case 2008:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(53);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(214);
      psg_write(255);
      return;
    case 2009:
      psg_write(166);
      psg_write(53);
      psg_write(146);
      psg_write(187);
      return;
    case 2010:
      psg_write(165);
      psg_write(53);
      return;
    case 2011:
      psg_write(164);
      psg_write(53);
      psg_write(188);
      return;
    case 2012:
      psg_write(165);
      psg_write(53);
      psg_write(193);
      psg_write(20);
      return;
    case 2013:
      psg_write(166);
      psg_write(53);
      psg_write(192);
      psg_write(20);
      psg_write(189);
      return;
    case 2014:
      psg_write(139);
      psg_write(6);
      psg_write(160);
      psg_write(40);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2015:
      psg_write(146);
      psg_write(215);
      psg_write(246);
      return;
    case 2016:
      psg_write(216);
      psg_write(250);
      return;
    case 2017:
      psg_write(181);
      psg_write(255);
      return;
    case 2018:
      psg_write(161);
      psg_write(40);
      psg_write(193);
      psg_write(20);
      psg_write(217);
      return;
    case 2019:
      psg_write(162);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(218);
      return;
    case 2020:
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(19);
      return;
    case 2021:
      psg_write(143);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      return;
    case 2022:
      psg_write(175);
      psg_write(39);
      psg_write(146);
      psg_write(244);
      return;
    case 2023:
      psg_write(174);
      psg_write(39);
      psg_write(184);
      psg_write(243);
      return;
    case 2024:
      psg_write(175);
      psg_write(39);
      psg_write(244);
      return;
    case 2025:
      psg_write(160);
      psg_write(40);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 2026:
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(246);
      return;
    case 2027:
      psg_write(162);
      psg_write(40);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      psg_write(247);
      return;
    case 2028:
      psg_write(138);
      psg_write(5);
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(16);
      psg_write(147);
      psg_write(250);
      return;
    case 2029:
      psg_write(160);
      psg_write(40);
      psg_write(146);
      psg_write(187);
      psg_write(253);
      return;
    case 2030:
      psg_write(175);
      psg_write(39);
      psg_write(255);
      return;
    case 2031:
      psg_write(174);
      psg_write(39);
      psg_write(188);
      return;
    case 2032:
      psg_write(175);
      psg_write(39);
      psg_write(206);
      psg_write(16);
      return;
    case 2033:
      psg_write(160);
      psg_write(40);
      psg_write(205);
      psg_write(16);
      psg_write(189);
      return;
    case 2034:
      psg_write(161);
      psg_write(40);
      psg_write(204);
      psg_write(16);
      return;
    case 2035:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2036:
      psg_write(206);
      psg_write(16);
      psg_write(146);
      psg_write(244);
      return;
    case 2037:
      psg_write(205);
      psg_write(16);
      psg_write(243);
      return;
    case 2038:
      psg_write(204);
      psg_write(16);
      psg_write(181);
      psg_write(244);
      return;
    case 2039:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2040:
      psg_write(172);
      psg_write(33);
      psg_write(206);
      psg_write(16);
      psg_write(182);
      psg_write(246);
      return;
    case 2041:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(247);
      return;
    case 2042:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(33);
      psg_write(204);
      psg_write(16);
      psg_write(147);
      psg_write(183);
      psg_write(250);
      return;
    case 2043:
      psg_write(169);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(146);
      psg_write(253);
      return;
    case 2044:
      psg_write(168);
      psg_write(33);
      psg_write(206);
      psg_write(16);
      psg_write(184);
      psg_write(215);
      psg_write(255);
      return;
    case 2045:
      psg_write(169);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2046:
      psg_write(170);
      psg_write(33);
      psg_write(204);
      psg_write(16);
      psg_write(185);
      return;
    case 2047:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2048:
      psg_write(172);
      psg_write(33);
      psg_write(206);
      psg_write(16);
      psg_write(186);
      return;
    case 2049:
      psg_write(143);
      psg_write(7);
      psg_write(170);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2050:
      psg_write(204);
      psg_write(16);
      psg_write(146);
      psg_write(244);
      return;
    case 2051:
      psg_write(205);
      psg_write(16);
      psg_write(243);
      return;
    case 2052:
      psg_write(206);
      psg_write(16);
      psg_write(181);
      psg_write(244);
      return;
    case 2053:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2054:
      psg_write(172);
      psg_write(33);
      psg_write(204);
      psg_write(16);
      psg_write(182);
      psg_write(246);
      return;
    case 2055:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(247);
      return;
    case 2056:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2057:
      psg_write(146);
      psg_write(243);
      return;
    case 2058:
      psg_write(244);
      return;
    case 2059:
      psg_write(181);
      psg_write(245);
      return;
    case 2060:
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 2061:
      psg_write(171);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 2062:
      psg_write(170);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      psg_write(255);
      return;
    case 2063:
      psg_write(140);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      return;
    case 2064:
      psg_write(139);
      psg_write(6);
      psg_write(168);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      return;
    case 2065:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      return;
    case 2066:
      psg_write(137);
      psg_write(6);
      psg_write(168);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      return;
    case 2067:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 2068:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      return;
    case 2069:
      psg_write(135);
      psg_write(8);
      psg_write(170);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2070:
      psg_write(207);
      psg_write(19);
      psg_write(146);
      psg_write(246);
      return;
    case 2071:
      psg_write(192);
      psg_write(20);
      psg_write(250);
      return;
    case 2072:
      psg_write(193);
      psg_write(20);
      psg_write(181);
      psg_write(215);
      psg_write(255);
      return;
    case 2073:
      psg_write(171);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      return;
    case 2074:
      psg_write(172);
      psg_write(33);
      psg_write(207);
      psg_write(19);
      psg_write(182);
      return;
    case 2075:
      psg_write(171);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      return;
    case 2076:
      psg_write(136);
      psg_write(8);
      psg_write(170);
      psg_write(33);
      psg_write(193);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 2077:
      psg_write(135);
      psg_write(8);
      psg_write(169);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(244);
      return;
    case 2078:
      psg_write(134);
      psg_write(8);
      psg_write(168);
      psg_write(33);
      psg_write(207);
      psg_write(19);
      psg_write(184);
      psg_write(243);
      return;
    case 2079:
      psg_write(133);
      psg_write(8);
      psg_write(169);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(244);
      return;
    case 2080:
      psg_write(134);
      psg_write(8);
      psg_write(170);
      psg_write(33);
      psg_write(193);
      psg_write(20);
      psg_write(185);
      return;
    case 2081:
      psg_write(135);
      psg_write(8);
      psg_write(171);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(148);
      psg_write(246);
      return;
    case 2082:
      psg_write(136);
      psg_write(8);
      psg_write(172);
      psg_write(33);
      psg_write(207);
      psg_write(19);
      psg_write(186);
      psg_write(247);
      return;
    case 2083:
      psg_write(143);
      psg_write(7);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2084:
      psg_write(146);
      psg_write(244);
      return;
    case 2085:
      psg_write(243);
      return;
    case 2086:
      psg_write(181);
      psg_write(244);
      return;
    case 2087:
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 2088:
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 2089:
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 2090:
      psg_write(128);
      psg_write(8);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 2091:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 2092:
      psg_write(142);
      psg_write(7);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      return;
    case 2093:
      psg_write(141);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 2094:
      psg_write(142);
      psg_write(7);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 2095:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(148);
      return;
    case 2096:
      psg_write(128);
      psg_write(8);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(186);
      return;
    case 2097:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(228);
      return;
    case 2098:
      psg_write(142);
      psg_write(7);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      psg_write(246);
      return;
    case 2099:
      psg_write(141);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(215);
      psg_write(250);
      return;
    case 2100:
      psg_write(142);
      psg_write(7);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(149);
      psg_write(188);
      psg_write(255);
      return;
    case 2101:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 2102:
      psg_write(128);
      psg_write(8);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(189);
      return;
    case 2103:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 2104:
      psg_write(143);
      psg_write(8);
      psg_write(165);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2105:
      psg_write(194);
      psg_write(21);
      psg_write(146);
      psg_write(246);
      return;
    case 2106:
      psg_write(195);
      psg_write(21);
      psg_write(250);
      return;
    case 2107:
      psg_write(196);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 2108:
      psg_write(166);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      return;
    case 2109:
      psg_write(167);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      psg_write(182);
      return;
    case 2110:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(230);
      psg_write(147);
      psg_write(214);
      return;
    case 2111:
      psg_write(165);
      psg_write(42);
      psg_write(148);
      psg_write(183);
      psg_write(243);
      return;
    case 2112:
      psg_write(164);
      psg_write(42);
      psg_write(244);
      return;
    case 2113:
      psg_write(163);
      psg_write(42);
      psg_write(149);
      psg_write(184);
      psg_write(245);
      return;
    case 2114:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(23);
      psg_write(247);
      return;
    case 2115:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(150);
      psg_write(185);
      psg_write(248);
      return;
    case 2116:
      psg_write(166);
      psg_write(42);
      psg_write(204);
      psg_write(23);
      psg_write(151);
      psg_write(249);
      return;
    case 2117:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(147);
      psg_write(186);
      psg_write(255);
      return;
    case 2118:
      psg_write(166);
      psg_write(42);
      psg_write(206);
      psg_write(23);
      psg_write(146);
      return;
    case 2119:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(187);
      return;
    case 2120:
      psg_write(164);
      psg_write(42);
      psg_write(204);
      psg_write(23);
      return;
    case 2121:
      psg_write(163);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(188);
      return;
    case 2122:
      psg_write(164);
      psg_write(42);
      psg_write(206);
      psg_write(23);
      return;
    case 2123:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(189);
      return;
    case 2124:
      psg_write(170);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2125:
      psg_write(205);
      psg_write(23);
      psg_write(148);
      psg_write(246);
      return;
    case 2126:
      psg_write(206);
      psg_write(23);
      psg_write(215);
      psg_write(250);
      return;
    case 2127:
      psg_write(205);
      psg_write(23);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 2128:
      psg_write(171);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(150);
      return;
    case 2129:
      psg_write(172);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(182);
      return;
    case 2130:
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(23);
      psg_write(151);
      return;
    case 2131:
      psg_write(137);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 2132:
      psg_write(169);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(146);
      psg_write(244);
      return;
    case 2133:
      psg_write(168);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(184);
      psg_write(243);
      return;
    case 2134:
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(23);
      psg_write(244);
      return;
    case 2135:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(147);
      psg_write(185);
      return;
    case 2136:
      psg_write(171);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(148);
      psg_write(246);
      return;
    case 2137:
      psg_write(172);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(186);
      psg_write(247);
      return;
    case 2138:
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(25);
      psg_write(147);
      psg_write(214);
      psg_write(250);
      return;
    case 2139:
      psg_write(170);
      psg_write(35);
      psg_write(146);
      psg_write(187);
      psg_write(253);
      return;
    case 2140:
      psg_write(169);
      psg_write(35);
      psg_write(255);
      return;
    case 2141:
      psg_write(168);
      psg_write(35);
      psg_write(188);
      return;
    case 2142:
      psg_write(169);
      psg_write(35);
      psg_write(196);
      psg_write(25);
      return;
    case 2143:
      psg_write(170);
      psg_write(35);
      psg_write(195);
      psg_write(25);
      psg_write(189);
      return;
    case 2144:
      psg_write(171);
      psg_write(35);
      psg_write(194);
      psg_write(25);
      return;
    case 2145:
      psg_write(132);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2146:
      psg_write(196);
      psg_write(25);
      psg_write(146);
      psg_write(244);
      return;
    case 2147:
      psg_write(195);
      psg_write(25);
      psg_write(243);
      return;
    case 2148:
      psg_write(194);
      psg_write(25);
      psg_write(181);
      psg_write(244);
      return;
    case 2149:
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      return;
    case 2150:
      psg_write(173);
      psg_write(31);
      psg_write(196);
      psg_write(25);
      psg_write(182);
      psg_write(246);
      return;
    case 2151:
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      psg_write(247);
      return;
    case 2152:
      psg_write(142);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(194);
      psg_write(25);
      psg_write(147);
      psg_write(183);
      psg_write(250);
      return;
    case 2153:
      psg_write(170);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      psg_write(146);
      psg_write(253);
      return;
    case 2154:
      psg_write(169);
      psg_write(31);
      psg_write(196);
      psg_write(25);
      psg_write(184);
      psg_write(215);
      psg_write(255);
      return;
    case 2155:
      psg_write(170);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      return;
    case 2156:
      psg_write(171);
      psg_write(31);
      psg_write(194);
      psg_write(25);
      psg_write(185);
      return;
    case 2157:
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      return;
    case 2158:
      psg_write(137);
      psg_write(12);
      psg_write(173);
      psg_write(31);
      psg_write(207);
      psg_write(29);
      psg_write(229);
      psg_write(147);
      psg_write(186);
      psg_write(214);
      return;
    case 2159:
      psg_write(172);
      psg_write(31);
      psg_write(146);
      psg_write(244);
      return;
    case 2160:
      psg_write(171);
      psg_write(31);
      psg_write(187);
      psg_write(243);
      return;
    case 2161:
      psg_write(170);
      psg_write(31);
      psg_write(244);
      return;
    case 2162:
      psg_write(169);
      psg_write(31);
      psg_write(192);
      psg_write(30);
      psg_write(188);
      return;
    case 2163:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(29);
      psg_write(246);
      return;
    case 2164:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(29);
      psg_write(189);
      psg_write(247);
      return;
    case 2165:
      psg_write(138);
      psg_write(12);
      psg_write(165);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 2166:
      psg_write(137);
      psg_write(12);
      psg_write(192);
      psg_write(30);
      psg_write(243);
      return;
    case 2167:
      psg_write(136);
      psg_write(12);
      psg_write(207);
      psg_write(29);
      psg_write(244);
      return;
    case 2168:
      psg_write(135);
      psg_write(12);
      psg_write(206);
      psg_write(29);
      psg_write(181);
      psg_write(245);
      return;
    case 2169:
      psg_write(136);
      psg_write(12);
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(247);
      return;
    case 2170:
      psg_write(137);
      psg_write(12);
      psg_write(167);
      psg_write(42);
      psg_write(192);
      psg_write(30);
      psg_write(148);
      psg_write(182);
      psg_write(248);
      return;
    case 2171:
      psg_write(138);
      psg_write(12);
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(249);
      return;
    case 2172:
      psg_write(137);
      psg_write(12);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(29);
      psg_write(183);
      psg_write(255);
      return;
    case 2173:
      psg_write(136);
      psg_write(12);
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      return;
    case 2174:
      psg_write(135);
      psg_write(12);
      psg_write(163);
      psg_write(42);
      psg_write(192);
      psg_write(30);
      psg_write(184);
      psg_write(215);
      return;
    case 2175:
      psg_write(136);
      psg_write(12);
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(149);
      return;
    case 2176:
      psg_write(137);
      psg_write(12);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(29);
      psg_write(185);
      return;
    case 2177:
      psg_write(138);
      psg_write(12);
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      return;
    case 2178:
      psg_write(137);
      psg_write(12);
      psg_write(167);
      psg_write(42);
      psg_write(192);
      psg_write(30);
      psg_write(186);
      return;
    case 2179:
      psg_write(136);
      psg_write(12);
      psg_write(166);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(228);
      psg_write(180);
      psg_write(214);
      return;
    case 2180:
      psg_write(135);
      psg_write(12);
      psg_write(246);
      return;
    case 2181:
      psg_write(136);
      psg_write(12);
      psg_write(150);
      psg_write(250);
      return;
    case 2182:
      psg_write(137);
      psg_write(12);
      psg_write(181);
      psg_write(255);
      return;
    case 2183:
      psg_write(138);
      psg_write(12);
      psg_write(167);
      psg_write(50);
      psg_write(204);
      psg_write(31);
      return;
    case 2184:
      psg_write(137);
      psg_write(12);
      psg_write(168);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(182);
      return;
    case 2185:
      psg_write(136);
      psg_write(12);
      psg_write(167);
      psg_write(50);
      psg_write(202);
      psg_write(31);
      return;
    case 2186:
      psg_write(135);
      psg_write(12);
      psg_write(166);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(229);
      psg_write(151);
      psg_write(183);
      return;
    case 2187:
      psg_write(136);
      psg_write(12);
      psg_write(165);
      psg_write(50);
      psg_write(204);
      psg_write(31);
      psg_write(244);
      return;
    case 2188:
      psg_write(137);
      psg_write(12);
      psg_write(164);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(184);
      psg_write(243);
      return;
    case 2189:
      psg_write(138);
      psg_write(12);
      psg_write(165);
      psg_write(50);
      psg_write(202);
      psg_write(31);
      psg_write(244);
      return;
    case 2190:
      psg_write(137);
      psg_write(12);
      psg_write(166);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(185);
      return;
    case 2191:
      psg_write(136);
      psg_write(12);
      psg_write(167);
      psg_write(50);
      psg_write(204);
      psg_write(31);
      psg_write(152);
      psg_write(246);
      return;
    case 2192:
      psg_write(135);
      psg_write(12);
      psg_write(168);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(186);
      psg_write(247);
      return;
    case 2193:
      psg_write(142);
      psg_write(11);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2194:
      psg_write(146);
      psg_write(244);
      return;
    case 2195:
      psg_write(243);
      return;
    case 2196:
      psg_write(181);
      psg_write(244);
      return;
    case 2197:
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      return;
    case 2198:
      psg_write(171);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(246);
      return;
    case 2199:
      psg_write(170);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      psg_write(247);
      return;
    case 2200:
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 2201:
      psg_write(168);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      return;
    case 2202:
      psg_write(167);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      return;
    case 2203:
      psg_write(168);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      psg_write(149);
      return;
    case 2204:
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(185);
      return;
    case 2205:
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      return;
    case 2206:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(47);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(186);
      return;
    case 2207:
      psg_write(170);
      psg_write(47);
      psg_write(146);
      psg_write(246);
      return;
    case 2208:
      psg_write(169);
      psg_write(47);
      psg_write(187);
      psg_write(250);
      return;
    case 2209:
      psg_write(168);
      psg_write(47);
      psg_write(255);
      return;
    case 2210:
      psg_write(167);
      psg_write(47);
      psg_write(206);
      psg_write(17);
      psg_write(188);
      return;
    case 2211:
      psg_write(168);
      psg_write(47);
      psg_write(205);
      psg_write(17);
      return;
    case 2212:
      psg_write(169);
      psg_write(47);
      psg_write(204);
      psg_write(17);
      psg_write(189);
      return;
    case 2213:
      psg_write(160);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2214:
      psg_write(206);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 2215:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 2216:
      psg_write(204);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 2217:
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 2218:
      psg_write(162);
      psg_write(40);
      psg_write(206);
      psg_write(17);
      psg_write(182);
      return;
    case 2219:
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      return;
    case 2220:
      psg_write(128);
      psg_write(10);
      psg_write(160);
      psg_write(40);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 2221:
      psg_write(175);
      psg_write(39);
      psg_write(146);
      psg_write(243);
      return;
    case 2222:
      psg_write(174);
      psg_write(39);
      psg_write(184);
      psg_write(244);
      return;
    case 2223:
      psg_write(175);
      psg_write(39);
      psg_write(245);
      return;
    case 2224:
      psg_write(160);
      psg_write(40);
      psg_write(207);
      psg_write(15);
      psg_write(185);
      psg_write(247);
      return;
    case 2225:
      psg_write(161);
      psg_write(40);
      psg_write(206);
      psg_write(15);
      psg_write(248);
      return;
    case 2226:
      psg_write(162);
      psg_write(40);
      psg_write(205);
      psg_write(15);
      psg_write(186);
      psg_write(249);
      return;
    case 2227:
      psg_write(135);
      psg_write(9);
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(14);
      psg_write(147);
      psg_write(255);
      return;
    case 2228:
      psg_write(160);
      psg_write(40);
      psg_write(146);
      psg_write(187);
      return;
    case 2229:
      psg_write(175);
      psg_write(39);
      return;
    case 2230:
      psg_write(174);
      psg_write(39);
      psg_write(188);
      return;
    case 2231:
      psg_write(175);
      psg_write(39);
      psg_write(192);
      psg_write(15);
      return;
    case 2232:
      psg_write(160);
      psg_write(40);
      psg_write(207);
      psg_write(14);
      psg_write(189);
      return;
    case 2233:
      psg_write(161);
      psg_write(40);
      psg_write(206);
      psg_write(14);
      return;
    case 2234:
      psg_write(172);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2235:
      psg_write(192);
      psg_write(15);
      psg_write(148);
      psg_write(246);
      return;
    case 2236:
      psg_write(207);
      psg_write(14);
      psg_write(250);
      return;
    case 2237:
      psg_write(206);
      psg_write(14);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 2238:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(150);
      return;
    case 2239:
      psg_write(174);
      psg_write(37);
      psg_write(192);
      psg_write(15);
      psg_write(182);
      return;
    case 2240:
      psg_write(173);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(151);
      return;
    case 2241:
      psg_write(143);
      psg_write(8);
      psg_write(172);
      psg_write(37);
      psg_write(194);
      psg_write(14);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 2242:
      psg_write(171);
      psg_write(37);
      psg_write(146);
      psg_write(244);
      return;
    case 2243:
      psg_write(170);
      psg_write(37);
      psg_write(184);
      psg_write(243);
      return;
    case 2244:
      psg_write(171);
      psg_write(37);
      psg_write(244);
      return;
    case 2245:
      psg_write(172);
      psg_write(37);
      psg_write(195);
      psg_write(14);
      psg_write(185);
      return;
    case 2246:
      psg_write(173);
      psg_write(37);
      psg_write(194);
      psg_write(14);
      psg_write(246);
      return;
    case 2247:
      psg_write(174);
      psg_write(37);
      psg_write(193);
      psg_write(14);
      psg_write(186);
      psg_write(247);
      return;
    case 2248:
      psg_write(173);
      psg_write(37);
      psg_write(194);
      psg_write(14);
      psg_write(147);
      psg_write(250);
      return;
    case 2249:
      psg_write(172);
      psg_write(37);
      psg_write(195);
      psg_write(14);
      psg_write(148);
      psg_write(187);
      psg_write(253);
      return;
    case 2250:
      psg_write(171);
      psg_write(37);
      psg_write(194);
      psg_write(14);
      psg_write(255);
      return;
    case 2251:
      psg_write(170);
      psg_write(37);
      psg_write(193);
      psg_write(14);
      psg_write(149);
      psg_write(188);
      return;
    case 2252:
      psg_write(171);
      psg_write(37);
      psg_write(194);
      psg_write(14);
      psg_write(150);
      return;
    case 2253:
      psg_write(172);
      psg_write(37);
      psg_write(195);
      psg_write(14);
      psg_write(189);
      return;
    case 2254:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2255:
      psg_write(146);
      psg_write(244);
      return;
    case 2256:
      psg_write(243);
      return;
    case 2257:
      psg_write(181);
      psg_write(244);
      return;
    case 2258:
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(8);
      return;
    case 2259:
      psg_write(172);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(182);
      psg_write(246);
      return;
    case 2260:
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(7);
      psg_write(247);
      return;
    case 2261:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(147);
      psg_write(183);
      psg_write(250);
      return;
    case 2262:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(192);
      psg_write(8);
      psg_write(253);
      return;
    case 2263:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(184);
      psg_write(255);
      return;
    case 2264:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(7);
      return;
    case 2265:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(185);
      return;
    case 2266:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(8);
      psg_write(148);
      return;
    case 2267:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(186);
      return;
    case 2268:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(7);
      psg_write(229);
      return;
    case 2269:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(187);
      psg_write(244);
      return;
    case 2270:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(192);
      psg_write(8);
      psg_write(215);
      psg_write(243);
      return;
    case 2271:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(149);
      psg_write(188);
      psg_write(244);
      return;
    case 2272:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(7);
      return;
    case 2273:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(7);
      psg_write(189);
      psg_write(246);
      return;
    case 2274:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(8);
      psg_write(247);
      return;
    case 2275:
      psg_write(143);
      psg_write(7);
      psg_write(164);
      psg_write(28);
      psg_write(192);
      psg_write(10);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2276:
      psg_write(146);
      psg_write(243);
      return;
    case 2277:
      psg_write(244);
      return;
    case 2278:
      psg_write(181);
      psg_write(245);
      return;
    case 2279:
      psg_write(165);
      psg_write(28);
      psg_write(193);
      psg_write(10);
      psg_write(247);
      return;
    case 2280:
      psg_write(166);
      psg_write(28);
      psg_write(192);
      psg_write(10);
      psg_write(182);
      psg_write(248);
      return;
    case 2281:
      psg_write(165);
      psg_write(28);
      psg_write(207);
      psg_write(9);
      psg_write(249);
      return;
    case 2282:
      psg_write(164);
      psg_write(28);
      psg_write(192);
      psg_write(10);
      psg_write(147);
      psg_write(183);
      psg_write(215);
      psg_write(255);
      return;
    case 2283:
      psg_write(163);
      psg_write(28);
      psg_write(148);
      return;
    case 2284:
      psg_write(162);
      psg_write(28);
      psg_write(184);
      psg_write(216);
      return;
    case 2285:
      psg_write(163);
      psg_write(28);
      psg_write(149);
      return;
    case 2286:
      psg_write(164);
      psg_write(28);
      psg_write(193);
      psg_write(10);
      psg_write(150);
      psg_write(185);
      psg_write(217);
      return;
    case 2287:
      psg_write(165);
      psg_write(28);
      psg_write(192);
      psg_write(10);
      psg_write(218);
      return;
    case 2288:
      psg_write(166);
      psg_write(28);
      psg_write(207);
      psg_write(9);
      psg_write(151);
      psg_write(186);
      return;
    case 2289:
      psg_write(129);
      psg_write(7);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2290:
      psg_write(146);
      psg_write(246);
      return;
    case 2291:
      psg_write(250);
      return;
    case 2292:
      psg_write(181);
      psg_write(255);
      return;
    case 2293:
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(9);
      return;
    case 2294:
      psg_write(172);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(182);
      return;
    case 2295:
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(8);
      return;
    case 2296:
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      psg_write(215);
      return;
    case 2297:
      psg_write(169);
      psg_write(35);
      psg_write(148);
      psg_write(244);
      return;
    case 2298:
      psg_write(168);
      psg_write(35);
      psg_write(184);
      psg_write(216);
      psg_write(243);
      return;
    case 2299:
      psg_write(169);
      psg_write(35);
      psg_write(149);
      psg_write(244);
      return;
    case 2300:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(9);
      psg_write(150);
      psg_write(185);
      psg_write(217);
      return;
    case 2301:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(218);
      psg_write(246);
      return;
    case 2302:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2303:
      psg_write(146);
      psg_write(244);
      return;
    case 2304:
      psg_write(243);
      return;
    case 2305:
      psg_write(181);
      psg_write(244);
      return;
    case 2306:
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      return;
    case 2307:
      psg_write(173);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(182);
      psg_write(246);
      return;
    case 2308:
      psg_write(172);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(247);
      return;
    case 2309:
      psg_write(128);
      psg_write(9);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 2310:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      return;
    case 2311:
      psg_write(142);
      psg_write(8);
      psg_write(169);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(184);
      return;
    case 2312:
      psg_write(141);
      psg_write(8);
      psg_write(170);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      return;
    case 2313:
      psg_write(142);
      psg_write(8);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(185);
      return;
    case 2314:
      psg_write(143);
      psg_write(8);
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(148);
      return;
    case 2315:
      psg_write(128);
      psg_write(9);
      psg_write(173);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(186);
      return;
    case 2316:
      psg_write(143);
      psg_write(8);
      psg_write(172);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(228);
      return;
    case 2317:
      psg_write(142);
      psg_write(8);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(187);
      psg_write(246);
      return;
    case 2318:
      psg_write(141);
      psg_write(8);
      psg_write(170);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(215);
      psg_write(250);
      return;
    case 2319:
      psg_write(142);
      psg_write(8);
      psg_write(169);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(149);
      psg_write(188);
      psg_write(255);
      return;
    case 2320:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      return;
    case 2321:
      psg_write(128);
      psg_write(9);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(189);
      return;
    case 2322:
      psg_write(143);
      psg_write(8);
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      return;
    case 2323:
      psg_write(142);
      psg_write(8);
      psg_write(171);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(228);
      psg_write(180);
      psg_write(214);
      return;
    case 2324:
      psg_write(141);
      psg_write(8);
      psg_write(246);
      return;
    case 2325:
      psg_write(142);
      psg_write(8);
      psg_write(150);
      psg_write(250);
      return;
    case 2326:
      psg_write(143);
      psg_write(8);
      psg_write(181);
      psg_write(255);
      return;
    case 2327:
      psg_write(128);
      psg_write(9);
      psg_write(172);
      psg_write(31);
      psg_write(197);
      psg_write(11);
      return;
    case 2328:
      psg_write(143);
      psg_write(8);
      psg_write(173);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(182);
      return;
    case 2329:
      psg_write(142);
      psg_write(8);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(11);
      return;
    case 2330:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(230);
      psg_write(151);
      psg_write(183);
      return;
    case 2331:
      psg_write(170);
      psg_write(31);
      psg_write(197);
      psg_write(11);
      psg_write(152);
      psg_write(243);
      return;
    case 2332:
      psg_write(169);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(184);
      psg_write(244);
      return;
    case 2333:
      psg_write(170);
      psg_write(31);
      psg_write(195);
      psg_write(11);
      psg_write(153);
      psg_write(245);
      return;
    case 2334:
      psg_write(171);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(154);
      psg_write(185);
      psg_write(247);
      return;
    case 2335:
      psg_write(172);
      psg_write(31);
      psg_write(197);
      psg_write(11);
      psg_write(248);
      return;
    case 2336:
      psg_write(173);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(155);
      psg_write(186);
      psg_write(249);
      return;
    case 2337:
      psg_write(128);
      psg_write(9);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(11);
      psg_write(255);
      return;
    case 2338:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(156);
      psg_write(187);
      return;
    case 2339:
      psg_write(142);
      psg_write(8);
      psg_write(170);
      psg_write(31);
      psg_write(197);
      psg_write(11);
      psg_write(157);
      psg_write(215);
      return;
    case 2340:
      psg_write(141);
      psg_write(8);
      psg_write(169);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(188);
      return;
    case 2341:
      psg_write(142);
      psg_write(8);
      psg_write(170);
      psg_write(31);
      psg_write(195);
      psg_write(11);
      psg_write(158);
      return;
    case 2342:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(31);
      psg_write(196);
      psg_write(11);
      psg_write(159);
      psg_write(189);
      return;
    case 2343:
      psg_write(128);
      psg_write(9);
      psg_write(172);
      psg_write(31);
      psg_write(197);
      psg_write(11);
      return;
    case 2344:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(228);
      psg_write(180);
      psg_write(214);
      return;
    case 2345:
      psg_write(142);
      psg_write(8);
      psg_write(246);
      return;
    case 2346:
      psg_write(141);
      psg_write(8);
      psg_write(250);
      return;
    case 2347:
      psg_write(142);
      psg_write(8);
      psg_write(181);
      psg_write(255);
      return;
    case 2348:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      return;
    case 2349:
      psg_write(128);
      psg_write(9);
      psg_write(172);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(182);
      return;
    case 2350:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(200);
      psg_write(10);
      psg_write(229);
      return;
    case 2351:
      psg_write(142);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(183);
      psg_write(244);
      return;
    case 2352:
      psg_write(141);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      psg_write(243);
      return;
    case 2353:
      psg_write(142);
      psg_write(8);
      psg_write(168);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(184);
      psg_write(244);
      return;
    case 2354:
      psg_write(143);
      psg_write(8);
      psg_write(169);
      psg_write(35);
      psg_write(200);
      psg_write(10);
      return;
    case 2355:
      psg_write(128);
      psg_write(9);
      psg_write(170);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(185);
      psg_write(246);
      return;
    case 2356:
      psg_write(143);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      psg_write(247);
      return;
    case 2357:
      psg_write(137);
      psg_write(10);
      psg_write(165);
      psg_write(42);
      psg_write(198);
      psg_write(13);
      psg_write(147);
      psg_write(180);
      psg_write(250);
      return;
    case 2358:
      psg_write(146);
      psg_write(253);
      return;
    case 2359:
      psg_write(255);
      return;
    case 2360:
      psg_write(181);
      return;
    case 2361:
      psg_write(166);
      psg_write(42);
      psg_write(199);
      psg_write(13);
      return;
    case 2362:
      psg_write(167);
      psg_write(42);
      psg_write(198);
      psg_write(13);
      psg_write(182);
      return;
    case 2363:
      psg_write(166);
      psg_write(42);
      psg_write(197);
      psg_write(13);
      return;
    case 2364:
      psg_write(128);
      psg_write(10);
      psg_write(160);
      psg_write(40);
      psg_write(206);
      psg_write(11);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2365:
      psg_write(146);
      psg_write(244);
      return;
    case 2366:
      psg_write(243);
      return;
    case 2367:
      psg_write(181);
      psg_write(244);
      return;
    case 2368:
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(11);
      return;
    case 2369:
      psg_write(162);
      psg_write(40);
      psg_write(206);
      psg_write(11);
      psg_write(182);
      psg_write(246);
      return;
    case 2370:
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(11);
      psg_write(247);
      return;
    case 2371:
      psg_write(135);
      psg_write(9);
      psg_write(172);
      psg_write(37);
      psg_write(196);
      psg_write(11);
      psg_write(147);
      psg_write(180);
      psg_write(250);
      return;
    case 2372:
      psg_write(146);
      psg_write(253);
      return;
    case 2373:
      psg_write(255);
      return;
    case 2374:
      psg_write(181);
      return;
    case 2375:
      psg_write(173);
      psg_write(37);
      psg_write(197);
      psg_write(11);
      return;
    case 2376:
      psg_write(174);
      psg_write(37);
      psg_write(196);
      psg_write(11);
      psg_write(182);
      return;
    case 2377:
      psg_write(173);
      psg_write(37);
      psg_write(195);
      psg_write(11);
      return;
    case 2378:
      psg_write(143);
      psg_write(8);
      psg_write(170);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2379:
      psg_write(146);
      psg_write(244);
      return;
    case 2380:
      psg_write(243);
      return;
    case 2381:
      psg_write(181);
      psg_write(244);
      return;
    case 2382:
      psg_write(171);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      return;
    case 2383:
      psg_write(172);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(182);
      psg_write(246);
      return;
    case 2384:
      psg_write(171);
      psg_write(35);
      psg_write(200);
      psg_write(10);
      psg_write(247);
      return;
    case 2385:
      psg_write(170);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(230);
      psg_write(147);
      return;
    case 2386:
      psg_write(202);
      psg_write(10);
      psg_write(148);
      psg_write(183);
      psg_write(243);
      return;
    case 2387:
      psg_write(201);
      psg_write(10);
      psg_write(244);
      return;
    case 2388:
      psg_write(200);
      psg_write(10);
      psg_write(149);
      psg_write(184);
      psg_write(245);
      return;
    case 2389:
      psg_write(171);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(150);
      psg_write(247);
      return;
    case 2390:
      psg_write(172);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      psg_write(248);
      return;
    case 2391:
      psg_write(171);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(151);
      psg_write(185);
      psg_write(249);
      return;
    case 2392:
      psg_write(136);
      psg_write(7);
      psg_write(171);
      psg_write(26);
      psg_write(147);
      psg_write(180);
      psg_write(255);
      return;
    case 2393:
      psg_write(146);
      return;
    case 2394:
      return;
    case 2395:
      psg_write(181);
      return;
    case 2396:
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      return;
    case 2397:
      psg_write(173);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(182);
      return;
    case 2398:
      psg_write(172);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(228);
      return;
    case 2399:
      psg_write(137);
      psg_write(7);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(147);
      psg_write(183);
      psg_write(246);
      return;
    case 2400:
      psg_write(136);
      psg_write(7);
      psg_write(170);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(250);
      return;
    case 2401:
      psg_write(135);
      psg_write(7);
      psg_write(169);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(184);
      psg_write(255);
      return;
    case 2402:
      psg_write(134);
      psg_write(7);
      psg_write(170);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      return;
    case 2403:
      psg_write(135);
      psg_write(7);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(185);
      return;
    case 2404:
      psg_write(136);
      psg_write(7);
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(148);
      return;
    case 2405:
      psg_write(137);
      psg_write(7);
      psg_write(173);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(229);
      psg_write(186);
      return;
    case 2406:
      psg_write(136);
      psg_write(7);
      psg_write(172);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(244);
      return;
    case 2407:
      psg_write(135);
      psg_write(7);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(187);
      psg_write(243);
      return;
    case 2408:
      psg_write(134);
      psg_write(7);
      psg_write(170);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(215);
      psg_write(244);
      return;
    case 2409:
      psg_write(135);
      psg_write(7);
      psg_write(169);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(149);
      psg_write(188);
      return;
    case 2410:
      psg_write(136);
      psg_write(7);
      psg_write(170);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(246);
      return;
    case 2411:
      psg_write(137);
      psg_write(7);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(189);
      psg_write(247);
      return;
    case 2412:
      psg_write(143);
      psg_write(7);
      psg_write(160);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2413:
      psg_write(146);
      psg_write(244);
      return;
    case 2414:
      psg_write(243);
      return;
    case 2415:
      psg_write(181);
      psg_write(244);
      return;
    case 2416:
      psg_write(161);
      psg_write(40);
      psg_write(193);
      psg_write(20);
      return;
    case 2417:
      psg_write(162);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(246);
      return;
    case 2418:
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(19);
      psg_write(247);
      return;
    case 2419:
      psg_write(135);
      psg_write(8);
      psg_write(160);
      psg_write(40);
      psg_write(195);
      psg_write(21);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 2420:
      psg_write(175);
      psg_write(39);
      psg_write(146);
      return;
    case 2421:
      psg_write(174);
      psg_write(39);
      psg_write(184);
      return;
    case 2422:
      psg_write(175);
      psg_write(39);
      return;
    case 2423:
      psg_write(160);
      psg_write(40);
      psg_write(196);
      psg_write(21);
      psg_write(185);
      return;
    case 2424:
      psg_write(161);
      psg_write(40);
      psg_write(195);
      psg_write(21);
      return;
    case 2425:
      psg_write(162);
      psg_write(40);
      psg_write(194);
      psg_write(21);
      psg_write(186);
      return;
    case 2426:
      psg_write(143);
      psg_write(7);
      psg_write(161);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      return;
    case 2427:
      psg_write(160);
      psg_write(40);
      psg_write(146);
      psg_write(187);
      psg_write(246);
      return;
    case 2428:
      psg_write(175);
      psg_write(39);
      psg_write(250);
      return;
    case 2429:
      psg_write(174);
      psg_write(39);
      psg_write(188);
      psg_write(255);
      return;
    case 2430:
      psg_write(175);
      psg_write(39);
      psg_write(193);
      psg_write(20);
      return;
    case 2431:
      psg_write(160);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(189);
      return;
    case 2432:
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(19);
      return;
    case 2433:
      psg_write(139);
      psg_write(6);
      psg_write(166);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2434:
      psg_write(146);
      psg_write(246);
      return;
    case 2435:
      psg_write(250);
      return;
    case 2436:
      psg_write(181);
      psg_write(255);
      return;
    case 2437:
      psg_write(167);
      psg_write(53);
      psg_write(207);
      psg_write(15);
      return;
    case 2438:
      psg_write(168);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(182);
      return;
    case 2439:
      psg_write(167);
      psg_write(53);
      psg_write(205);
      psg_write(15);
      return;
    case 2440:
      psg_write(166);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      psg_write(215);
      return;
    case 2441:
      psg_write(165);
      psg_write(53);
      psg_write(148);
      psg_write(243);
      return;
    case 2442:
      psg_write(164);
      psg_write(53);
      psg_write(184);
      psg_write(216);
      psg_write(244);
      return;
    case 2443:
      psg_write(165);
      psg_write(53);
      psg_write(149);
      psg_write(245);
      return;
    case 2444:
      psg_write(166);
      psg_write(53);
      psg_write(207);
      psg_write(15);
      psg_write(150);
      psg_write(185);
      psg_write(217);
      psg_write(247);
      return;
    case 2445:
      psg_write(167);
      psg_write(53);
      psg_write(206);
      psg_write(15);
      psg_write(218);
      psg_write(248);
      return;
    case 2446:
      psg_write(143);
      psg_write(7);
      psg_write(168);
      psg_write(53);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(186);
      psg_write(214);
      psg_write(255);
      return;
    case 2447:
      psg_write(167);
      psg_write(53);
      psg_write(146);
      return;
    case 2448:
      psg_write(166);
      psg_write(53);
      psg_write(187);
      return;
    case 2449:
      psg_write(165);
      psg_write(53);
      return;
    case 2450:
      psg_write(164);
      psg_write(53);
      psg_write(193);
      psg_write(20);
      psg_write(188);
      return;
    case 2451:
      psg_write(165);
      psg_write(53);
      psg_write(192);
      psg_write(20);
      return;
    case 2452:
      psg_write(166);
      psg_write(53);
      psg_write(207);
      psg_write(19);
      psg_write(189);
      return;
    case 2453:
      psg_write(139);
      psg_write(6);
      psg_write(160);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(215);
      return;
    case 2454:
      psg_write(146);
      psg_write(246);
      return;
    case 2455:
      psg_write(216);
      psg_write(250);
      return;
    case 2456:
      psg_write(181);
      psg_write(255);
      return;
    case 2457:
      psg_write(161);
      psg_write(40);
      psg_write(193);
      psg_write(20);
      psg_write(217);
      return;
    case 2458:
      psg_write(162);
      psg_write(40);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(218);
      return;
    case 2459:
      psg_write(161);
      psg_write(40);
      psg_write(207);
      psg_write(19);
      return;
    case 2460:
      psg_write(143);
      psg_write(5);
      psg_write(160);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      return;
    case 2461:
      psg_write(175);
      psg_write(39);
      psg_write(146);
      psg_write(244);
      return;
    case 2462:
      psg_write(174);
      psg_write(39);
      psg_write(184);
      psg_write(243);
      return;
    case 2463:
      psg_write(175);
      psg_write(39);
      psg_write(244);
      return;
    case 2464:
      psg_write(160);
      psg_write(40);
      psg_write(206);
      psg_write(17);
      psg_write(185);
      return;
    case 2465:
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(246);
      return;
    case 2466:
      psg_write(162);
      psg_write(40);
      psg_write(204);
      psg_write(17);
      psg_write(186);
      psg_write(247);
      return;
    case 2467:
      psg_write(138);
      psg_write(5);
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(16);
      psg_write(147);
      psg_write(250);
      return;
    case 2468:
      psg_write(160);
      psg_write(40);
      psg_write(146);
      psg_write(187);
      psg_write(253);
      return;
    case 2469:
      psg_write(175);
      psg_write(39);
      psg_write(255);
      return;
    case 2470:
      psg_write(174);
      psg_write(39);
      psg_write(188);
      return;
    case 2471:
      psg_write(175);
      psg_write(39);
      psg_write(206);
      psg_write(16);
      return;
    case 2472:
      psg_write(160);
      psg_write(40);
      psg_write(205);
      psg_write(16);
      psg_write(189);
      return;
    case 2473:
      psg_write(161);
      psg_write(40);
      psg_write(204);
      psg_write(16);
      return;
    case 2474:
      psg_write(143);
      psg_write(5);
      psg_write(170);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2475:
      psg_write(206);
      psg_write(16);
      psg_write(146);
      psg_write(244);
      return;
    case 2476:
      psg_write(205);
      psg_write(16);
      psg_write(243);
      return;
    case 2477:
      psg_write(204);
      psg_write(16);
      psg_write(181);
      psg_write(244);
      return;
    case 2478:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2479:
      psg_write(172);
      psg_write(33);
      psg_write(206);
      psg_write(16);
      psg_write(182);
      psg_write(246);
      return;
    case 2480:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(247);
      return;
    case 2481:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(33);
      psg_write(204);
      psg_write(16);
      psg_write(147);
      psg_write(183);
      psg_write(250);
      return;
    case 2482:
      psg_write(169);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(146);
      psg_write(253);
      return;
    case 2483:
      psg_write(168);
      psg_write(33);
      psg_write(206);
      psg_write(16);
      psg_write(184);
      psg_write(215);
      psg_write(255);
      return;
    case 2484:
      psg_write(169);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2485:
      psg_write(170);
      psg_write(33);
      psg_write(204);
      psg_write(16);
      psg_write(185);
      return;
    case 2486:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2487:
      psg_write(172);
      psg_write(33);
      psg_write(206);
      psg_write(16);
      psg_write(186);
      return;
    case 2488:
      psg_write(143);
      psg_write(7);
      psg_write(170);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2489:
      psg_write(204);
      psg_write(16);
      psg_write(146);
      psg_write(244);
      return;
    case 2490:
      psg_write(205);
      psg_write(16);
      psg_write(243);
      return;
    case 2491:
      psg_write(206);
      psg_write(16);
      psg_write(181);
      psg_write(244);
      return;
    case 2492:
      psg_write(171);
      psg_write(33);
      psg_write(205);
      psg_write(16);
      return;
    case 2493:
      psg_write(172);
      psg_write(33);
      psg_write(204);
      psg_write(16);
      psg_write(182);
      psg_write(246);
      return;
    case 2494:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2495:
      psg_write(146);
      psg_write(243);
      return;
    case 2496:
      psg_write(244);
      return;
    case 2497:
      psg_write(181);
      psg_write(245);
      return;
    case 2498:
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      psg_write(247);
      return;
    case 2499:
      psg_write(171);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(248);
      return;
    case 2500:
      psg_write(170);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      psg_write(249);
      return;
    case 2501:
      psg_write(140);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 2502:
      psg_write(139);
      psg_write(6);
      psg_write(168);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      return;
    case 2503:
      psg_write(138);
      psg_write(6);
      psg_write(167);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      return;
    case 2504:
      psg_write(137);
      psg_write(6);
      psg_write(168);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      return;
    case 2505:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 2506:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      psg_write(148);
      return;
    case 2507:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(186);
      return;
    case 2508:
      psg_write(135);
      psg_write(8);
      psg_write(170);
      psg_write(33);
      psg_write(207);
      psg_write(19);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2509:
      psg_write(192);
      psg_write(20);
      psg_write(146);
      psg_write(246);
      return;
    case 2510:
      psg_write(193);
      psg_write(20);
      psg_write(215);
      psg_write(250);
      return;
    case 2511:
      psg_write(192);
      psg_write(20);
      psg_write(181);
      psg_write(255);
      return;
    case 2512:
      psg_write(171);
      psg_write(33);
      psg_write(207);
      psg_write(19);
      return;
    case 2513:
      psg_write(172);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      return;
    case 2514:
      psg_write(171);
      psg_write(33);
      psg_write(193);
      psg_write(20);
      return;
    case 2515:
      psg_write(136);
      psg_write(8);
      psg_write(170);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 2516:
      psg_write(135);
      psg_write(8);
      psg_write(169);
      psg_write(33);
      psg_write(207);
      psg_write(19);
      psg_write(244);
      return;
    case 2517:
      psg_write(134);
      psg_write(8);
      psg_write(168);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(184);
      psg_write(243);
      return;
    case 2518:
      psg_write(133);
      psg_write(8);
      psg_write(169);
      psg_write(33);
      psg_write(193);
      psg_write(20);
      psg_write(244);
      return;
    case 2519:
      psg_write(134);
      psg_write(8);
      psg_write(170);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(185);
      return;
    case 2520:
      psg_write(135);
      psg_write(8);
      psg_write(171);
      psg_write(33);
      psg_write(207);
      psg_write(19);
      psg_write(148);
      psg_write(246);
      return;
    case 2521:
      psg_write(136);
      psg_write(8);
      psg_write(172);
      psg_write(33);
      psg_write(192);
      psg_write(20);
      psg_write(186);
      psg_write(247);
      return;
    case 2522:
      psg_write(143);
      psg_write(7);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2523:
      psg_write(146);
      psg_write(244);
      return;
    case 2524:
      psg_write(243);
      return;
    case 2525:
      psg_write(181);
      psg_write(244);
      return;
    case 2526:
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 2527:
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 2528:
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 2529:
      psg_write(128);
      psg_write(8);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(147);
      psg_write(183);
      psg_write(255);
      return;
    case 2530:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      return;
    case 2531:
      psg_write(142);
      psg_write(7);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      return;
    case 2532:
      psg_write(141);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 2533:
      psg_write(142);
      psg_write(7);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 2534:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(148);
      return;
    case 2535:
      psg_write(128);
      psg_write(8);
      psg_write(168);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(186);
      return;
    case 2536:
      psg_write(143);
      psg_write(7);
      psg_write(167);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      psg_write(228);
      return;
    case 2537:
      psg_write(142);
      psg_write(7);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(187);
      psg_write(246);
      return;
    case 2538:
      psg_write(141);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(196);
      psg_write(21);
      psg_write(215);
      psg_write(250);
      return;
    case 2539:
      psg_write(142);
      psg_write(7);
      psg_write(164);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(149);
      psg_write(188);
      psg_write(255);
      return;
    case 2540:
      psg_write(143);
      psg_write(7);
      psg_write(165);
      psg_write(53);
      psg_write(194);
      psg_write(21);
      return;
    case 2541:
      psg_write(128);
      psg_write(8);
      psg_write(166);
      psg_write(53);
      psg_write(195);
      psg_write(21);
      psg_write(189);
      return;
    case 2542:
      psg_write(143);
      psg_write(8);
      psg_write(165);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2543:
      psg_write(195);
      psg_write(21);
      psg_write(146);
      psg_write(246);
      return;
    case 2544:
      psg_write(194);
      psg_write(21);
      psg_write(250);
      return;
    case 2545:
      psg_write(195);
      psg_write(21);
      psg_write(181);
      psg_write(255);
      return;
    case 2546:
      psg_write(166);
      psg_write(42);
      psg_write(196);
      psg_write(21);
      return;
    case 2547:
      psg_write(167);
      psg_write(42);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      return;
    case 2548:
      psg_write(166);
      psg_write(42);
      psg_write(194);
      psg_write(21);
      return;
    case 2549:
      psg_write(165);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      psg_write(214);
      return;
    case 2550:
      psg_write(164);
      psg_write(42);
      psg_write(148);
      psg_write(243);
      return;
    case 2551:
      psg_write(163);
      psg_write(42);
      psg_write(184);
      psg_write(244);
      return;
    case 2552:
      psg_write(164);
      psg_write(42);
      psg_write(149);
      psg_write(245);
      return;
    case 2553:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(23);
      psg_write(150);
      psg_write(185);
      psg_write(247);
      return;
    case 2554:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(248);
      return;
    case 2555:
      psg_write(167);
      psg_write(42);
      psg_write(204);
      psg_write(23);
      psg_write(151);
      psg_write(186);
      psg_write(249);
      return;
    case 2556:
      psg_write(143);
      psg_write(7);
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      psg_write(147);
      psg_write(255);
      return;
    case 2557:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(23);
      psg_write(146);
      psg_write(187);
      return;
    case 2558:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      return;
    case 2559:
      psg_write(163);
      psg_write(42);
      psg_write(204);
      psg_write(23);
      psg_write(188);
      return;
    case 2560:
      psg_write(164);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      return;
    case 2561:
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(23);
      psg_write(189);
      return;
    case 2562:
      psg_write(166);
      psg_write(42);
      psg_write(205);
      psg_write(23);
      return;
    case 2563:
      psg_write(170);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2564:
      psg_write(205);
      psg_write(23);
      psg_write(148);
      psg_write(246);
      return;
    case 2565:
      psg_write(206);
      psg_write(23);
      psg_write(215);
      psg_write(250);
      return;
    case 2566:
      psg_write(205);
      psg_write(23);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 2567:
      psg_write(171);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(150);
      return;
    case 2568:
      psg_write(172);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(182);
      return;
    case 2569:
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(23);
      psg_write(151);
      return;
    case 2570:
      psg_write(137);
      psg_write(10);
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 2571:
      psg_write(169);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(146);
      psg_write(244);
      return;
    case 2572:
      psg_write(168);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(184);
      psg_write(243);
      return;
    case 2573:
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(23);
      psg_write(244);
      return;
    case 2574:
      psg_write(170);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(147);
      psg_write(185);
      return;
    case 2575:
      psg_write(171);
      psg_write(35);
      psg_write(204);
      psg_write(23);
      psg_write(148);
      psg_write(246);
      return;
    case 2576:
      psg_write(172);
      psg_write(35);
      psg_write(205);
      psg_write(23);
      psg_write(186);
      psg_write(247);
      return;
    case 2577:
      psg_write(171);
      psg_write(35);
      psg_write(195);
      psg_write(25);
      psg_write(147);
      psg_write(214);
      psg_write(250);
      return;
    case 2578:
      psg_write(170);
      psg_write(35);
      psg_write(146);
      psg_write(187);
      psg_write(253);
      return;
    case 2579:
      psg_write(169);
      psg_write(35);
      psg_write(255);
      return;
    case 2580:
      psg_write(168);
      psg_write(35);
      psg_write(188);
      return;
    case 2581:
      psg_write(169);
      psg_write(35);
      psg_write(196);
      psg_write(25);
      return;
    case 2582:
      psg_write(170);
      psg_write(35);
      psg_write(195);
      psg_write(25);
      psg_write(189);
      return;
    case 2583:
      psg_write(171);
      psg_write(35);
      psg_write(194);
      psg_write(25);
      return;
    case 2584:
      psg_write(132);
      psg_write(11);
      psg_write(171);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2585:
      psg_write(196);
      psg_write(25);
      psg_write(146);
      psg_write(244);
      return;
    case 2586:
      psg_write(195);
      psg_write(25);
      psg_write(243);
      return;
    case 2587:
      psg_write(194);
      psg_write(25);
      psg_write(181);
      psg_write(244);
      return;
    case 2588:
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      return;
    case 2589:
      psg_write(173);
      psg_write(31);
      psg_write(196);
      psg_write(25);
      psg_write(182);
      psg_write(246);
      return;
    case 2590:
      psg_write(142);
      psg_write(11);
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      psg_write(147);
      psg_write(247);
      return;
    case 2591:
      psg_write(171);
      psg_write(31);
      psg_write(194);
      psg_write(25);
      psg_write(146);
      psg_write(183);
      psg_write(250);
      return;
    case 2592:
      psg_write(170);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      psg_write(253);
      return;
    case 2593:
      psg_write(169);
      psg_write(31);
      psg_write(196);
      psg_write(25);
      psg_write(184);
      psg_write(215);
      psg_write(255);
      return;
    case 2594:
      psg_write(170);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      return;
    case 2595:
      psg_write(171);
      psg_write(31);
      psg_write(194);
      psg_write(25);
      psg_write(185);
      return;
    case 2596:
      psg_write(172);
      psg_write(31);
      psg_write(195);
      psg_write(25);
      return;
    case 2597:
      psg_write(137);
      psg_write(12);
      psg_write(173);
      psg_write(31);
      psg_write(207);
      psg_write(29);
      psg_write(229);
      psg_write(147);
      psg_write(186);
      psg_write(214);
      return;
    case 2598:
      psg_write(172);
      psg_write(31);
      psg_write(146);
      psg_write(244);
      return;
    case 2599:
      psg_write(171);
      psg_write(31);
      psg_write(187);
      psg_write(243);
      return;
    case 2600:
      psg_write(170);
      psg_write(31);
      psg_write(244);
      return;
    case 2601:
      psg_write(169);
      psg_write(31);
      psg_write(192);
      psg_write(30);
      psg_write(188);
      return;
    case 2602:
      psg_write(170);
      psg_write(31);
      psg_write(207);
      psg_write(29);
      psg_write(246);
      return;
    case 2603:
      psg_write(171);
      psg_write(31);
      psg_write(206);
      psg_write(29);
      psg_write(189);
      psg_write(247);
      return;
    case 2604:
      psg_write(138);
      psg_write(12);
      psg_write(165);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      return;
    case 2605:
      psg_write(137);
      psg_write(12);
      psg_write(192);
      psg_write(30);
      psg_write(243);
      return;
    case 2606:
      psg_write(136);
      psg_write(12);
      psg_write(207);
      psg_write(29);
      psg_write(244);
      return;
    case 2607:
      psg_write(135);
      psg_write(12);
      psg_write(206);
      psg_write(29);
      psg_write(181);
      psg_write(245);
      return;
    case 2608:
      psg_write(136);
      psg_write(12);
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(247);
      return;
    case 2609:
      psg_write(137);
      psg_write(12);
      psg_write(167);
      psg_write(42);
      psg_write(192);
      psg_write(30);
      psg_write(148);
      psg_write(182);
      psg_write(248);
      return;
    case 2610:
      psg_write(138);
      psg_write(12);
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(249);
      return;
    case 2611:
      psg_write(137);
      psg_write(12);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(29);
      psg_write(183);
      psg_write(255);
      return;
    case 2612:
      psg_write(136);
      psg_write(12);
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      return;
    case 2613:
      psg_write(135);
      psg_write(12);
      psg_write(163);
      psg_write(42);
      psg_write(192);
      psg_write(30);
      psg_write(184);
      psg_write(215);
      return;
    case 2614:
      psg_write(136);
      psg_write(12);
      psg_write(164);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      psg_write(149);
      return;
    case 2615:
      psg_write(137);
      psg_write(12);
      psg_write(165);
      psg_write(42);
      psg_write(206);
      psg_write(29);
      psg_write(185);
      return;
    case 2616:
      psg_write(138);
      psg_write(12);
      psg_write(166);
      psg_write(42);
      psg_write(207);
      psg_write(29);
      return;
    case 2617:
      psg_write(137);
      psg_write(12);
      psg_write(167);
      psg_write(42);
      psg_write(192);
      psg_write(30);
      psg_write(186);
      return;
    case 2618:
      psg_write(136);
      psg_write(12);
      psg_write(166);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(228);
      psg_write(180);
      psg_write(214);
      return;
    case 2619:
      psg_write(135);
      psg_write(12);
      psg_write(246);
      return;
    case 2620:
      psg_write(136);
      psg_write(12);
      psg_write(150);
      psg_write(250);
      return;
    case 2621:
      psg_write(137);
      psg_write(12);
      psg_write(181);
      psg_write(255);
      return;
    case 2622:
      psg_write(138);
      psg_write(12);
      psg_write(167);
      psg_write(50);
      psg_write(204);
      psg_write(31);
      return;
    case 2623:
      psg_write(137);
      psg_write(12);
      psg_write(168);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(182);
      return;
    case 2624:
      psg_write(136);
      psg_write(12);
      psg_write(167);
      psg_write(50);
      psg_write(202);
      psg_write(31);
      return;
    case 2625:
      psg_write(135);
      psg_write(12);
      psg_write(166);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(229);
      psg_write(151);
      psg_write(183);
      return;
    case 2626:
      psg_write(136);
      psg_write(12);
      psg_write(165);
      psg_write(50);
      psg_write(204);
      psg_write(31);
      psg_write(244);
      return;
    case 2627:
      psg_write(137);
      psg_write(12);
      psg_write(164);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(184);
      psg_write(243);
      return;
    case 2628:
      psg_write(138);
      psg_write(12);
      psg_write(165);
      psg_write(50);
      psg_write(202);
      psg_write(31);
      psg_write(244);
      return;
    case 2629:
      psg_write(137);
      psg_write(12);
      psg_write(166);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(185);
      return;
    case 2630:
      psg_write(136);
      psg_write(12);
      psg_write(167);
      psg_write(50);
      psg_write(204);
      psg_write(31);
      psg_write(152);
      psg_write(246);
      return;
    case 2631:
      psg_write(135);
      psg_write(12);
      psg_write(168);
      psg_write(50);
      psg_write(203);
      psg_write(31);
      psg_write(186);
      psg_write(247);
      return;
    case 2632:
      psg_write(142);
      psg_write(11);
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      return;
    case 2633:
      psg_write(146);
      psg_write(244);
      return;
    case 2634:
      psg_write(243);
      return;
    case 2635:
      psg_write(181);
      psg_write(244);
      return;
    case 2636:
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      return;
    case 2637:
      psg_write(171);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(182);
      psg_write(246);
      return;
    case 2638:
      psg_write(170);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      psg_write(147);
      psg_write(255);
      return;
    case 2639:
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(148);
      psg_write(183);
      return;
    case 2640:
      psg_write(168);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      return;
    case 2641:
      psg_write(167);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(149);
      psg_write(184);
      return;
    case 2642:
      psg_write(168);
      psg_write(47);
      psg_write(207);
      psg_write(19);
      return;
    case 2643:
      psg_write(169);
      psg_write(47);
      psg_write(192);
      psg_write(20);
      psg_write(150);
      psg_write(185);
      return;
    case 2644:
      psg_write(170);
      psg_write(47);
      psg_write(193);
      psg_write(20);
      psg_write(151);
      return;
    case 2645:
      psg_write(137);
      psg_write(10);
      psg_write(171);
      psg_write(47);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(186);
      return;
    case 2646:
      psg_write(170);
      psg_write(47);
      psg_write(146);
      psg_write(246);
      return;
    case 2647:
      psg_write(169);
      psg_write(47);
      psg_write(187);
      psg_write(250);
      return;
    case 2648:
      psg_write(168);
      psg_write(47);
      psg_write(255);
      return;
    case 2649:
      psg_write(167);
      psg_write(47);
      psg_write(206);
      psg_write(17);
      psg_write(188);
      return;
    case 2650:
      psg_write(168);
      psg_write(47);
      psg_write(205);
      psg_write(17);
      return;
    case 2651:
      psg_write(169);
      psg_write(47);
      psg_write(204);
      psg_write(17);
      psg_write(189);
      return;
    case 2652:
      psg_write(160);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2653:
      psg_write(206);
      psg_write(17);
      psg_write(148);
      psg_write(246);
      return;
    case 2654:
      psg_write(205);
      psg_write(17);
      psg_write(250);
      return;
    case 2655:
      psg_write(204);
      psg_write(17);
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 2656:
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(150);
      return;
    case 2657:
      psg_write(162);
      psg_write(40);
      psg_write(206);
      psg_write(17);
      psg_write(182);
      return;
    case 2658:
      psg_write(161);
      psg_write(40);
      psg_write(205);
      psg_write(17);
      psg_write(151);
      return;
    case 2659:
      psg_write(143);
      psg_write(8);
      psg_write(160);
      psg_write(40);
      psg_write(206);
      psg_write(15);
      psg_write(230);
      psg_write(147);
      psg_write(183);
      return;
    case 2660:
      psg_write(175);
      psg_write(39);
      psg_write(146);
      psg_write(243);
      return;
    case 2661:
      psg_write(174);
      psg_write(39);
      psg_write(184);
      psg_write(244);
      return;
    case 2662:
      psg_write(175);
      psg_write(39);
      psg_write(245);
      return;
    case 2663:
      psg_write(160);
      psg_write(40);
      psg_write(207);
      psg_write(15);
      psg_write(185);
      psg_write(247);
      return;
    case 2664:
      psg_write(161);
      psg_write(40);
      psg_write(206);
      psg_write(15);
      psg_write(248);
      return;
    case 2665:
      psg_write(162);
      psg_write(40);
      psg_write(205);
      psg_write(15);
      psg_write(186);
      psg_write(249);
      return;
    case 2666:
      psg_write(143);
      psg_write(7);
      psg_write(161);
      psg_write(40);
      psg_write(206);
      psg_write(15);
      psg_write(147);
      psg_write(255);
      return;
    case 2667:
      psg_write(160);
      psg_write(40);
      psg_write(207);
      psg_write(15);
      psg_write(146);
      psg_write(187);
      return;
    case 2668:
      psg_write(175);
      psg_write(39);
      psg_write(206);
      psg_write(15);
      return;
    case 2669:
      psg_write(174);
      psg_write(39);
      psg_write(205);
      psg_write(15);
      psg_write(188);
      return;
    case 2670:
      psg_write(175);
      psg_write(39);
      psg_write(206);
      psg_write(15);
      return;
    case 2671:
      psg_write(160);
      psg_write(40);
      psg_write(207);
      psg_write(15);
      psg_write(189);
      return;
    case 2672:
      psg_write(161);
      psg_write(40);
      psg_write(206);
      psg_write(15);
      return;
    case 2673:
      psg_write(172);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      return;
    case 2674:
      psg_write(148);
      psg_write(246);
      return;
    case 2675:
      psg_write(250);
      return;
    case 2676:
      psg_write(149);
      psg_write(181);
      psg_write(255);
      return;
    case 2677:
      psg_write(173);
      psg_write(37);
      psg_write(192);
      psg_write(15);
      psg_write(150);
      return;
    case 2678:
      psg_write(174);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(182);
      return;
    case 2679:
      psg_write(173);
      psg_write(37);
      psg_write(206);
      psg_write(14);
      psg_write(151);
      return;
    case 2680:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(229);
      psg_write(147);
      psg_write(183);
      return;
    case 2681:
      psg_write(171);
      psg_write(37);
      psg_write(192);
      psg_write(15);
      psg_write(146);
      psg_write(244);
      return;
    case 2682:
      psg_write(170);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(184);
      psg_write(243);
      return;
    case 2683:
      psg_write(171);
      psg_write(37);
      psg_write(206);
      psg_write(14);
      psg_write(244);
      return;
    case 2684:
      psg_write(172);
      psg_write(37);
      psg_write(207);
      psg_write(14);
      psg_write(185);
      return;
    case 2685:
      psg_write(173);
      psg_write(37);
      psg_write(192);
      psg_write(15);
      psg_write(246);
      return;
    case 2686:
      psg_write(174);
      psg_write(37);
      psg_write(194);
      psg_write(14);
      psg_write(186);
      psg_write(247);
      return;
    case 2687:
      psg_write(140);
      psg_write(6);
      psg_write(173);
      psg_write(37);
      psg_write(147);
      psg_write(250);
      return;
    case 2688:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(37);
      psg_write(187);
      psg_write(253);
      return;
    case 2689:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(37);
      psg_write(255);
      return;
    case 2690:
      psg_write(137);
      psg_write(6);
      psg_write(170);
      psg_write(37);
      psg_write(195);
      psg_write(14);
      psg_write(188);
      return;
    case 2691:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(37);
      psg_write(194);
      psg_write(14);
      return;
    case 2692:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(37);
      psg_write(193);
      psg_write(14);
      psg_write(148);
      psg_write(189);
      return;
    case 2693:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(229);
      psg_write(180);
      return;
    case 2694:
      psg_write(139);
      psg_write(6);
      psg_write(244);
      return;
    case 2695:
      psg_write(138);
      psg_write(6);
      psg_write(243);
      return;
    case 2696:
      psg_write(137);
      psg_write(6);
      psg_write(181);
      psg_write(244);
      return;
    case 2697:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(9);
      psg_write(149);
      return;
    case 2698:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(182);
      psg_write(246);
      return;
    case 2699:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(8);
      psg_write(247);
      return;
    case 2700:
      psg_write(143);
      psg_write(7);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(147);
      psg_write(183);
      psg_write(250);
      return;
    case 2701:
      psg_write(169);
      psg_write(35);
      psg_write(192);
      psg_write(9);
      psg_write(146);
      psg_write(253);
      return;
    case 2702:
      psg_write(168);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(184);
      psg_write(255);
      return;
    case 2703:
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(8);
      return;
    case 2704:
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(185);
      return;
    case 2705:
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(9);
      return;
    case 2706:
      psg_write(172);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(186);
      return;
    case 2707:
      psg_write(128);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(206);
      psg_write(8);
      psg_write(229);
      psg_write(147);
      return;
    case 2708:
      psg_write(143);
      psg_write(7);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(187);
      psg_write(244);
      return;
    case 2709:
      psg_write(142);
      psg_write(7);
      psg_write(169);
      psg_write(35);
      psg_write(192);
      psg_write(9);
      psg_write(215);
      psg_write(243);
      return;
    case 2710:
      psg_write(141);
      psg_write(7);
      psg_write(168);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(188);
      psg_write(244);
      return;
    case 2711:
      psg_write(142);
      psg_write(7);
      psg_write(169);
      psg_write(35);
      psg_write(206);
      psg_write(8);
      return;
    case 2712:
      psg_write(143);
      psg_write(7);
      psg_write(170);
      psg_write(35);
      psg_write(207);
      psg_write(8);
      psg_write(148);
      psg_write(189);
      psg_write(246);
      return;
    case 2713:
      psg_write(128);
      psg_write(8);
      psg_write(171);
      psg_write(35);
      psg_write(192);
      psg_write(9);
      psg_write(247);
      return;
    case 2714:
      psg_write(133);
      psg_write(5);
      psg_write(164);
      psg_write(28);
      psg_write(199);
      psg_write(9);
      psg_write(230);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2715:
      psg_write(146);
      psg_write(243);
      return;
    case 2716:
      psg_write(244);
      return;
    case 2717:
      psg_write(181);
      psg_write(245);
      return;
    case 2718:
      psg_write(165);
      psg_write(28);
      psg_write(200);
      psg_write(9);
      psg_write(247);
      return;
    case 2719:
      psg_write(166);
      psg_write(28);
      psg_write(199);
      psg_write(9);
      psg_write(182);
      psg_write(248);
      return;
    case 2720:
      psg_write(165);
      psg_write(28);
      psg_write(198);
      psg_write(9);
      psg_write(249);
      return;
    case 2721:
      psg_write(164);
      psg_write(28);
      psg_write(199);
      psg_write(9);
      psg_write(147);
      psg_write(183);
      psg_write(215);
      psg_write(255);
      return;
    case 2722:
      psg_write(163);
      psg_write(28);
      psg_write(148);
      return;
    case 2723:
      psg_write(162);
      psg_write(28);
      psg_write(184);
      psg_write(216);
      return;
    case 2724:
      psg_write(163);
      psg_write(28);
      psg_write(149);
      return;
    case 2725:
      psg_write(164);
      psg_write(28);
      psg_write(200);
      psg_write(9);
      psg_write(150);
      psg_write(185);
      psg_write(217);
      return;
    case 2726:
      psg_write(165);
      psg_write(28);
      psg_write(199);
      psg_write(9);
      psg_write(218);
      return;
    case 2727:
      psg_write(166);
      psg_write(28);
      psg_write(198);
      psg_write(9);
      psg_write(151);
      psg_write(186);
      return;
    case 2728:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(10);
      psg_write(228);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2729:
      psg_write(146);
      psg_write(246);
      return;
    case 2730:
      psg_write(250);
      return;
    case 2731:
      psg_write(181);
      psg_write(255);
      return;
    case 2732:
      psg_write(171);
      psg_write(35);
      psg_write(193);
      psg_write(10);
      return;
    case 2733:
      psg_write(172);
      psg_write(35);
      psg_write(192);
      psg_write(10);
      psg_write(182);
      return;
    case 2734:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(229);
      psg_write(147);
      return;
    case 2735:
      psg_write(170);
      psg_write(35);
      psg_write(146);
      psg_write(183);
      psg_write(215);
      psg_write(244);
      return;
    case 2736:
      psg_write(169);
      psg_write(35);
      psg_write(216);
      psg_write(243);
      return;
    case 2737:
      psg_write(168);
      psg_write(35);
      psg_write(184);
      psg_write(244);
      return;
    case 2738:
      psg_write(169);
      psg_write(35);
      psg_write(193);
      psg_write(10);
      psg_write(217);
      return;
    case 2739:
      psg_write(170);
      psg_write(35);
      psg_write(192);
      psg_write(10);
      psg_write(185);
      psg_write(218);
      psg_write(246);
      return;
    case 2740:
      psg_write(171);
      psg_write(35);
      psg_write(207);
      psg_write(9);
      psg_write(247);
      return;
    case 2741:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(229);
      psg_write(147);
      psg_write(180);
      psg_write(214);
      return;
    case 2742:
      psg_write(139);
      psg_write(6);
      psg_write(244);
      return;
    case 2743:
      psg_write(138);
      psg_write(6);
      psg_write(243);
      return;
    case 2744:
      psg_write(137);
      psg_write(6);
      psg_write(181);
      psg_write(244);
      return;
    case 2745:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      return;
    case 2746:
      psg_write(139);
      psg_write(6);
      psg_write(173);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(148);
      psg_write(182);
      psg_write(246);
      return;
    case 2747:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(247);
      return;
    case 2748:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(229);
      psg_write(183);
      return;
    case 2749:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(244);
      return;
    case 2750:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(184);
      psg_write(243);
      return;
    case 2751:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(149);
      psg_write(244);
      return;
    case 2752:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(185);
      return;
    case 2753:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(246);
      return;
    case 2754:
      psg_write(139);
      psg_write(6);
      psg_write(173);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(186);
      psg_write(247);
      return;
    case 2755:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      psg_write(229);
      return;
    case 2756:
      psg_write(137);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(187);
      psg_write(244);
      return;
    case 2757:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(150);
      psg_write(215);
      psg_write(243);
      return;
    case 2758:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(188);
      psg_write(244);
      return;
    case 2759:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(26);
      psg_write(200);
      psg_write(10);
      return;
    case 2760:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(26);
      psg_write(201);
      psg_write(10);
      psg_write(189);
      psg_write(246);
      return;
    case 2761:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(26);
      psg_write(202);
      psg_write(10);
      psg_write(247);
      return;
    case 2762:
      psg_write(137);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      psg_write(229);
      psg_write(151);
      psg_write(180);
      return;
    case 2763:
      psg_write(138);
      psg_write(6);
      psg_write(200);
      psg_write(10);
      psg_write(244);
      return;
    case 2764:
      psg_write(139);
      psg_write(6);
      psg_write(201);
      psg_write(10);
      psg_write(243);
      return;
    case 2765:
      psg_write(140);
      psg_write(6);
      psg_write(202);
      psg_write(10);
      psg_write(181);
      psg_write(244);
      return;
    case 2766:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      return;
    case 2767:
      psg_write(138);
      psg_write(6);
      psg_write(173);
      psg_write(31);
      psg_write(200);
      psg_write(10);
      psg_write(152);
      psg_write(182);
      psg_write(246);
      return;
    case 2768:
      psg_write(137);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      psg_write(247);
      return;
    case 2769:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(202);
      psg_write(10);
      psg_write(228);
      psg_write(183);
      return;
    case 2770:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      psg_write(246);
      return;
    case 2771:
      psg_write(140);
      psg_write(6);
      psg_write(169);
      psg_write(31);
      psg_write(200);
      psg_write(10);
      psg_write(184);
      psg_write(250);
      return;
    case 2772:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      psg_write(255);
      return;
    case 2773:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(202);
      psg_write(10);
      psg_write(153);
      psg_write(185);
      psg_write(216);
      return;
    case 2774:
      psg_write(137);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      return;
    case 2775:
      psg_write(138);
      psg_write(6);
      psg_write(173);
      psg_write(31);
      psg_write(200);
      psg_write(10);
      psg_write(154);
      psg_write(186);
      return;
    case 2776:
      psg_write(139);
      psg_write(6);
      psg_write(172);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      psg_write(230);
      return;
    case 2777:
      psg_write(140);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(202);
      psg_write(10);
      psg_write(155);
      psg_write(187);
      psg_write(243);
      return;
    case 2778:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      psg_write(244);
      return;
    case 2779:
      psg_write(138);
      psg_write(6);
      psg_write(169);
      psg_write(31);
      psg_write(200);
      psg_write(10);
      psg_write(156);
      psg_write(188);
      psg_write(245);
      return;
    case 2780:
      psg_write(137);
      psg_write(6);
      psg_write(170);
      psg_write(31);
      psg_write(201);
      psg_write(10);
      psg_write(157);
      psg_write(247);
      return;
    case 2781:
      psg_write(138);
      psg_write(6);
      psg_write(171);
      psg_write(31);
      psg_write(202);
      psg_write(10);
      psg_write(189);
      psg_write(248);
      return;
    case 2782:
      psg_write(139);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(158);
      psg_write(180);
      psg_write(255);
      return;
    case 2783:
      psg_write(140);
      psg_write(6);
      psg_write(200);
      psg_write(10);
      return;
    case 2784:
      psg_write(139);
      psg_write(6);
      psg_write(201);
      psg_write(10);
      psg_write(159);
      return;
    case 2785:
      psg_write(138);
      psg_write(6);
      psg_write(202);
      psg_write(10);
      psg_write(181);
      return;
    case 2786:
      psg_write(137);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      return;
    case 2787:
      psg_write(138);
      psg_write(6);
      psg_write(172);
      psg_write(35);
      psg_write(200);
      psg_write(10);
      psg_write(182);
      return;
    case 2788:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      return;
    case 2789:
      psg_write(140);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      psg_write(228);
      psg_write(183);
      psg_write(217);
      return;
    case 2790:
      psg_write(139);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(246);
      return;
    case 2791:
      psg_write(138);
      psg_write(6);
      psg_write(168);
      psg_write(35);
      psg_write(200);
      psg_write(10);
      psg_write(184);
      psg_write(250);
      return;
    case 2792:
      psg_write(137);
      psg_write(6);
      psg_write(169);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(255);
      return;
    case 2793:
      psg_write(138);
      psg_write(6);
      psg_write(170);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      psg_write(185);
      return;
    case 2794:
      psg_write(139);
      psg_write(6);
      psg_write(171);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      return;
    case 2795:
      psg_write(140);
      psg_write(6);
      psg_write(172);
      psg_write(35);
      psg_write(200);
      psg_write(10);
      psg_write(186);
      return;
    case 2796:
      psg_write(170);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(228);
      psg_write(218);
      return;
    case 2797:
      psg_write(246);
      return;
    case 2798:
      psg_write(187);
      psg_write(219);
      psg_write(244);
      return;
    case 2799:
      return;
    case 2800:
      psg_write(171);
      psg_write(35);
      psg_write(202);
      psg_write(10);
      psg_write(220);
      return;
    case 2801:
      psg_write(172);
      psg_write(35);
      psg_write(201);
      psg_write(10);
      psg_write(188);
      psg_write(221);
      psg_write(245);
      return;
    case 2802:
      psg_write(171);
      psg_write(35);
      psg_write(200);
      psg_write(10);
      psg_write(246);
      return;
    case 2803:
      psg_write(139);
      psg_write(2);
      psg_write(166);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(146);
      psg_write(180);
      psg_write(214);
      return;
    case 2804:
      psg_write(136);
      psg_write(2);
      psg_write(244);
      return;
    case 2805:
      psg_write(133);
      psg_write(2);
      psg_write(243);
      return;
    case 2806:
      psg_write(136);
      psg_write(2);
      psg_write(181);
      psg_write(244);
      return;
    case 2807:
      psg_write(139);
      psg_write(2);
      psg_write(167);
      psg_write(13);
      psg_write(196);
      psg_write(21);
      return;
    case 2808:
      psg_write(136);
      psg_write(2);
      psg_write(168);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 2809:
      psg_write(133);
      psg_write(2);
      psg_write(167);
      psg_write(13);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 2810:
      psg_write(166);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(159);
      psg_write(215);
      psg_write(255);
      return;
    case 2811:
      psg_write(183);
      return;
    case 2812:
      psg_write(216);
      return;
    case 2813:
      psg_write(184);
      return;
    case 2814:
      psg_write(167);
      psg_write(13);
      psg_write(196);
      psg_write(21);
      psg_write(217);
      return;
    case 2815:
      psg_write(168);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(218);
      return;
    case 2816:
      psg_write(167);
      psg_write(13);
      psg_write(194);
      psg_write(21);
      psg_write(185);
      return;
    case 2817:
      psg_write(139);
      psg_write(2);
      psg_write(166);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(229);
      psg_write(146);
      psg_write(180);
      psg_write(214);
      return;
    case 2818:
      psg_write(136);
      psg_write(2);
      psg_write(244);
      return;
    case 2819:
      psg_write(133);
      psg_write(2);
      psg_write(243);
      return;
    case 2820:
      psg_write(159);
      psg_write(181);
      psg_write(244);
      return;
    case 2821:
      psg_write(167);
      psg_write(13);
      psg_write(196);
      psg_write(21);
      return;
    case 2822:
      psg_write(168);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(246);
      return;
    case 2823:
      psg_write(167);
      psg_write(13);
      psg_write(194);
      psg_write(21);
      psg_write(247);
      return;
    case 2824:
      psg_write(139);
      psg_write(2);
      psg_write(166);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(228);
      psg_write(146);
      psg_write(180);
      return;
    case 2825:
      psg_write(136);
      psg_write(2);
      psg_write(243);
      return;
    case 2826:
      psg_write(133);
      psg_write(2);
      psg_write(244);
      return;
    case 2827:
      psg_write(136);
      psg_write(2);
      psg_write(181);
      psg_write(245);
      return;
    case 2828:
      psg_write(139);
      psg_write(2);
      psg_write(167);
      psg_write(13);
      psg_write(196);
      psg_write(21);
      psg_write(247);
      return;
    case 2829:
      psg_write(136);
      psg_write(2);
      psg_write(168);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(182);
      psg_write(248);
      return;
    case 2830:
      psg_write(133);
      psg_write(2);
      psg_write(167);
      psg_write(13);
      psg_write(194);
      psg_write(21);
      psg_write(249);
      return;
    case 2831:
      psg_write(136);
      psg_write(2);
      psg_write(166);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(183);
      psg_write(250);
      return;
    case 2832:
      psg_write(139);
      psg_write(2);
      psg_write(165);
      psg_write(13);
      psg_write(196);
      psg_write(21);
      psg_write(253);
      return;
    case 2833:
      psg_write(136);
      psg_write(2);
      psg_write(164);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(184);
      psg_write(255);
      return;
    case 2834:
      psg_write(133);
      psg_write(2);
      psg_write(165);
      psg_write(13);
      psg_write(194);
      psg_write(21);
      return;
    case 2835:
      psg_write(136);
      psg_write(2);
      psg_write(166);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(185);
      return;
    case 2836:
      psg_write(139);
      psg_write(2);
      psg_write(167);
      psg_write(13);
      psg_write(196);
      psg_write(21);
      return;
    case 2837:
      psg_write(166);
      psg_write(13);
      psg_write(195);
      psg_write(21);
      psg_write(159);
      psg_write(215);
      return;
    case 2838:
    v->pos=0;
      return;
  }
}
