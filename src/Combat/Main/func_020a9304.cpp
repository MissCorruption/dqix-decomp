#include <globaldefs.h>

struct Struct_020a9304 { unsigned char unknown_0_[24]; };
struct Struct_020a9304_2 { unsigned short unknown_0_[6]; };

struct Struct_020a8fd0_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned int unknown_c_;
    struct Struct_020a9304 unknown_10_;
    unsigned int unknown_28_;
    unsigned int unknown_2c_;
    unsigned char unknown_30_;
    unsigned char unknown_31_;
    struct Struct_020a9304_2 unknown_32_;
};

// USA: func_020a9304
extern "C" ARM struct Struct_020a8fd0_3* func_020a9304(struct Struct_020a8fd0_3* arg0, struct Struct_020a8fd0_3* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_6_ = arg1->unknown_6_;
    arg0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_a_ = arg1->unknown_a_;
    arg0->unknown_c_ = arg1->unknown_c_;
    arg0->unknown_10_ = arg1->unknown_10_;
    arg0->unknown_28_ = arg1->unknown_28_;
    arg0->unknown_2c_ = arg1->unknown_2c_;
    arg0->unknown_30_ = arg1->unknown_30_;
    arg0->unknown_31_ = arg1->unknown_31_;
    arg0->unknown_32_ = arg1->unknown_32_;
    return arg0;
}
