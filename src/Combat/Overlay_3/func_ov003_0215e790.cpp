#include <globaldefs.h>

struct Struct_ov003_0215e510 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
};

struct Struct_ov003_0215e790 {
    struct Struct_ov003_0215e510* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_ov003_0215e790
extern "C" ARM void func_ov003_0215e790(struct Struct_ov003_0215e790* arg0, struct Struct_ov003_0215e510* arg1) {
    if (arg0->unknown_0_ == NULL) {
        return;
    }
    if (arg0->unknown_4_ <= arg0->unknown_6_) {
        return;
    }
    struct Struct_ov003_0215e510* var0 = &arg0->unknown_0_[arg0->unknown_6_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_8_ = arg1->unknown_8_;
    var0->unknown_c_ = arg1->unknown_c_;
    var0->unknown_d_ = arg1->unknown_d_;
    var0->unknown_e_ = arg1->unknown_e_;
    var0->unknown_f_ = arg1->unknown_f_;
    var0->unknown_10_ = arg1->unknown_10_;
    var0->unknown_12_ = arg1->unknown_12_;
    var0->unknown_13_ = arg1->unknown_13_;
    arg0->unknown_6_++;
}
