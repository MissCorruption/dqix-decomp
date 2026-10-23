#include <globaldefs.h>

struct Struct_02059c90_2 {
    char unknown_0_[0x28];
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
};

struct Struct_02059c90 {
    char unknown_0_[0x54];
    struct Struct_02059c90_2* unknown_54_;
};

struct Struct_020577cc_2 {
    char unknown_0_[0x84];
    struct Struct_02059c90* unknown_84_;
};

// USA: func_02059c90
extern "C" ARM void func_02059c90(struct Struct_020577cc_2* arg0, unsigned short* arg1, unsigned short* arg2) {
    *arg1 = arg0->unknown_84_->unknown_54_->unknown_28_;
    *arg2 = arg0->unknown_84_->unknown_54_->unknown_2a_;
}
