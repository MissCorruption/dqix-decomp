#include <globaldefs.h>

struct Struct_ov024_021f6fb0 { char unknown_0_[0x14]; float unknown_14_; float unknown_18_; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f6fb0
extern "C" ARM int func_ov024_021f6fb0(struct Struct_ov024_021f6fb0* arg0) {
    arg0->unknown_1c_ = arg0->unknown_14_ * 1.3f;
    arg0->unknown_20_ = arg0->unknown_18_ * 1.3f;
    return 1;
}
