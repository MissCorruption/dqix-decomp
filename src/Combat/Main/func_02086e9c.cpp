#include <globaldefs.h>

struct Struct_02086e9c_2 {
    signed char unknown_0_0_ : 6;
    unsigned char : 1;
    unsigned char unknown_0_7_ : 1;
    char unknown_1_[0x23c - 1];
};

struct Struct_02086e9c {
    char unknown_0_[0xf80];
    struct Struct_02086e9c_2 unknown_f80_[13];
    unsigned char unknown_2c8c_;
};

// USA: func_02086e9c
extern "C" ARM int func_02086e9c(struct Struct_02086e9c* arg0) {
    unsigned char var0;
    for (var0 = 0; var0 < arg0->unknown_2c8c_; var0++) {
        struct Struct_02086e9c_2* var1 = &arg0->unknown_f80_[var0];
        if (var1->unknown_0_7_) {
            return var1->unknown_0_0_;
        }
    }
    return -1;
}
