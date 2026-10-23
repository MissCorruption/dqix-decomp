#include <globaldefs.h>

struct Struct_02070ee0 {
    unsigned short unknown_0_[6];
};

struct Struct_02070ee0_2 {
    unsigned int unknown_0_[22];
};

struct Struct_02070b6c_5 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned short unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    struct Struct_02070ee0 unknown_18_;
    unsigned int unknown_24_;
    unsigned char unknown_28_;
    unsigned char unknown_29_;
    unsigned short unknown_2a_;
    struct Struct_02070ee0_2 unknown_2c_;
};

// USA: func_02070ee0
extern "C" ARM struct Struct_02070b6c_5 *func_02070ee0(struct Struct_02070b6c_5 *arg0, struct Struct_02070b6c_5 *arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_3_ = arg1->unknown_3_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_6_ = arg1->unknown_6_;
    arg0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_c_ = arg1->unknown_c_;
    arg0->unknown_10_ = arg1->unknown_10_;
    arg0->unknown_14_ = arg1->unknown_14_;
    arg0->unknown_18_ = arg1->unknown_18_;
    arg0->unknown_24_ = arg1->unknown_24_;
    arg0->unknown_28_ = arg1->unknown_28_;
    arg0->unknown_29_ = arg1->unknown_29_;
    arg0->unknown_2a_ = arg1->unknown_2a_;
    arg0->unknown_2c_ = arg1->unknown_2c_;
    return arg0;
}
