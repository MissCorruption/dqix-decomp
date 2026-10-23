#include <globaldefs.h>

#pragma define_section initcode ".init" RX

struct Struct_ov017_021d7340 {
    float unknown_0_;
    int unknown_4_;
    int unknown_8_;
    float unknown_c_;
    float unknown_10_;
    float unknown_14_;
};
extern Struct_ov017_021d7340 data_ov017_021d7340;

struct Struct_ov017_021d82e0_3 {
    char unknown_0_[8];
    float unknown_8_;
    float unknown_c_;
    float unknown_10_;
    float unknown_14_;
    float unknown_18_;
};
extern Struct_ov017_021d82e0_3 data_ov017_021d82e0;

// USA: func_ov017_021d6d28
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d6d28(void) {
    float var0 = data_ov017_021d7340.unknown_c_ + data_ov017_021d7340.unknown_10_;
    float var1 = data_ov017_021d7340.unknown_0_ + var0;
    float var2 = data_ov017_021d7340.unknown_14_ + var1;
    data_ov017_021d82e0.unknown_18_ = var2;
    float var3 = data_ov017_021d82e0.unknown_14_ + data_ov017_021d7340.unknown_c_;
    float var4 = data_ov017_021d7340.unknown_10_;
    data_ov017_021d82e0.unknown_10_ = var3;
    float var5 = var3 + var4;
    data_ov017_021d82e0.unknown_8_ = var5;
    float var6 = var5 + data_ov017_021d7340.unknown_0_;
    data_ov017_021d82e0.unknown_c_ = var6;
    data_ov017_021d7340.unknown_4_ = data_ov017_021d7340.unknown_8_ + 0xb;
}
