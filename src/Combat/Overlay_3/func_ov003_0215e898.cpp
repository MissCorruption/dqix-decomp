#include <globaldefs.h>

struct Struct_ov003_0215e898_2 {
    unsigned char unknown_0_;
    signed char unknown_1_;
    signed char unknown_2_;
    signed char unknown_3_;
    int unknown_4_;
};

struct Struct_ov003_0215e898 {
    char unknown_0_[8];
    struct Struct_ov003_0215e898_2* unknown_8_;
    short unknown_c_;
    short unknown_e_;
};

// USA: func_ov003_0215e898
extern "C" ARM void func_ov003_0215e898(struct Struct_ov003_0215e898* arg0, struct Struct_ov003_0215e898_2* arg1) {
    struct Struct_ov003_0215e898_2* var0;
    if (arg0->unknown_8_ == 0) {
        return;
    }
    if (arg0->unknown_c_ <= arg0->unknown_e_) {
        return;
    }
    var0 = &arg0->unknown_8_[arg0->unknown_e_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_1_ = arg1->unknown_1_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_3_ = arg1->unknown_3_;
    var0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_e_ = arg0->unknown_e_ + 1;
}
