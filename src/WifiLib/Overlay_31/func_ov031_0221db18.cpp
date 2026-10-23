#include "NitroSDK/OverlayResponse.h"

struct Struct_ov031_0221da60_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};
struct Struct_ov031_0221da60 { unsigned char unknown_0_[6]; Struct_ov031_0221da60_3 unknown_6_; };
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);

// USA: func_ov031_0221db18
extern "C" THUMB int func_ov031_0221db18(Struct_ov031_0221da60* arg0, void* arg1) {
    Struct_ov031_0221da60_3* var0 = &arg0->unknown_6_;
    int var1 = func_ov031_0221e638(var0->unknown_2_);
    if (var1 <= 0) return -1;
    if (var0->unknown_0_ != 0x70) return -1;
    func_ov031_0221e51c(arg1, var0 + 1, var1);
    return 0;
}
