#if defined(jpn)
enum {Enum_ov023_021e3e98_1252=0x4e0, Enum_ov023_021e3e98_1256=0x4e4, Enum_ov023_021e3e98_1588=0x56c, Enum_ov023_021e3e98_15820=0x3d44, Enum_ov023_021e3e98_1254=0x4e2};
#else
enum {Enum_ov023_021e3e98_1252=0x4e4, Enum_ov023_021e3e98_1256=0x4e8, Enum_ov023_021e3e98_1588=0x634, Enum_ov023_021e3e98_15820=0x3dcc, Enum_ov023_021e3e98_1254=0x4e6};
#endif
#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_ov023_021e29d0(void* arg0);

struct Struct_ov023_021e3e98 {
    void* unknown_0_;
    char unknown_4_[0xd4 - 4];
    char unknown_d4_[1];
    char unknown_d5_[Enum_ov023_021e3e98_1252 - 0xd5];
    unsigned char unknown_4e4_;
    char unknown_4e5_[1];
    unsigned char unknown_4e6_;
    unsigned char unknown_4e7_;
    char unknown_4e8_[Enum_ov023_021e3e98_1588 - Enum_ov023_021e3e98_1256];
    unsigned short unknown_634_;
};

// USA: func_ov023_021e3e98
extern "C" ARM void func_ov023_021e3e98(struct Struct_ov023_021e3e98* arg0) {
    int var0 = (func_ov023_021e29d0(&arg0->unknown_d4_) == 0x1f);
    if (var0) {
        arg0->unknown_634_ |= 0x800;
    }

    if (arg0->unknown_0_ != 0 && (*(int*)((char*)arg0->unknown_0_ + Enum_ov023_021e3e98_15820) & 0x400) == 0) {
        return;
    }

    if (g_keyManager.TestKeysPressed(2) != 0) {
        var0 = 1;
    }
    if (!var0) {
        return;
    }

    arg0->unknown_634_ |= 0x800;
    signed char var1 = *(signed char*)((char*)arg0 + Enum_ov023_021e3e98_1254);
    arg0->unknown_4e7_ = var1;
    arg0->unknown_4e6_ = 1;
    arg0->unknown_4e4_ = 0;
}
