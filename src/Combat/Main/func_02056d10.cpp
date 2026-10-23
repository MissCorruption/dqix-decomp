#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_02056b48(void* arg0);

struct Struct_020556dc {
    unsigned char unknown_0_[0xc];
    unsigned char unknown_c_;
    unsigned char unknown_d_[0x28 - 0xd];
    unsigned int unknown_28_;
    unsigned int unknown_2c_;
    unsigned int unknown_30_;
    unsigned int unknown_34_;
    unsigned char unknown_38_[0x39 - 0x38];
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_[0x40 - 0x3c];
    unsigned int unknown_40_;
    unsigned int unknown_44_;
    unsigned int unknown_48_;
    unsigned char unknown_4c_[0xc4 - 0x4c];
    unsigned char unknown_c4_[0xc];
    unsigned char unknown_d0_[0xc];
    unsigned char unknown_dc_[0xc];
    unsigned char unknown_e8_[0x154 - 0xe8];
    unsigned int unknown_154_;
};

// USA: func_02056d10
extern "C" ARM void func_02056d10(struct Struct_020556dc* arg0) {
    func_02056b48(arg0);
    arg0->unknown_30_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_28_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_39_ = 0;
    arg0->unknown_3a_ = 0;
    arg0->unknown_3b_ = 0;
    arg0->unknown_40_ = 0;
    arg0->unknown_44_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_154_ = 0;
    arg0->unknown_34_ = 0;
    memset(arg0->unknown_c4_, 0, 0xc);
    memset(arg0->unknown_d0_, 0, 0xc);
    memset(arg0->unknown_dc_, 0, 0xc);
}
