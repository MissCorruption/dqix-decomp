#include <globaldefs.h>

struct Struct_020a825c {
    unsigned int unknown_0_[4];
};

struct Struct_020a7f88_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned int unknown_4_;
    struct Struct_020a825c unknown_8_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned int unknown_20_;
    unsigned int unknown_24_;
    unsigned int unknown_28_;
};

struct Struct_020a825c_2 {
    struct Struct_020a7f88_2* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_020a825c
extern "C" ARM void func_020a825c(struct Struct_020a825c_2* arg0, struct Struct_020a7f88_2* arg1) {
    struct Struct_020a7f88_2* var0;
    unsigned short var1;
    unsigned short var2;
    if (arg1 == 0) {
        return;
    }
    var1 = arg0->unknown_6_;
    var2 = arg0->unknown_4_;
    if (var2 <= var1) {
        return;
    }
    var0 = &arg0->unknown_0_[var1];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_1_ = arg1->unknown_1_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_3_ = arg1->unknown_3_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_8_ = arg1->unknown_8_;
    var0->unknown_18_ = arg1->unknown_18_;
    var0->unknown_1a_ = arg1->unknown_1a_;
    var0->unknown_1c_ = arg1->unknown_1c_;
    var0->unknown_20_ = arg1->unknown_20_;
    var0->unknown_24_ = arg1->unknown_24_;
    var0->unknown_28_ = arg1->unknown_28_;
    arg0->unknown_6_++;
}
