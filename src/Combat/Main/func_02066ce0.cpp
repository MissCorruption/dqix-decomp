#include <globaldefs.h>

struct Struct_02066a6c_4 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    short unknown_14_;
};

// USA: func_02066ce0
extern "C" ARM void func_02066ce0(struct Struct_02066a6c_4* arg0, int arg1, int arg2, short arg3) {
    arg0->unknown_c_ = arg1;
    arg0->unknown_10_ = arg2;
    arg0->unknown_14_ = arg3;
}
