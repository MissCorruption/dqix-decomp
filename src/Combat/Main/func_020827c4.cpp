#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" unsigned char data_020e8bd8[];

struct Obj020827c4 {
    unsigned char f00[0x14];
    unsigned char f14;
    unsigned char f15;
    unsigned short f16;
    unsigned short f18;
    unsigned short f1a;
};

// USA: func_020827c4
extern "C" ARM void func_020827c4(struct Obj020827c4* p) {
    memcpy(p, data_020e8bd8, 0x14);
    p->f14 = p->f14 & ~1;
    p->f14 = (p->f14 & ~0xE) | 4;
    p->f14 = p->f14 & ~0xF0;
    p->f15 = p->f15 & ~0xF;
    p->f18 = 0x1000;
    p->f1a = 0x1000;
    p->f16 = 0x36B7;
}
