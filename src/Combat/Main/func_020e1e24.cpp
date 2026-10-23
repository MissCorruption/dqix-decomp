#include <globaldefs.h>

struct Struct_020e1e24_2 {
    char unknown_0_[0x38];
    unsigned char unknown_38_;
    unsigned char unknown_39_;
};

struct Struct_020e1e24 {
    int unknown_0_;
    struct Struct_020e1e24_2* unknown_4_;
};

// USA: func_020e1e24
extern "C" ARM void func_020e1e24(struct Struct_020e1e24* arg0, unsigned short* arg1, unsigned short* arg2, int arg3) {
    *arg1 = arg0->unknown_4_->unknown_38_ + 0xc;
    *arg2 = arg0->unknown_4_->unknown_39_ + 8 + (arg3 << 4);
}
