#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/Memory.h"

typedef struct Struct_020d4c7c
{
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct
    {
        unsigned char unknown_0_;
        unsigned char unknown_1_;
        unsigned char unknown_2_[2];
        unsigned char* unknown_4_;
    } unknown_4_[16];
} Struct_020d4c7c;

typedef struct Struct_020d4c7c_2
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
    unsigned char unknown_c_[32];
    unsigned short unknown_2c_;
    unsigned char unknown_2e_[0x3c - 0x2e];
    unsigned short unknown_3c_;
} Struct_020d4c7c_2;

typedef struct Struct_ov031_02235a44_2
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    Struct_020d4c7c_2* unknown_10_[16];
    unsigned short unknown_50_[16];
} Struct_ov031_02235a44_2;

typedef struct Struct_ov031_02235a44
{
    unsigned char unknown_0_[32];
    unsigned char unknown_20_[6];
    unsigned short unknown_26_;
    unsigned char unknown_28_;
    unsigned char unknown_29_;
} Struct_ov031_02235a44;

extern "C" int func_02001aec(const void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_020d4c7c(Struct_020d4c7c* arg0, const Struct_020d4c7c_2* arg1);

extern char* data_ov031_02290cf8;
extern unsigned char data_ov031_022491fc[6];
extern unsigned char data_ov031_022491f8[4];

// USA: func_ov031_02235a44
extern "C" ARM void func_ov031_02235a44(Struct_ov031_02235a44_2* arg0) {
    Struct_020d4c7c_2* var0;
    int var1, var2, var3, var4;
    Struct_ov031_02235a44* var5;
    Struct_020d4c7c var6;
    Struct_ov031_02235a44* var7 = (Struct_ov031_02235a44*)(data_ov031_02290cf8 + 0x1300);
    InvalidateDataCacheRange(data_ov031_02290cf8 + 0xf00, 0x400);
    for (var1 = 0; var1 < arg0->unknown_e_; var1++) {
        var0 = arg0->unknown_10_[var1];
        if (var0->unknown_c_[0] == 0 || var0->unknown_3c_ != 0) continue;
        for (var2 = 0; var2 < 20; var2++) {
            if (func_02001aec(var0->unknown_4_, var7[var2].unknown_20_, 6) == 0) break;
        }
        if (var2 == 20) {
            for (var2 = 0; var2 < 20; var2++) {
                if (func_02001aec(var7[var2].unknown_20_, data_ov031_022491fc, 6) == 0) break;
            }
            if (var2 == 20) return;
        }
        var5 = &var7[var2];
        VectorizedInvertedMemcpy(var0->unknown_4_, var5->unknown_20_, 6);
        VectorizedInvertedMemcpy(var0->unknown_c_, var5->unknown_0_, 0x20);
        var5->unknown_26_ = arg0->unknown_50_[var1];
        if (!(var0->unknown_2c_ & 0x10)) {
            var5->unknown_28_ = 0;
            continue;
        }
        var5->unknown_28_ = 1;
        func_020d4c7c(&var6, var0);
        var4 = var6.unknown_0_;
        for (var3 = 0; var3 < var4; var3++) {
            if (var6.unknown_4_[var3].unknown_0_ == 0x30) {
                var5->unknown_28_ = 2;
                break;
            }
            if (var6.unknown_4_[var3].unknown_0_ == 0xdd && var6.unknown_4_[var3].unknown_1_ >= 4
                && func_02001aec(var6.unknown_4_[var3].unknown_4_, data_ov031_022491f8, 4) == 0) {
                var5->unknown_28_ = 2;
                break;
            }
        }
    }
}
