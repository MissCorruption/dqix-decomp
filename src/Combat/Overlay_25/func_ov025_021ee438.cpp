#include <globaldefs.h>

struct Struct_ov025_021ee438 {
    char unknown_0_[0xb0];
    int unknown_b0_[(0x150 - 0xb0) / 4];
    unsigned char unknown_150_;
    char unknown_151_[7];
    int unknown_158_;
};

// USA: func_ov025_021ee438
extern "C" ARM int func_ov025_021ee438(struct Struct_ov025_021ee438* arg0, int arg1) {
    if (arg1 == 0) {
        return 1;
    }
    if (arg1 == arg0->unknown_158_) {
        return 0;
    }
    int var0;
    for (var0 = 0; var0 < arg0->unknown_150_; var0++) {
        int var1 = arg0->unknown_b0_[var0];
        if (var1 == arg1) {
            return 0;
        }
    }
    return 1;
}
