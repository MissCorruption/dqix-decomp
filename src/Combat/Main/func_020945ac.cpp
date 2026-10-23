#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_02093980(char* arg0);

struct Struct_02093980 {
#if defined(jpn)
    char unknown_0_[11];
    unsigned char unknown_b_;
#else
    char unknown1_0_[48];
#endif
    short unknown_30_;
    signed char unknown_32_;
    unsigned char unknown_33_;
};

struct Struct_02093428_5 {
    Struct_02093980 unknown_0_[8];
    Struct_02093980 unknown_1a0_[8];
#if defined(jpn)
    char unknown_100_[0x13b - 0x100];
#else
    char unknown_340_[0x3cb - 0x340];
#endif
    signed char unknown_3cb_;
    signed char unknown_3cc_;
    unsigned char unknown_3cd_;
};

// USA: func_020945ac
extern "C" ARM void func_020945ac(Struct_02093428_5* arg0) {
    if (arg0->unknown_3cb_ <= 0) {
        return;
    }
    int var0 = arg0->unknown_3cb_ - 1;
    for (int var1 = 0; var1 < var0; var1++) {
        VectorizedInvertedMemcpy(&arg0->unknown_0_[var1 + 1], &arg0->unknown_0_[var1], sizeof(Struct_02093980));
    }
    for (int var2 = var0; var2 < 8; var2++) {
        func_02093980((char*)&arg0->unknown_0_[var2]);
    }
    if (arg0->unknown_3cb_ > 0) {
        arg0->unknown_3cb_ = arg0->unknown_3cb_ - 1;
    }
    if (arg0->unknown_3cb_ > 0) {
        arg0->unknown_3cd_ = (arg0->unknown_3cd_ | 1) & ~4;
    } else {
        arg0->unknown_3cd_ = arg0->unknown_3cd_ & ~4;
    }
}
