#include <globaldefs.h>

#pragma define_section initcode ".init" RX

struct Struct_ov000_021838c8 {
    float unknown_0_;
    float unknown_4_;
    float unknown_8_;
    float unknown_c_;
};

struct Struct_ov000_02184220 {
    char unknown_0_[8];
    float unknown_8_;
    float unknown_c_;
    float unknown_10_;
    float unknown_14_;
    float unknown_18_;
};

extern struct Struct_ov000_021838c8 data_ov000_021838c8;
extern struct Struct_ov000_02184220 data_ov000_02184220;

// USA: func_ov000_02183710
extern "C" __declspec(initcode) ARM void __sinit_ov000_02183710(void) {
    float var0 = data_ov000_021838c8.unknown_0_ + data_ov000_021838c8.unknown_4_;
    float var1 = data_ov000_021838c8.unknown_c_ + var0;
    float var2 = data_ov000_021838c8.unknown_8_ + var1;
    data_ov000_02184220.unknown_18_ = var2;

    float var3 = data_ov000_02184220.unknown_14_ + data_ov000_021838c8.unknown_0_;
    float var4 = data_ov000_021838c8.unknown_4_;
    data_ov000_02184220.unknown_10_ = var3;
    float var5 = var3 + var4;
    float var6 = data_ov000_021838c8.unknown_c_;
    data_ov000_02184220.unknown_c_ = var5;
    float var7 = var5 + var6;
    data_ov000_02184220.unknown_8_ = var7;
}
