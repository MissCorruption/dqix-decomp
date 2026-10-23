#include <globaldefs.h>

struct Struct_ov024_021f6b5c { int unknown_0_[5]; float unknown_14_; float unknown_18_; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f6b5c
extern "C" ARM int func_ov024_021f6b5c(struct Struct_ov024_021f6b5c* arg0) {
    arg0->unknown_1c_ = arg0->unknown_14_ * 0.75f;
    arg0->unknown_20_ = arg0->unknown_18_ * 0.75f;
    return 1;
}
