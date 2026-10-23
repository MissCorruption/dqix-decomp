#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/LoadToVRAM.h"

struct Struct_02047b40_5 {
    int unknown_0_;
    void* unknown_4_;
};
extern "C" void func_02048090(struct Struct_02047b40_5* arg0, int arg1, SafeAllocator* arg2);

struct Struct_02076080;
extern "C" void func_02076928(struct Struct_02076080* arg0, int arg1);

extern "C" void func_02076994(void* arg0, unsigned char* arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);

struct Struct_02076080_2 {
    int** unknown_0_;
    int** unknown_4_;
    int** unknown_8_;
    int** unknown_c_;
    unsigned short* unknown_10_;
    char unknown_14_[4];
    int* unknown_18_;
    void** unknown_1c_;
    void** unknown_20_;
    void** unknown_24_;
    char unknown_28_[0xc];
    int unknown_34_;
    int unknown_38_;
    int unknown_3c_;
    char unknown_40_[0x10];
    int unknown_50_;
    struct Struct_02047b40_5 unknown_54_;
    unsigned short unknown_5c_;
    unsigned char unknown_5e_;
    unsigned char unknown_5f_;
};

// USA: func_02076080
extern "C" ARM int func_02076080(struct Struct_02076080_2* arg0, SafeAllocator* arg1, unsigned char* arg2) {
    int var0;
    if (arg0->unknown_5e_ == 0) {
        var0 = DISPCNT & 0x300010;
    } else {
        var0 = DISPCNTSUB & 0x300010;
    }

    int var1;
    switch (var0) {
    case 0:        return 1;
    case 0x10:     var1 = 5; break;
    case 0x100010: var1 = 6; break;
    case 0x200010: var1 = 7; break;
    case 0x300010: var1 = 8; break;
    default: return 1;
    }

    int var2 = 0;
    memcpy(&arg0->unknown_5c_, arg2, 2);
    memcpy(&var2, arg2 + 2, 2);
    arg2 += 4;

    switch (var2) {
    case 3: arg0->unknown_50_ = 0; break;
    case 4: arg0->unknown_50_ = 1; break;
    default: return 1;
    }

    arg0->unknown_10_ = (unsigned short*)arg1->Allocate(arg0->unknown_5c_ * 2);
    arg0->unknown_4_  = (int**)arg1->Allocate(arg0->unknown_5c_ * 4);
    arg0->unknown_0_  = (int**)arg1->Allocate(arg0->unknown_5c_ * 4);
    arg0->unknown_8_  = (int**)arg1->Allocate(arg0->unknown_5c_ * 4);
    arg0->unknown_c_  = (int**)arg1->Allocate(arg0->unknown_5c_ * 4);

    unsigned int var3 = arg0->unknown_38_;
    for (unsigned short var4 = 0; var4 < arg0->unknown_5c_; var4++) {
        unsigned short var5, var6;
        unsigned int var7;
        memcpy(&var5, arg2, 2);
        memcpy(&var6, arg2 + 2, 2);
        memcpy(&var7, arg2 + 4, 4);
        arg0->unknown_10_[var4] = (unsigned short)var7;
        arg2 += 8;

        arg0->unknown_4_[var4] = (int*)arg1->Allocate(var7 * 4);
        arg0->unknown_0_[var4] = (int*)arg1->Allocate(var7 * 4);
        arg0->unknown_8_[var4] = (int*)arg1->Allocate(var7 * 4);
        arg0->unknown_c_[var4] = (int*)arg1->Allocate(var7 * 4);

        for (int var8 = 0; var8 < var7; var8++) {
            unsigned short var9, var10, var11, var12;
            memcpy(&var9, arg2, 2);
            memcpy(&var10, arg2 + 2, 2);
            memcpy(&var11, arg2 + 4, 2);
            memcpy(&var12, arg2 + 6, 2);
            unsigned int var13 = 8u << var11;
            unsigned int var14 = 8u << var12;

            arg0->unknown_8_[var4][var8] = var9;
            arg2 += 8;
            arg0->unknown_c_[var4][var8] = var10;

            int* var15 = arg0->unknown_4_[var4];
            if (var13 == 8 && var14 == 8) {
                var15[var8] = 0;
            } else if (var13 == 0x10 && var14 == 0x10) {
                var15[var8] = 0x40000000;
            } else if (var13 == 0x20 && var14 == 0x20) {
                var15[var8] = 0x80000000;
            } else if (var13 == 0x40 && var14 == 0x40) {
                var15[var8] = 0xc0000000;
            } else if (var13 == 0x10 && var14 == 8) {
                var15[var8] = 0x4000;
            } else if (var13 == 0x20 && var14 == 8) {
                var15[var8] = 0x40004000;
            } else if (var13 == 0x20 && var14 == 0x10) {
                var15[var8] = 0x80004000;
            } else if (var13 == 0x40 && var14 == 0x20) {
                var15[var8] = 0xc0004000;
            } else if (var13 == 8 && var14 == 0x10) {
                var15[var8] = 0x8000;
            } else if (var13 == 8 && var14 == 0x20) {
                var15[var8] = 0x40008000;
            } else if (var13 == 0x10 && var14 == 0x20) {
                var15[var8] = 0x80008000;
            } else if (var13 == 0x20 && var14 == 0x40) {
                var15[var8] = 0xc0008000;
            }

            unsigned int var16 = var13 * var14;
            unsigned int var17;
            if (var2 == 3) {
                var17 = var16 >> 1;
            } else {
                var17 = var16;
            }
            arg0->unknown_0_[var4][var8] = var3 >> var1;
            func_02076994(arg0, arg2, arg0->unknown_0_[var4][var8] << var1, var13, var14);
            arg2 += var17;
            var3 += (var17 + ((1 << var1) - 1)) & ~((1 << var1) - 1);
        }
    }

    arg0->unknown_34_ = var3 - arg0->unknown_38_;

    unsigned int var18;
    memcpy(&var18, arg2, 4);
    arg2 += 4;

    if (var18 <= 0x10) {
        int var19 = arg0->unknown_3c_ << 5;
        if (arg0->unknown_5e_ == 0) {
            LoadToMainObjStandardPalette(arg2, var19, 0x20);
        } else {
            LoadToSubObjStandardPalette(arg2, var19, 0x20);
        }
    } else if (var18 <= 0x100) {
        int var20 = arg0->unknown_3c_ << 9;
        if (arg0->unknown_5e_ == 0) {
            LoadToMainObjStandardPalette(arg2, var20, 0x200);
        } else {
            LoadToSubObjStandardPalette(arg2, var20, 0x200);
        }
    } else {
        if (arg0->unknown_5e_ == 0) {
            LoadToMainObjStandardPalette(arg2, 0, var18);
        } else {
            LoadToSubObjStandardPalette(arg2, 0, var18);
        }
    }

    arg2 += var18 * 2;
    memcpy(&arg0->unknown_54_.unknown_0_, arg2 + 0x1e, 4);
    arg2 += 0x22;
    func_02048090(&arg0->unknown_54_, arg0->unknown_54_.unknown_0_, arg1);

    int var21 = arg0->unknown_54_.unknown_0_;
    if (arg0->unknown_54_.unknown_0_ > 0) {
        for (int var22 = 0; var22 < var21; var22++) {
            memcpy((char*)arg0->unknown_54_.unknown_4_ + var22 * 0x1e, arg2, 0x1e);
            arg2 += 0x1e;
        }

        int var23 = var21 * 4;
        arg0->unknown_18_ = (int*)arg1->Allocate(var23);
        arg0->unknown_1c_ = (void**)arg1->Allocate(var23);
        arg0->unknown_20_ = (void**)arg1->Allocate(var23);
        arg0->unknown_24_ = (void**)arg1->Allocate(var23);

        for (int var24 = 0; var24 < var21; var24++) {
            memcpy(&arg0->unknown_18_[var24], arg2, 4);
            arg2 += 4;
            int var25 = arg0->unknown_18_[var24] * 4;
            arg0->unknown_1c_[var24] = arg1->Allocate(var25);
            arg0->unknown_20_[var24] = arg1->Allocate(var25);
            arg0->unknown_24_[var24] = arg1->Allocate(var25);
            memcpy(arg0->unknown_1c_[var24], arg2, var25);
            arg2 += var25;
            memcpy(arg0->unknown_20_[var24], arg2, var25);
            arg2 += var25;
            memcpy(arg0->unknown_24_[var24], arg2, var25);
            arg2 += var25;
        }
    }

    arg0->unknown_5f_ = 1;
    func_02076928((struct Struct_02076080*)arg0, 1);
    return 0;
}
