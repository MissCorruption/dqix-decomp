#include "NitroSDK/ColorEffects.h"
#include <globaldefs.h>

struct Struct_ov002_02155f4c;
struct Struct_0205d2bc;
struct Struct_020e2834;
struct Struct_020e28dc;
struct Struct_020439b0;

extern "C" void func_ov023_021e76a8(Struct_ov002_02155f4c *arg0);
extern "C" void func_ov023_021eb4f4(char *arg0);
extern "C" void func_ov013_02184aec(void *arg0);
extern "C" void func_0205d2bc(Struct_0205d2bc *arg0);
extern "C" void func_020e2d24(int *arg0, int arg1, int arg2);
extern "C" int func_020e28dc(Struct_020e28dc *arg0);
extern "C" void func_020e2cc4(Struct_020439b0 *arg0, int arg1);
extern "C" void func_020e2834(Struct_020e2834 *arg0);

struct Struct_ov002_02155f4c_3 {
    char unknown_0_[0x10];
    char *unknown_10_;
};

struct Struct_ov002_02155f4c_2 {
    Struct_ov002_02155f4c_3 *unknown_0_[2];
};

#if defined(jpn)
#define REGIONAL_OFFSET(jp, us) (jp)
#else
#define REGIONAL_OFFSET(jp, us) (us)
#endif

// USA: func_ov002_02155f4c
extern "C" ARM void func_ov002_02155f4c(Struct_ov002_02155f4c_2 *arg0) {
    char *var0 = (char *) arg0;
    if (*(unsigned char *) (var0 + REGIONAL_OFFSET(0x1b87, 0x1cc3)) != 0) {
        func_ov023_021e76a8((Struct_ov002_02155f4c *) (var0 + REGIONAL_OFFSET(0x818, 0x8b4)));
    }
    if (*(char **) (var0 + REGIONAL_OFFSET(0x2298, 0x2468)) != 0) {
        func_ov023_021eb4f4(*(char **) (var0 + REGIONAL_OFFSET(0x2298, 0x2468)));
    }
    int var1 = *(int *) (var0 + REGIONAL_OFFSET(0x1a80, 0x1bb8));
    if (var1 != 0 && var1 == REGIONAL_OFFSET(0x1f, 0x1e) && *(int *) (var0 + REGIONAL_OFFSET(0x1a88, 0x1bc0)) > 4) {
        func_ov013_02184aec(var0 + REGIONAL_OFFSET(0x1c20, 0x1d70));
    }
    if (*(int *) (var0 + REGIONAL_OFFSET(0x1a80, 0x1bb8)) != REGIONAL_OFFSET(0x1f, 0x1e)) {
        func_0205d2bc((Struct_0205d2bc *) (var0 + REGIONAL_OFFSET(0xe20, 0xec8)));
    }
    if (arg0->unknown_0_[0] != 0) {
        if (*(char **) (var0 + REGIONAL_OFFSET(0x2298, 0x2468)) == 0) {
            ColorEffect_ConfigureAlphaBlend(0x4000050, 2, 1, 10, 6);
        }
        int *var2 = (int *) (arg0->unknown_0_[0]->unknown_10_ + 0x28);
        func_020e2d24(var2, 0x11, 1);
        func_020e2cc4(
            (Struct_020439b0 *) var2, func_020e28dc((Struct_020e28dc *) arg0->unknown_0_[0]));
        func_020e2834((Struct_020e2834 *) arg0->unknown_0_[0]);
    }
    if (arg0->unknown_0_[1] != 0) {
        int *var3 = (int *) (arg0->unknown_0_[1]->unknown_10_ + 0x28);
        func_020e2d24(var3, 0x11, 1);
        func_020e2cc4(
            (Struct_020439b0 *) var3, func_020e28dc((Struct_020e28dc *) arg0->unknown_0_[1]));
        func_020e2834((Struct_020e2834 *) arg0->unknown_0_[1]);
    }
}
