#include <globaldefs.h>

struct Struct_ov024_021f6b8c { char unknown_0_[0x14]; float unknown_14_; float unknown_18_; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f6b8c
extern "C" ARM int func_ov024_021f6b8c(struct Struct_ov024_021f6b8c* arg0) {
    arg0->unknown_1c_ = arg0->unknown_14_ * 1.25f;
    arg0->unknown_20_ = arg0->unknown_18_ * 1.25f;
    return 1;
}
