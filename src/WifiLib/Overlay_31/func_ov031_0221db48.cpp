#include <globaldefs.h>
#include "NitroSDK/OverlayResponse.h"

struct Struct_ov031_0221db48_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};
struct Struct_ov031_0221c5ac_8 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned char unknown_8_[40];
    unsigned char unknown_30_[4][64];
};
struct Struct_ov031_0221c5ac_9 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[40];
    unsigned char unknown_30_[64];
};
struct Struct_ov031_0221db48 {
    unsigned char unknown_0_[8];
    Struct_ov031_0221c5ac_8 unknown_8_;
    Struct_ov031_0221c5ac_8 unknown_138_;
    Struct_ov031_0221c5ac_9 unknown_268_;
    Struct_ov031_0221c5ac_9 unknown_2d8_;
    unsigned char unknown_348_[8];
};
struct Struct_ov031_0221db48_2 { unsigned char unknown_0_[128]; };

struct Struct_ov031_0224e6e0_7 {
    char unknown_0_[0x30];
    unsigned int unknown_30_;
};
extern unsigned char data_ov031_0224b06c[];
extern Struct_ov031_0224e6e0_7 data_ov031_0224e6e0;
extern "C" int func_ov031_0221d90c(Struct_ov031_0221db48_3*, Struct_ov031_0221c5ac_8*);
extern "C" int func_ov031_0221da60(Struct_ov031_0221db48_3*, Struct_ov031_0221c5ac_9*);
extern "C" int func_ov031_0221db18(Struct_ov031_0221db48_3*, void*);

// USA: func_ov031_0221db48
extern "C" THUMB int func_ov031_0221db48(int arg0, Struct_ov031_0221db48_3* arg1, int arg2, Struct_ov031_0221db48* arg3, void* arg4) {
    unsigned int var0 = 0;
    Struct_ov031_0221db48_3* var1;
    if (arg2 <= 0) return -2;
    do {
        var1 = arg1;
        if (var1->unknown_0_ == data_ov031_0224b06c[arg0]) goto found;
        int var2 = func_ov031_0221e638(arg1->unknown_2_) + 4;
        arg2 -= var2;
        arg1 = (Struct_ov031_0221db48_3*)((char*)arg1 + var2);
    } while (arg2 > 0);
    return -4;
found:
    arg1 = var1 + 1;
    int var3 = func_ov031_0221e638(var1->unknown_2_);
    Struct_ov031_0221db48* var4 = &arg3[arg0];
    unsigned char* var5 = (unsigned char*)arg4;
    unsigned int var6 = (arg0 + 3) * sizeof(Struct_ov031_0221db48_2);
    do {
        int var7;
        switch (arg1->unknown_0_) {
        case 3:
            var7 = func_ov031_0221d90c(arg1, &var4->unknown_8_);
            var0 |= 1;
            break;
        case 4:
            var7 = func_ov031_0221d90c(arg1, &var4->unknown_138_);
            var0 |= 2;
            break;
        case 5:
            var7 = func_ov031_0221da60(arg1, &var4->unknown_268_);
            var0 |= 4;
            break;
        case 6:
            var7 = func_ov031_0221da60(arg1, &var4->unknown_2d8_);
            var0 |= 8;
            break;
        case 10:
            var7 = func_ov031_0221db18(arg1, var5 + var6);
            break;
        default:
            var7 = -3;
            break;
        }
        if (var7) return var7;
        int var8 = func_ov031_0221e638(arg1->unknown_2_) + 4;
        var3 -= var8;
        arg1 = (Struct_ov031_0221db48_3*)((char*)arg1 + var8);
    } while (var3 > 0);
    data_ov031_0224e6e0.unknown_30_ |= var0;
    return 0;
}
