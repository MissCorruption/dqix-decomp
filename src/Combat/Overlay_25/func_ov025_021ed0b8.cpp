#include <globaldefs.h>

struct Struct_ov025_021ebb90_6 {
    int unknown_0_;
    unsigned char unknown_4_, unknown_5_, unknown_6_;
    int unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_;
    short unknown_20_, unknown_22_;
    int unknown_24_, unknown_28_;
    unsigned short unknown_2c_, unknown_2e_, unknown_30_, unknown_32_, unknown_34_, unknown_36_;
    unsigned char unknown_38_, unknown_39_, unknown_3a_;
    unsigned short unknown_3c_;
};

extern "C" void func_ov025_021ecb90(struct Struct_ov025_021ebb90_6* arg0, struct Struct_ov025_021ebb90_6* arg1);

struct Struct_ov025_021ed0b8 {
    struct Struct_ov025_021ebb90_6 unknown_0_[12];
    unsigned char unknown_300_;
};

// USA: func_ov025_021ed0b8
extern "C" ARM void func_ov025_021ed0b8(struct Struct_ov025_021ed0b8* arg0, struct Struct_ov025_021ebb90_6* arg1) {
    int var0;
    for (var0 = 0; var0 < 12; var0++) {
        if (arg0->unknown_0_[var0].unknown_0_ == 0) {
            func_ov025_021ecb90(&arg0->unknown_0_[var0], arg1);
            arg0->unknown_300_++;
            return;
        }
    }
}
