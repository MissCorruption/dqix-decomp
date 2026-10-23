#include <globaldefs.h>

struct Struct_ov005_02154d18 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[4];
    int unknown_18_;
    int unknown_1c_;
};

// USA: func_ov005_02154d18
extern "C" ARM void func_ov005_02154d18(Struct_ov005_02154d18* arg0, int arg1, int arg2) {
    arg0->unknown_18_ = arg1 + arg0->unknown_8_;
    arg0->unknown_1c_ = arg2 + arg0->unknown_10_;
}
