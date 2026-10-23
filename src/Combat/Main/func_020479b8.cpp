#include <globaldefs.h>

struct Struct_020479b8_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
};

struct Struct_020479b8 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_020479b8_2 {
    int unknown_0_;
    struct Struct_020479b8* unknown_4_;
};

struct Struct_020479b8_3 {
    char unknown_0_[8];
    struct Struct_020479b8_4* unknown_8_;
    struct Struct_020479b8_2* unknown_c_;
    char unknown_10_[0x60];
    int unknown_70_;
    int unknown_74_;
    char unknown_78_[0xc];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 7;
};

// USA: func_020479b8
extern "C" ARM unsigned char func_020479b8(struct Struct_020479b8_3* arg0) {
    struct Struct_020479b8_2* var0;
    struct Struct_020479b8* var1;
    struct Struct_020479b8_4* var2;
    if (arg0->unknown_84_0_ == 0) {
        return 0;
    }
    var0 = &arg0->unknown_c_[arg0->unknown_74_];
    var1 = &var0->unknown_4_[arg0->unknown_70_];
    var2 = &arg0->unknown_8_[var1->unknown_8_];
    return var2->unknown_1_;
}
