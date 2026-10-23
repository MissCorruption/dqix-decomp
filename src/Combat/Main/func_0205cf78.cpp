#include <globaldefs.h>

struct Struct_0205cf78_2 {
    struct Struct_0205cf78_2* unknown_0_;
    char unknown_4_[0xE0 - 4];
};

struct Struct_0205cf78 {
    char unknown_0_[0x9C];
    struct Struct_0205cf78_2* unknown_9c_;
    char unknown_a0_[0xB3 - 0xA0];
    unsigned char unknown_b3_;
};

// USA: func_0205cf78
extern "C" ARM void func_0205cf78(struct Struct_0205cf78* arg0, struct Struct_0205cf78_2* arg1, unsigned char arg2) {
    unsigned char var0;
    arg0->unknown_9c_ = arg1;
    arg0->unknown_b3_ = arg2;
    if (arg0->unknown_9c_ == 0 || arg0->unknown_b3_ == 0) return;
    for (var0 = 1; var0 < arg0->unknown_b3_; var0++) {
        arg0->unknown_9c_[var0].unknown_0_ = &arg0->unknown_9c_[var0 - 1];
    }
}
