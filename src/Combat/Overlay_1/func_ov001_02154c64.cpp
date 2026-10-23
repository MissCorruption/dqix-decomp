#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define data_ov001_02164bd7 data_ov001_02166177
#endif
extern const char data_ov001_02164bd7[];

struct Struct_ov001_02154c64 {
    unsigned char unknown_0_0_ : 4;
    char unknown_1_[0x8 - 0x1];
    char unknown_8_[0x2c - 0x8];
    int unknown_2c_;
    char unknown_30_[0x31 - 0x30];
    unsigned char unknown_31_;
    char unknown_32_[0x34 - 0x32];
    struct Struct_ov001_02154c64* unknown_34_;
};

struct Struct_ov001_02154c64_2 {
    char unknown_0_;
    char unknown_1_[0x24 - 0x1];
    int unknown_24_;
    struct Struct_ov001_02154c64_2* unknown_28_;
    unsigned char unknown_2c_;
};

struct Struct_ov001_02154c64_3 {
#if defined(jpn)
    char unknown_0_[0xcc];
#else
    char unknown1_0_[0xd0];
#endif
    struct Struct_ov001_02154c64* unknown_d0_;
    struct Struct_ov001_02154c64_2* unknown_d4_;
    char unknown_d8_[0xf4 - 0xd8];
    int unknown_f4_;
    char unknown_f8_[0x100 - 0xf8];
    unsigned char unknown_100_;
};

// USA: func_ov001_02154c64
extern "C" ARM int func_ov001_02154c64(struct Struct_ov001_02154c64_3* arg0) {
    int var0 = 0;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    struct Struct_ov001_02154c64* var2 = arg0->unknown_d0_;
    int var3 = 0;

    while (var2 != NULL) {
        unsigned int var4 = var2->unknown_0_0_;
        if (!(var4 != 2 && var4 != 3 && var4 != 6 && var4 != 7 && var4 != 8) && var2->unknown_31_ == 0) {
            if (var4 == 6) {
                var2->unknown_2c_ = var1->QueueLoadFileInGP2(data_ov001_02164bd7, var2->unknown_8_, NULL);
            } else {
                var2->unknown_2c_ = var1->QueueLoadFile(var2->unknown_8_, NULL);
            }
            var0++;
            var3 = 1;
            if (var0 == 5) {
                arg0->unknown_100_ = 0;
                return var3;
            }
        }
        var2 = var2->unknown_34_;
    }

    struct Struct_ov001_02154c64_2* var5 = arg0->unknown_d4_;
    while (var5 != NULL) {
        if (var5->unknown_2c_ == 0) {
            var5->unknown_24_ = var1->QueueLoadFile(var5->unknown_1_, NULL);
            var0++;
            var3 = 1;
            if (var0 == 5) {
                arg0->unknown_100_ = 0;
                return var3;
            }
        }
        var5 = var5->unknown_28_;
    }

    if (arg0->unknown_d8_[0] != 0) {
        arg0->unknown_f4_ = var1->QueueLoadFile(arg0->unknown_d8_, NULL);
        var3 = 1;
    }
    arg0->unknown_100_ = 1;
    return var3;
}
