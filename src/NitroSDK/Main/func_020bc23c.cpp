#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_0210f3e4_2 {
    char unknown_0_[0x2c];
    unsigned char unknown_2c_;
    char unknown_2d_[0xf];
    unsigned char unknown_3c_;
    char unknown_3d_[7];
};

struct Struct_0210f824_2 {
    SignedAllocatorList unknown_0_;
    SignedAllocatorList unknown_c_;
    int unknown_18_;
    int unknown_1c_;
    unsigned char unknown_20_;
};

extern SignedAllocatorList data_0210f3d8;
extern SignedAllocatorList data_0210f3cc;
extern Struct_0210f3e4_2 data_0210f3e4[16];
extern Struct_0210f824_2 data_0210f824[32];

// USA: func_020bc23c
extern "C" ARM void func_020bc23c(void) {
    data_0210f3d8.Initialize(0x14);
    data_0210f3cc.Initialize(0x14);

    {
        int var0 = 0;
        Struct_0210f3e4_2 *var1 = data_0210f3e4;
        do {
            var1->unknown_2c_ = 0;
            var1->unknown_3c_ = var0;
            data_0210f3cc.InsertAtEnd((SignedAllocatorHeader*)var1);
            var1++;
            var0++;
        } while (var0 < 0x10);
    }

    {
        Struct_0210f824_2 *var2 = data_0210f824;
        int var3 = 0;
        do {
            var2->unknown_0_.Initialize(0xc);
            var2->unknown_c_.Initialize(0);
            var2->unknown_20_ = 0x7f;
            var2->unknown_18_ = 1;
            var2->unknown_1c_ = 0;
            var2++;
            var3++;
        } while (var3 < 0x20);
    }
}
