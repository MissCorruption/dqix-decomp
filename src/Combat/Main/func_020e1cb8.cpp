#include <globaldefs.h>

struct Struct_020e1cb8_2 {
    char unknown_0_[0x3f];
    unsigned char unknown_3f_;
};

struct Struct_020e1cb8 {
    char unknown_0_[4];
    struct Struct_020e1cb8_2* unknown_4_;
};

// USA: func_020e1cb8
extern "C" ARM void func_020e1cb8(struct Struct_020e1cb8* arg0) {
    arg0->unknown_4_->unknown_3f_ &= ~1;
    arg0->unknown_4_->unknown_3f_ |= 2;
}
