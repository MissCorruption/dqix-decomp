#include <globaldefs.h>

struct Struct_ov024_021f703c { char unknown_0_[0x14]; float unknown_14_; float unknown_18_; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f703c
extern "C" ARM int func_ov024_021f703c(struct Struct_ov024_021f703c* arg0) {
    arg0->unknown_1c_ = arg0->unknown_14_ * 0.8f;
    arg0->unknown_20_ = arg0->unknown_18_ * 0.8f;
    return 1;
}
