#include <globaldefs.h>

#pragma define_section initcode ".init" RX

struct Struct_020f1bbc {
    float unknown_0_;
    float unknown_4_;
    float unknown_8_;
    float unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

extern struct Struct_020f1bbc data_020f1bbc;
extern float data_02109fe8[5];

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020e660c
extern "C" __declspec(initcode) ARM void __sinit_020e660c(void) {
    float var0;
    float var1;
    data_020f1bbc.unknown_10_ = data_020f1bbc.unknown_14_ + 11;
    data_02109fe8[4] = data_020f1bbc.unknown_0_ + (data_020f1bbc.unknown_4_ + (data_020f1bbc.unknown_c_ + data_020f1bbc.unknown_8_));
    var0 = data_02109fe8[0] + data_020f1bbc.unknown_c_;
    var1 = data_020f1bbc.unknown_8_;
    data_02109fe8[3] = var0;
    var0 = var0 + var1;
    data_02109fe8[2] = var0;
    var0 = var0 + data_020f1bbc.unknown_4_;
    data_02109fe8[1] = var0;
}