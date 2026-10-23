#include <globaldefs.h>

struct Struct_020017c0 {
    unsigned char unknown_0_[0x18];
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    unsigned char unknown_30_[4];
    int unknown_34_;
};

// USA: func_020017c0
extern "C" ARM void func_020017c0(Struct_020017c0* arg0) {
    arg0->unknown_24_ = arg0->unknown_1c_;
    arg0->unknown_28_ = arg0->unknown_20_;
    arg0->unknown_28_ = arg0->unknown_28_ - (arg0->unknown_18_ & arg0->unknown_2c_);
    arg0->unknown_34_ = arg0->unknown_18_;
}
