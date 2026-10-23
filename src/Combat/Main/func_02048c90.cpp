#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_02048c90_2 {
    char unknown_0_[0x10];
    Vector3i unknown_10_;
    char unknown_1c_[0x4];
    unsigned int unknown_20_;
    char unknown_24_[0x10];
    unsigned char unknown_34_;
    char unknown_35_[0x3];
    int unknown_38_;
    unsigned short unknown_3c_;
    char unknown_3e_[0x2];
    Vector3i unknown_40_;
};

struct Struct_02048c90 {
    char unknown_0_[0x13c];
    struct Struct_02048c90_2* unknown_13c_;
};

// USA: func_02048c90
extern "C" ARM void func_02048c90(struct Struct_02048c90* arg0) {
    if (arg0->unknown_13c_ == NULL) return;
    arg0->unknown_13c_->unknown_34_ = 0;
    arg0->unknown_13c_->unknown_38_ = 0;
    arg0->unknown_13c_->unknown_3c_ = 0;
    arg0->unknown_13c_->unknown_40_ = arg0->unknown_13c_->unknown_10_;
    arg0->unknown_13c_->unknown_20_ &= ~0x10;
    arg0->unknown_13c_->unknown_20_ &= ~0x40;
}
