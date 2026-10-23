#include <globaldefs.h>

struct Struct_02071874 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    unsigned short unknown_a_;
    int unknown_c_;
    int unknown_10_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    int unknown_1c_;
};

struct Struct_02071cc8 {
    char unknown_0_[4];
    struct Struct_02071874* unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

// USA: func_02071cc8
extern "C" ARM void func_02071cc8(struct Struct_02071cc8* arg0, struct Struct_02071874* arg1) {
    struct Struct_02071874* var0;
    if (arg0->unknown_8_ <= arg0->unknown_a_) {
        return;
    }
    var0 = &arg0->unknown_4_[arg0->unknown_a_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_6_ = arg1->unknown_6_;
    var0->unknown_8_ = arg1->unknown_8_;
    var0->unknown_a_ = arg1->unknown_a_;
    var0->unknown_c_ = arg1->unknown_c_;
    var0->unknown_10_ = arg1->unknown_10_;
    var0->unknown_14_ = arg1->unknown_14_;
    var0->unknown_16_ = arg1->unknown_16_;
    var0->unknown_18_ = arg1->unknown_18_;
    var0->unknown_1a_ = arg1->unknown_1a_;
    var0->unknown_1c_ = arg1->unknown_1c_;
    arg0->unknown_a_++;
}
