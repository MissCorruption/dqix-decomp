#include <globaldefs.h>

struct Struct_020ddfb4_2 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_[0xf];
    int unknown_14_;
    int unknown_18_;
    unsigned char unknown_1c_[4];
    int unknown_20_;
};

// USA: func_020ddffc
extern "C" ARM void func_020ddffc(struct Struct_020ddfb4_2* arg0) {
    arg0->unknown_18_ = arg0->unknown_18_ + arg0->unknown_20_;
    if (arg0->unknown_14_ < 0) {
        arg0->unknown_14_ = arg0->unknown_14_ + 1;
    }
    if (arg0->unknown_18_ >= 0x1000) {
        arg0->unknown_18_ = 0x1000;
        arg0->unknown_4_ = 3;
    }
}
