#include <globaldefs.h>

struct Struct_0207267c {
    short unknown_0_;
    int unknown_4_;
};

struct Struct_02072a28 {
    struct Struct_0207267c* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_02072a28
extern "C" ARM void func_02072a28(struct Struct_02072a28* arg0, struct Struct_0207267c* arg1) {
    struct Struct_0207267c* var0;
    if (arg0->unknown_4_ <= arg0->unknown_6_) {
        return;
    }
    var0 = &arg0->unknown_0_[arg0->unknown_6_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_6_++;
}
