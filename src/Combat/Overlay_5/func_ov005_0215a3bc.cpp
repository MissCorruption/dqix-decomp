#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif

#if defined(jpn)
#define func_ov005_0215a3bc func_ov005_0215b910
#endif

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x3d44, 0x3dcc)];
    unsigned int unknown_3dcc_;
};

struct Struct_ov005_02159850 {
    char unknown_0_[R(0x34f8, 0x3708)];
    int* unknown_3708_;
};

extern "C" void* func_ov017_021a193c(int* arg0);
extern "C" void func_ov023_021e32cc(void* arg0, int arg1, int arg2);

// USA: func_ov005_0215a3bc
extern "C" ARM void func_ov005_0215a3bc(Struct_ov005_02153954* arg0) {
    short var0 = R(0x81, 0x80);
    short var1 = R(0xb4, 0xb0);
    if (arg0->unknown_3dcc_ & 0x80000) {
        var0++;
        var1++;
        arg0->unknown_3dcc_ &= ~0x80000;
    }
    func_ov023_021e32cc(func_ov017_021a193c(((Struct_ov005_02159850*)GetGameResources())->unknown_3708_), var0, var1);
}
