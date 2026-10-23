#include <globaldefs.h>

struct Struct_020795e8_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    signed char unknown_3_;
    unsigned int unknown_4_0_ : 3;
    unsigned int unknown_4_3_ : 3;
    unsigned int unknown_4_6_ : 3;
    unsigned int unknown_5_1_ : 3;
    unsigned int unknown_5_4_ : 3;
};

struct Struct_020795e8 {
    unsigned char unknown_0_[0x138];
    unsigned char unknown_138_;
    unsigned char unknown_139_;
    unsigned char unknown_13a_;
    unsigned char unknown_13b_;
    unsigned char unknown_13c_;
    unsigned char unknown_13d_[3];
    int unknown_140_;
    int unknown_144_;
};

// USA: func_020795e8
extern "C" ARM void func_020795e8(struct Struct_020795e8* arg0, struct Struct_020795e8_2* arg1) {
    arg0->unknown_138_ = arg1->unknown_4_0_;
    arg0->unknown_139_ = arg1->unknown_4_3_;
    arg0->unknown_13a_ = arg1->unknown_4_6_;
    arg0->unknown_13b_ = arg1->unknown_5_1_;
    arg0->unknown_13c_ = arg1->unknown_5_4_;
    arg0->unknown_140_ = arg1->unknown_2_;
    arg0->unknown_144_ = arg1->unknown_3_;
}
