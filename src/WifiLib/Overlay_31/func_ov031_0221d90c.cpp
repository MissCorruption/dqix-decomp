#include <globaldefs.h>
#include "NitroSDK/OverlayResponse.h"
struct Struct_ov031_0221d90c_3 {
    unsigned char unknown_0_, unknown_1_;
    unsigned short unknown_2_, unknown_4_;
    unsigned char unknown_6_[1];
};
struct Struct_ov031_0221d90c { unsigned char unknown_0_[6]; Struct_ov031_0221d90c_3 unknown_6_; };
struct Struct_ov031_0221d90c_2 {
    unsigned int unknown_0_, unknown_4_;
    unsigned char unknown_8_[40];
    unsigned char unknown_30_[4][64];
};
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
// USA: func_ov031_0221d90c
extern "C" THUMB int func_ov031_0221d90c(Struct_ov031_0221d90c* arg0, Struct_ov031_0221d90c_2* arg1) {
    Struct_ov031_0221d90c_3* var0 = &arg0->unknown_6_;
    Struct_ov031_0221d90c_3* var1;
    unsigned char* var2 = arg1->unknown_8_;
    unsigned char* var3 = arg1->unknown_30_[3];
    unsigned char* var4 = arg1->unknown_30_[2];
    unsigned char* var5 = arg1->unknown_30_[1];
    unsigned char* var6 = arg1->unknown_30_[0];
    var1 = var0;
    unsigned long var7;
    do {
        var7 = func_ov031_0221e638(var0->unknown_2_);
        switch (var0->unknown_0_) {
        case 0x10: case 0x11: case 0x12: case 0x13:
            if (var7 > 5) return -1;
            break;
        case 0x20: case 0x21: case 0x22: case 0x23:
            if (var7 > 13) return -1;
            break;
        case 0x15: case 0x25:
            if (var7 > 33) return -1;
            break;
        }
        switch (var0->unknown_0_) {
        case 0x10: case 0x20:
            func_ov031_0221e51c(var6, var0->unknown_6_, var7);
            arg1->unknown_4_ = var7;
            break;
        case 0x11: case 0x21:
            func_ov031_0221e51c(var5, var0->unknown_6_, var7);
            arg1->unknown_4_ = var7;
            break;
        case 0x12: case 0x22:
            func_ov031_0221e51c(var4, var0->unknown_6_, var7);
            arg1->unknown_4_ = var7;
            break;
        case 0x13: case 0x23:
            func_ov031_0221e51c(var3, var0->unknown_6_, var7);
            arg1->unknown_4_ = var7;
            break;
        case 0x15: case 0x25:
            if (var7 != 0 && var0->unknown_6_[var7 - 1] != 0) return -1;
            func_ov031_0221e51c(var2, var0->unknown_6_, var7);
            break;
        default: return -1;
        }
        if (var0->unknown_4_ == 0) break;
        var0 = (Struct_ov031_0221d90c_3*)((unsigned char*)var1 + func_ov031_0221e638(var0->unknown_4_));
    } while (1);
    return 0;
}
