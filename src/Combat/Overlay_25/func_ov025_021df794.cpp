#include <globaldefs.h>

struct Struct_ov025_021df794_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

struct Struct_ov025_021df794 {
    char unknown_0_[0x170];
    int unknown_170_;
    char unknown_174_[2];
    Struct_ov025_021df794_2 unknown_176_[10];
    unsigned char unknown_18a_;
    unsigned char unknown_18b_;
};

// USA: func_ov025_021df794
extern "C" ARM void func_ov025_021df794(Struct_ov025_021df794* arg0) {
    if (arg0->unknown_18a_ != 0) {
        int var0 = arg0->unknown_18b_ - 1;
        if (var0 < 0) {
            var0 = 9;
        }
        if (arg0->unknown_176_[var0].unknown_1_ < 0x1c) {
            int var1 = arg0->unknown_18b_ % 10;
            Struct_ov025_021df794_2* var2 = &arg0->unknown_176_[var1];
            var2->unknown_1_ = 0x1f;
            var2->unknown_0_ = arg0->unknown_18b_;
            arg0->unknown_18b_++;
            arg0->unknown_18a_--;
            if (arg0->unknown_18b_ >= 10) {
                arg0->unknown_18b_ = 0;
            }
        }
    }
    if (arg0->unknown_18a_ == 0) {
        arg0->unknown_170_ = 1;
    }
    for (int var3 = 0; var3 < 10; var3++) {
        Struct_ov025_021df794_2* var4 = &arg0->unknown_176_[var3];
        if (var4->unknown_1_ != 0) {
            if (var4->unknown_1_ > 2) {
                var4->unknown_1_ -= 2;
            } else {
                var4->unknown_1_ = 0;
            }
        }
    }
}
