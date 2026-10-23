#include <globaldefs.h>

struct Struct_020e1374 {
    char unknown_0_[0xc];
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned char unknown_14_;
};

// USA: func_020e1374
extern "C" ARM void func_020e1374(struct Struct_020e1374* arg0, unsigned int arg1, unsigned int arg2, int arg3) {
    arg0->unknown_c_ = arg1;
    arg0->unknown_10_ = arg2;
    arg0->unknown_14_ = (unsigned char)arg3;
}
