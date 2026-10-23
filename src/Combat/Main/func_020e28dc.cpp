#include <globaldefs.h>

struct Struct_020e28dc_2 {
    char unknown_0_[0x3f];
    unsigned char unknown_3f_0_ : 1;
};

struct Struct_020e28dc {
    char unknown_0_[0xc];
    struct Struct_020e28dc_2* unknown_c_;
};

// USA: func_020e28dc
extern "C" ARM int func_020e28dc(struct Struct_020e28dc* arg0) {
    return arg0->unknown_c_->unknown_3f_0_;
}
