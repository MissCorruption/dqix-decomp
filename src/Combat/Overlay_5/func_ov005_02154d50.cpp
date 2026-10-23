#include <globaldefs.h>

struct Struct_ov005_02154d50 {
    char unknown_0_[8];
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    char unknown_18_[8];
    int unknown_20_;
    int unknown_24_;
};

// USA: func_ov005_02154d50
extern "C" ARM void func_ov005_02154d50(Struct_ov005_02154d50* arg0, int arg1, int arg2) {
    arg0->unknown_20_ = arg0->unknown_c_ + (arg1 - arg0->unknown_8_);
    arg0->unknown_24_ = arg0->unknown_14_ + (arg2 - arg0->unknown_10_);
}
