#include <globaldefs.h>

struct Struct_ov024_021f6c40 { int unknown_0_[5]; float unknown_14_; float unknown_18_; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f6c40
extern "C" ARM int func_ov024_021f6c40(struct Struct_ov024_021f6c40* arg0) {
    arg0->unknown_1c_ = arg0->unknown_14_ * 0.5f;
    arg0->unknown_20_ = arg0->unknown_18_ * 0.5f;
    return 1;
}
