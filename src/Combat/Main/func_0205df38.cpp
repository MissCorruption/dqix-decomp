#include <globaldefs.h>
#include "Input/Input.h"

struct Elem_0205df38 {
    char pad0[0xa8];
    short height;
    short x;
    short y;
    short width;
};

struct Struct_0205d81c {
    char pad0[0x98];
    void* f98;
    struct Elem_0205df38* f9c;
};

struct Elem_0205df38* FindElementByC40205d81c(struct Struct_0205d81c* s, int key);

// USA: func_0205df38
extern "C" ARM int func_0205df38(struct Struct_0205d81c* s, int key) {
    int touchY, touchX;
    struct Elem_0205df38* e;
    short y, h, w, x;
    int yhi, whi;

    if (s->f98 == 0) return 0;
    if (s->f9c == 0) return 0;

    if (!g_touchInput.pressed_) goto zero;

    g_touchInput.GetTouchPoint(&touchY, &touchX);

    e = FindElementByC40205d81c(s, key);
    if (e == 0) goto zero;

    y = e->y;
    h = e->height;
    w = e->width;
    x = e->x;
    yhi = (short)(y + h);
    whi = (short)(w + x);

    if (touchY > ((y << 0x13) >> 0x10)) {
        if (touchY < ((yhi << 0x13) >> 0x10)) {
            if (touchX > ((w << 0x13) >> 0x10)) {
                if (touchX < ((whi << 0x13) >> 0x10)) {
                    return 1;
                }
            }
        }
    }
zero:
    return 0;
}
