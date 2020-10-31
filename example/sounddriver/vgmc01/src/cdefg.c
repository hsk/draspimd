#include <stdint.h>
typedef struct {
  unsigned short pos;
}VgmPlayer;
#define psg_write(v) *dt = v;
void cdefg(VgmPlayer* v){
  volatile uint8_t* dt=0xffff;
  switch(v->pos++){
    case 0:
      psg_write(159);
      psg_write(136);
      psg_write(3);
      psg_write(139);
      psg_write(6);
      psg_write(155);
      psg_write(191);
      psg_write(223);
      psg_write(255);
      return;
    case 1:
      return;
    case 2:
      psg_write(157);
      return;
    case 3:
      return;
    case 4:
      return;
    case 5:
      return;
    case 6:
      return;
    case 7:
      return;
    case 8:
      return;
    case 9:
      return;
    case 10:
      return;
    case 11:
      return;
    case 12:
      psg_write(143);
      psg_write(5);
      psg_write(155);
      return;
    case 13:
      return;
    case 14:
      psg_write(157);
      return;
    case 15:
      return;
    case 16:
      return;
    case 17:
      return;
    case 18:
      return;
    case 19:
      return;
    case 20:
      return;
    case 21:
      return;
    case 22:
      return;
    case 23:
      return;
    case 24:
      psg_write(132);
      psg_write(5);
      psg_write(155);
      return;
    case 25:
      return;
    case 26:
      psg_write(157);
      return;
    case 27:
      return;
    case 28:
      return;
    case 29:
      return;
    case 30:
      return;
    case 31:
      return;
    case 32:
      return;
    case 33:
      return;
    case 34:
      return;
    case 35:
      return;
    case 36:
      psg_write(128);
      psg_write(5);
      psg_write(155);
      return;
    case 37:
      return;
    case 38:
      psg_write(157);
      return;
    case 39:
      return;
    case 40:
      return;
    case 41:
      return;
    case 42:
      return;
    case 43:
      return;
    case 44:
      return;
    case 45:
      return;
    case 46:
      return;
    case 47:
      return;
    case 48:
      psg_write(135);
      psg_write(4);
      psg_write(155);
      return;
    case 49:
      return;
    case 50:
      psg_write(157);
      return;
    case 51:
      return;
    case 52:
      return;
    case 53:
      return;
    case 54:
      return;
    case 55:
      return;
    case 56:
      return;
    case 57:
      return;
    case 58:
      return;
    case 59:
      return;
    case 60:
      psg_write(143);
      psg_write(3);
      psg_write(155);
      return;
    case 61:
      return;
    case 62:
      psg_write(157);
      return;
    case 63:
      return;
    case 64:
      return;
    case 65:
      return;
    case 66:
      return;
    case 67:
      return;
    case 68:
      return;
    case 69:
      return;
    case 70:
      return;
    case 71:
      return;
    case 72:
      psg_write(136);
      psg_write(3);
      psg_write(155);
      return;
    case 73:
      return;
    case 74:
      psg_write(157);
      return;
    case 75:
      return;
    case 76:
      return;
    case 77:
      return;
    case 78:
      return;
    case 79:
      return;
    case 80:
      return;
    case 81:
      return;
    case 82:
      return;
    case 83:
      return;
    case 84:
      psg_write(133);
      psg_write(3);
      psg_write(155);
      return;
    case 85:
      return;
    case 86:
      psg_write(157);
      return;
    case 87:
      return;
    case 88:
      return;
    case 89:
      return;
    case 90:
      return;
    case 91:
      return;
    case 92:
      return;
    case 93:
      return;
    case 94:
      return;
    case 95:
      return;
    case 96:
    v->pos=0;
      return;
  }
}
