#include <globaldefs.h>

struct Struct_ov025_021ed1f0 {
    unsigned short unknown_0_[16];
    short unknown_20_[16];
    short unknown_40_[16];
    short unknown_60_[16];
    unsigned short unknown_80_[16];
    unsigned char unknown_a0_[16];
    unsigned int unknown_b0_[16];
    unsigned int unknown_f0_[16];
    unsigned char unknown_130_[0x20];
    unsigned char unknown_150_;
    unsigned char unknown_151_[0xb];
    short unknown_15c_;
};

// USA: func_ov025_021ed1f0
extern "C" ARM void func_ov025_021ed1f0(void* arg0) {
    struct Struct_ov025_021ed1f0* var0 = (struct Struct_ov025_021ed1f0*)arg0;
    unsigned char var1 = var0->unknown_150_;
    if (var1 == 0) return;
    var0->unknown_150_ = var1 - 1;

    for (int var2 = 0; var2 < var0->unknown_150_; var2++) {
        var0->unknown_0_[var2] = var0->unknown_0_[var2 + 1];
        var0->unknown_20_[var2] = var0->unknown_20_[var2 + 1];
        var0->unknown_a0_[var2] = var0->unknown_a0_[var2 + 1];
        var0->unknown_b0_[var2] = var0->unknown_b0_[var2 + 1];
        var0->unknown_60_[var2] = var0->unknown_60_[var2 + 1];
        var0->unknown_40_[var2] = var0->unknown_40_[var2 + 1];
        var0->unknown_80_[var2] = var0->unknown_80_[var2 + 1];
    }

    var0->unknown_15c_--;
    if (var0->unknown_15c_ < 0) var0->unknown_15c_ = 0;
}
