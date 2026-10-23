#include <globaldefs.h>

struct Struct_0207ed48 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    unsigned char unknown_14_;
    unsigned char unknown_15_;
};

struct Struct_0207f018 {
    struct Struct_0207ed48* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_0207f018
extern "C" ARM void func_0207f018(struct Struct_0207f018* arg0, struct Struct_0207ed48* arg1) {
    short var0;
    struct Struct_0207ed48* var1;
    if (arg1 == NULL) {
        return;
    }
    var0 = arg0->unknown_4_;
    if (arg0->unknown_6_ <= var0) {
        return;
    }
    var1 = &arg0->unknown_0_[var0];
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_4_ = arg1->unknown_4_;
    var1->unknown_8_ = arg1->unknown_8_;
    var1->unknown_a_ = arg1->unknown_a_;
    var1->unknown_c_ = arg1->unknown_c_;
    var1->unknown_e_ = arg1->unknown_e_;
    var1->unknown_10_ = arg1->unknown_10_;
    var1->unknown_12_ = arg1->unknown_12_;
    var1->unknown_13_ = arg1->unknown_13_;
    var1->unknown_14_ = arg1->unknown_14_;
    var1->unknown_15_ = arg1->unknown_15_;
    arg0->unknown_4_ = arg0->unknown_4_ + 1;
}
