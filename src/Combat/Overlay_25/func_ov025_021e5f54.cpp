#include <globaldefs.h>

struct Struct_ov025_021e5f54 {
    char unknown_0_[0x21c];
    unsigned short unknown_21c_;
    char unknown_21e_[2];
    short unknown_220_;
    short unknown_222_;
};

struct Struct_ov025_021ef988_16 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif
    Struct_ov025_021e5f54* unknown_c_;
};

extern Struct_ov025_021ef988_16 data_ov025_021ef988;

struct Struct_ov025_021e5f54_2 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 1;
    unsigned int unknown_8_1_ : 15;
    unsigned int unknown_a_0_ : 1;
    unsigned int unknown_a_1_ : 1;
    unsigned int : 14;
    unsigned int unknown_c_0_ : 15;
};

// USA: func_ov025_021e5f54
extern "C" ARM int func_ov025_021e5f54(Struct_ov025_021e5f54_2* arg0) {
    if (arg0->unknown_8_0_) {
        data_ov025_021ef988.unknown_c_->unknown_21c_ = arg0->unknown_8_1_;
    } else {
        data_ov025_021ef988.unknown_c_->unknown_21c_ = 0;
    }
    if (arg0->unknown_a_0_) {
        data_ov025_021ef988.unknown_c_->unknown_220_ = 0x1e;
    } else {
        data_ov025_021ef988.unknown_c_->unknown_220_ = -1;
    }
    if (arg0->unknown_a_1_) {
        data_ov025_021ef988.unknown_c_->unknown_222_ = arg0->unknown_c_0_;
    } else {
        data_ov025_021ef988.unknown_c_->unknown_222_ = -1;
    }
    return 1;
}
