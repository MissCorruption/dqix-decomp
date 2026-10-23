#include <globaldefs.h>

struct Struct_02015a98 {
    char unknown_0_[0x10];
    unsigned short unknown_10_;
    char unknown_12_[2];
    unsigned char unknown_14_;
    char unknown_15_;
    unsigned char unknown_16_;
    char unknown_17_;
    unsigned char unknown_18_;
};

// USA: func_02015a98
extern "C" ARM void func_02015a98(Struct_02015a98* arg0, int arg1, int arg2, int arg3) {
    if (arg0->unknown_16_ == 1) {
        arg0->unknown_16_ = 2;
        arg0->unknown_14_ = arg1;
        arg0->unknown_10_ = 0;
    } else if (arg3) {
        arg0->unknown_16_ = 2;
        arg0->unknown_14_ = arg1;
        arg0->unknown_10_ = 0;
    }
    if (arg2) {
        arg0->unknown_18_ = 0;
    }
}
