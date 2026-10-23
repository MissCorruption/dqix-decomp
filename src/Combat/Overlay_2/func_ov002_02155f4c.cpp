#include "NitroSDK/ColorEffects.h"
#include <globaldefs.h>

struct Container021e76a8;
struct Obj0205d2bc;
struct SelfState020e2834;
struct Outer020e28dc;
struct Entry020e2cc4;

extern "C" void func_ov023_021e76a8(Container021e76a8 *c);
extern "C" void func_ov023_021eb4f4(char *p);
extern "C" void func_ov013_02184aec(void *p);
extern "C" void func_0205d2bc(Obj0205d2bc *o);
extern "C" void func_020e2d24(int *p, int a, int b);
extern "C" int func_020e28dc(Outer020e28dc *o);
extern "C" void func_020e2cc4(Entry020e2cc4 *e, int enabled);
extern "C" void func_020e2834(SelfState020e2834 *s);

struct Button02155f4c {
    char unk_0[0x10];
    char *panel;
};

struct State02155f4c {
    Button02155f4c *buttons[2];
};

#if defined(jpn)
#define REGIONAL_OFFSET(jp, us) (jp)
#else
#define REGIONAL_OFFSET(jp, us) (us)
#endif

// USA: func_ov002_02155f4c
extern "C" ARM void func_ov002_02155f4c(State02155f4c *self) {
    char *base = (char *) self;
    if (*(unsigned char *) (base + REGIONAL_OFFSET(0x1b87, 0x1cc3)) != 0) {
        func_ov023_021e76a8((Container021e76a8 *) (base + REGIONAL_OFFSET(0x818, 0x8b4)));
    }
    if (*(char **) (base + REGIONAL_OFFSET(0x2298, 0x2468)) != 0) {
        func_ov023_021eb4f4(*(char **) (base + REGIONAL_OFFSET(0x2298, 0x2468)));
    }
    int mode = *(int *) (base + REGIONAL_OFFSET(0x1a80, 0x1bb8));
    if (mode != 0 && mode == REGIONAL_OFFSET(0x1f, 0x1e) && *(int *) (base + REGIONAL_OFFSET(0x1a88, 0x1bc0)) > 4) {
        func_ov013_02184aec(base + REGIONAL_OFFSET(0x1c20, 0x1d70));
    }
    if (*(int *) (base + REGIONAL_OFFSET(0x1a80, 0x1bb8)) != REGIONAL_OFFSET(0x1f, 0x1e)) {
        func_0205d2bc((Obj0205d2bc *) (base + REGIONAL_OFFSET(0xe20, 0xec8)));
    }
    if (self->buttons[0] != 0) {
        if (*(char **) (base + REGIONAL_OFFSET(0x2298, 0x2468)) == 0) {
            ColorEffect_ConfigureAlphaBlend(0x4000050, 2, 1, 10, 6);
        }
        int *panel = (int *) (self->buttons[0]->panel + 0x28);
        func_020e2d24(panel, 0x11, 1);
        func_020e2cc4(
            (Entry020e2cc4 *) panel, func_020e28dc((Outer020e28dc *) self->buttons[0]));
        func_020e2834((SelfState020e2834 *) self->buttons[0]);
    }
    if (self->buttons[1] != 0) {
        int *panel = (int *) (self->buttons[1]->panel + 0x28);
        func_020e2d24(panel, 0x11, 1);
        func_020e2cc4(
            (Entry020e2cc4 *) panel, func_020e28dc((Outer020e28dc *) self->buttons[1]));
        func_020e2834((SelfState020e2834 *) self->buttons[1]);
    }
}
