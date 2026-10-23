#include <globaldefs.h>

struct Struct_02072560_2 {
    unsigned short unknown_0_[18];
};

struct Struct_02072398 {
    short unknown_0_;
    short unknown_2_;
    struct Struct_02072560_2 unknown_4_;
    unsigned short unknown_28_;
    unsigned char unknown_2a_;
    unsigned char unknown_2b_;
};

struct Struct_02072560 {
    struct Struct_02072398* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_02072560
extern "C" ARM void func_02072560(struct Struct_02072560* arg0, struct Struct_02072398* arg1) {
    struct Struct_02072398* var0;
    if (arg0->unknown_4_ <= arg0->unknown_6_) {
        return;
    }
    var0 = &arg0->unknown_0_[arg0->unknown_6_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_28_ = arg1->unknown_28_;
    var0->unknown_2a_ = arg1->unknown_2a_;
    var0->unknown_2b_ = arg1->unknown_2b_;
    arg0->unknown_6_++;
}
