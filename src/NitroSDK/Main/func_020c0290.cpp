#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" void VectorizedInvertedMemcpy(void* src, void* dst, int n);

struct Struct_020c0290 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_020c0290_2 {
    char unknown_0_[0x3c];
    unsigned short unknown_3c_;
    char unknown_3e_[0x44 - 0x3e];
    int unknown_44_;
    char unknown_48_[0x50 - 0x48];
    char unknown_50_[8];
};

// USA: func_020c0290
extern "C" ARM int func_020c0290(struct Struct_020c0290_2* arg0) {
    if (arg0 == NULL) return 0;
    if (arg0->unknown_3c_ == 0) return 0;

    struct Struct_020c0290 var0;
    VectorizedInvertedMemcpy(arg0->unknown_50_, &var0, 8);
    CleanCacheRange(&var0, 8);

    if (arg0->unknown_44_ != 0) goto fail;
    if (var0.unknown_0_ != 0x2348 && *(volatile unsigned short*)&var0.unknown_0_ != 0xbd8a) goto fail;
    if (var0.unknown_6_ == 4) return 1;
fail:
    return 0;
}
