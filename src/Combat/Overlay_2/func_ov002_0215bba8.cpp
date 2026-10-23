#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define data_ov002_0216d10c data_ov002_0216d790
#define data_ov002_0216d3b0 data_ov002_0216db30
#define data_ov002_0216cb18 data_ov002_0216d120
#define data_ov002_0216cb1c data_ov002_0216d124
#define RG(u, j) (j)
#define OBJ (base + 0xe20)
#define PAGES 47
#else
#define RG(u, j) (u)
#define OBJ (base + 0x2c8 + 0xc00)
#define PAGES 44
#endif

class Battle0215bba8 {
public:
    char unk_0[0x1bb8];
};

typedef void (Battle0215bba8::*PageFn0215bba8)(void *buf, int flag);

struct ModePage0215bba8 {
    int a;
    int b;
};

extern PageFn0215bba8 data_ov002_0216d10c[PAGES];
extern unsigned int data_ov002_0216d3b0[2];
extern PageFn0215bba8 data_020e6d5c;
extern ModePage0215bba8 data_ov002_0216cb18[];
extern ModePage0215bba8 data_ov002_0216cb1c[];

extern "C" void *memset(void *dst, int value, unsigned int length);
extern "C" unsigned char *func_0205d81c(char *s, unsigned char key);
struct StructA0205d5d0;
#if defined(jpn)
extern "C" void func_0205d5d0(StructA0205d5d0*, int, int, int);
#define APPLY(s, k, t) func_0205d5d0(s, k, t, 1)
#else
extern "C" void func_0205d5d0(StructA0205d5d0*, int, int, int, unsigned char);
#define APPLY(s, k, t) func_0205d5d0(s, k, t, 0, 0)
#endif

struct W0215bba8 {
    char pad[0x34];
    int f34;
};
// USA: func_ov002_0215bba8
extern "C" ARM void func_ov002_0215bba8(Battle0215bba8 *self) {
    char *base = (char *) self;
    int mode   = *(int *) (base + 0x1000 + RG(0xbc8, 0xa90));
    if (mode == 0) {
        return;
    }
    int hl = 0;
    if (mode == 2) {
        if (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) {
            W0215bba8 *w = (W0215bba8 *) OBJ + 1;
            w--;
            if (w->f34 < 0) {
                return;
            }
        }
        hl = 1;
    }
    memset(*(void **) (base + 0x1000 + RG(0xbd0, 0xa98)), 0, RG(0x960, 0x800));
    if (!(data_ov002_0216d3b0[0] & 1)) {
        PageFn0215bba8 nul      = data_020e6d5c;
        data_ov002_0216d10c[0]  = nul;
#if defined(jpn)
        data_ov002_0216d10c[24] = nul;
        data_ov002_0216d10c[31] = nul;
        data_ov002_0216d10c[34] = nul;
        data_ov002_0216d10c[35] = nul;
        data_ov002_0216d10c[39] = nul;
        data_ov002_0216d10c[43] = nul;
        data_ov002_0216d10c[44] = nul;
        data_ov002_0216d10c[45] = nul;
        data_ov002_0216d10c[46] = nul;
#else
        data_ov002_0216d10c[23] = nul;
        data_ov002_0216d10c[30] = nul;
        data_ov002_0216d10c[36] = nul;
        data_ov002_0216d10c[40] = nul;
        data_ov002_0216d10c[41] = nul;
        data_ov002_0216d10c[42] = nul;
        data_ov002_0216d10c[43] = nul;
#endif
        data_ov002_0216d3b0[0] |= 1;
    }
    int key = *(int *) (base + 0x1000 + RG(0xbb8, 0xa80));
    if (data_ov002_0216d10c[key] == 0) {
        return;
    }
#if !defined(jpn)
    if (func_0205d81c(OBJ, (unsigned char) key) != 0) {
#endif
        (self->*data_ov002_0216d10c[*(int *) (base + 0x1000 + RG(0xbb8, 0xa80))])(*(void **) (base + 0x1000 + RG(0xbd0, 0xa98)), hl);
        APPLY((StructA0205d5d0*)OBJ, (unsigned char) *(int *) (base + 0x1000 + RG(0xbb8, 0xa80)), (int)(*(void **) (base + 0x1000 + RG(0xbd0, 0xa98))));
#if !defined(jpn)
    }
#endif
    if (*(int *) (base + 0x1000 + RG(0xbcc, 0xa94)) == 0) {
        return;
    }
    for (int i = 0; data_ov002_0216cb18[i].a >= 0; i++) {
        if (*(int *) (base + 0x1000 + RG(0xbb8, 0xa80)) == data_ov002_0216cb18[i].a) {
            int page = data_ov002_0216cb1c[i].a;
            memset(*(void **) (base + 0x1000 + RG(0xbd0, 0xa98)), 0, RG(0x960, 0x800));
            if (data_ov002_0216d10c[page] == 0) {
                break;
            }
#if !defined(jpn)
            if (func_0205d81c(OBJ, page) == 0) {
                continue;
            }
#endif
            (self->*data_ov002_0216d10c[page])(*(void **) (base + 0x1000 + RG(0xbd0, 0xa98)), hl);
            APPLY((StructA0205d5d0*)OBJ, (unsigned char) page, (int)(*(void **) (base + 0x1000 + RG(0xbd0, 0xa98))));
        }
    }
    *(int *) (base + 0x1000 + RG(0xbcc, 0xa94)) = 0;
}
