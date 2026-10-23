#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021cca00 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[12];
};

struct Struct_ov017_021cca00_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cca00 unknown_4_;
};

struct Struct_ov017_021cca00_3 {
    char unknown_0_[0x186];
    unsigned char unknown_186_[13];
#if defined(jpn)
    char unknown_193_[0x8b8 - 0x193];
#else
    char unknown1_193_[0x950 - 0x193];
#endif
    int unknown_950_;
    unsigned short unknown_954_;
};

extern "C" ARM void func_ov017_021cca00(int arg0, unsigned char* arg1, GameState* arg2, int arg3) {
    Struct_ov017_021cca00* var0 = &((Struct_ov017_021cca00_2*)arg1)->unknown_4_;
    GameObject* var1 = func_0200ff1c(arg2, var0->unknown_0_);
    if (var1 == NULL) return;
    Struct_ov017_021cca00_3* var2 = (Struct_ov017_021cca00_3*)func_02053c6c((unsigned char*)var1);
    if (var2 == NULL) return;
    var2->unknown_954_ = var0->unknown_2_;
    for (int var3 = 0; var3 < 12; ++var3) {
        var2->unknown_186_[var3 + 1] = var0->unknown_4_[var3];
    }
}
