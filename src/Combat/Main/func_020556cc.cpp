#include <globaldefs.h>

struct Struct_02055660_2 {
    char unknown_0_[0x28];
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
};

// USA: func_020556cc
extern "C" ARM void func_020556cc(struct Struct_02055660_2* arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_30_ = arg1;
    arg0->unknown_2c_ = arg2;
    arg0->unknown_28_ = arg3;
}
