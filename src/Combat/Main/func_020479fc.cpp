#include <globaldefs.h>

struct Struct_020479fc_2 {
    char unknown_0_[8];
    int unknown_8_;
};

struct Struct_020479fc_3 {
    int unknown_0_;
    struct Struct_020479fc_2* unknown_4_;
};

struct Struct_020479fc {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    struct Struct_020479fc_3* unknown_c_;
    char unknown_10_[0x60];
    int unknown_70_;
    int unknown_74_;
    char unknown_78_[0xc];
    unsigned char unknown_84_0_ : 1;
};

// USA: func_020479fc
extern "C" ARM int func_020479fc(struct Struct_020479fc* arg0) {
    struct Struct_020479fc_2* var0;
    if (!arg0->unknown_84_0_) {
        return 0;
    }
    var0 = &arg0->unknown_c_[arg0->unknown_74_].unknown_4_[arg0->unknown_70_];
    return arg0->unknown_8_[var0->unknown_8_ * 8];
}
