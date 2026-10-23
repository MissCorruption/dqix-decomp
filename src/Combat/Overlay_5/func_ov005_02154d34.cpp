#include <globaldefs.h>

struct Struct_ov005_02154d34 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0x14];
    int unknown_28_;
    int unknown_2c_;
};

// USA: func_ov005_02154d34
extern "C" ARM void func_ov005_02154d34(Struct_ov005_02154d34* arg0, int arg1, int arg2) {
    arg0->unknown_28_ = arg1 + arg0->unknown_8_;
    arg0->unknown_2c_ = arg2 + arg0->unknown_10_;
}
