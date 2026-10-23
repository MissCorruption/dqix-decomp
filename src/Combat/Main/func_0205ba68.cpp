#include <globaldefs.h>

struct Struct_0205ba68 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    unsigned char unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int* unknown_20_;
    int* unknown_24_;
    int* unknown_28_;
    int* unknown_2c_;
};

// USA: func_0205ba68
extern "C" ARM void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_8_ = arg1;
    arg0->unknown_c_ = arg2;
    arg0->unknown_10_ = arg3;
    if (arg3 == 0) {
        arg0->unknown_20_ = &arg0->unknown_8_;
        arg0->unknown_24_ = &arg0->unknown_c_;
        arg0->unknown_28_ = &arg0->unknown_18_;
        arg0->unknown_2c_ = &arg0->unknown_1c_;
    } else if (arg3 == 1) {
        arg0->unknown_20_ = &arg0->unknown_c_;
        arg0->unknown_24_ = &arg0->unknown_8_;
        arg0->unknown_28_ = &arg0->unknown_1c_;
        arg0->unknown_2c_ = &arg0->unknown_18_;
    }
}
