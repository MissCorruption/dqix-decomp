#include <globaldefs.h>

struct Struct_020e5750 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

struct Struct_020e5750_2 {
    struct Struct_020e5750* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_020e587c
extern "C" ARM void func_020e587c(struct Struct_020e5750_2* arg0, struct Struct_020e5750* arg1) {
    struct Struct_020e5750* var0;
    if (arg1 == NULL) {
        return;
    }
    if (arg0->unknown_4_ <= arg0->unknown_8_) {
        return;
    }
    var0 = &arg0->unknown_0_[arg0->unknown_8_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_8_ = arg1->unknown_8_;
    var0->unknown_c_ = arg1->unknown_c_;
    var0->unknown_10_ = arg1->unknown_10_;
    arg0->unknown_8_++;
}
