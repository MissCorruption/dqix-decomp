#include "NitroSDK/OverlayResponse.h"

struct Struct_ov031_0221da60_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[1];
};
struct Struct_ov031_0221da60 { unsigned char unknown_0_[6]; Struct_ov031_0221da60_3 unknown_6_; };
struct Struct_ov031_0221da60_2 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x28];
    unsigned char unknown_30_[0x40];
};
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);

// USA: func_ov031_0221da60
extern "C" THUMB int func_ov031_0221da60(Struct_ov031_0221da60* arg0, Struct_ov031_0221da60_2* arg1) {
    Struct_ov031_0221da60_3* var0 = &arg0->unknown_6_;
    for (;;) {
        unsigned int var1 = func_ov031_0221e638(var0->unknown_2_);
        switch (var0->unknown_0_) {
        case 0x30:
        case 0x40:
            if (var1 > 0x40) return -1;
            break;
        case 0x35:
        case 0x45:
            if (var1 > 0x21) return -1;
            break;
        }
        switch (var0->unknown_0_) {
        case 0x30:
        case 0x40:
            func_ov031_0221e51c(arg1->unknown_30_, var0->unknown_6_, var1);
            arg1->unknown_4_ = var1;
            break;
        case 0x35:
        case 0x45:
            if (var1 != 0 && *(var0->unknown_6_ + var1 - 1) != 0) return -1;
            func_ov031_0221e51c(arg1->unknown_8_, var0->unknown_6_, var1);
            break;
        default:
            return -1;
        }
        if (var0->unknown_4_ == 0) break;
        var0 = (Struct_ov031_0221da60_3*)((unsigned char*)&arg0->unknown_6_ + func_ov031_0221e638(var0->unknown_4_));
    }
    return 0;
}
