#include <globaldefs.h>
#include "Input/Input.h"

struct Obj021fd420;
extern "C" void func_ov023_021fd420(struct Obj021fd420*, unsigned short*, unsigned short*, unsigned short*, unsigned short*);

// USA: func_ov023_021fd46c
extern "C" ARM int func_ov023_021fd46c(struct Obj021fd420* obj) {
    if (*((unsigned char*)obj + 0xc) & 0x10) return 0;
    unsigned short x1, y1, x2, y2;
    func_ov023_021fd420(obj, &x1, &y1, &x2, &y2);
    int px, py;
    g_touchInput.GetTouchPoint(&px, &py);
    if (x1 <= px && px < x2 && y1 <= py && py < y2) return 1;
    return 0;
}
