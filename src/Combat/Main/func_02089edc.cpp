#include <globaldefs.h>

struct Struct_02089b90_2 {
    unsigned short unknown_0_[10];
};

struct Struct_02089b90_3 {
    unsigned char unknown_0_[13];
};

struct Struct_02089b90_4 {
    signed char unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    short unknown_a_;
    int unknown_c_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned char unknown_12_;
    int unknown_14_;
    int unknown_18_;
    struct Struct_02089b90_2 unknown_1c_;
    struct Struct_02089b90_3 unknown_30_;
    unsigned char unknown_3d_;
    unsigned char unknown_3e_;
    unsigned char unknown_3f_;
};

struct Struct_02089b90_5 {
    struct Struct_02089b90_4* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_02089edc
extern "C" ARM void func_02089edc(struct Struct_02089b90_5* arg0, struct Struct_02089b90_4* arg1) {
    struct Struct_02089b90_4* var0;
    short var1;
    if (arg0->unknown_0_ == 0) {
        return;
    }
    var1 = arg0->unknown_4_;
    if (arg0->unknown_6_ <= var1) {
        return;
    }
    var0 = &arg0->unknown_0_[var1];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_8_ = arg1->unknown_8_;
    var0->unknown_a_ = arg1->unknown_a_;
    var0->unknown_c_ = arg1->unknown_c_;
    var0->unknown_10_ = arg1->unknown_10_;
    var0->unknown_11_ = arg1->unknown_11_;
    var0->unknown_12_ = arg1->unknown_12_;
    var0->unknown_14_ = arg1->unknown_14_;
    var0->unknown_18_ = arg1->unknown_18_;
    var0->unknown_1c_ = arg1->unknown_1c_;
    var0->unknown_30_ = arg1->unknown_30_;
    var0->unknown_3d_ = arg1->unknown_3d_;
    var0->unknown_3e_ = arg1->unknown_3e_;
    var0->unknown_3f_ = arg1->unknown_3f_;
    arg0->unknown_4_ = arg0->unknown_4_ + 1;
}
