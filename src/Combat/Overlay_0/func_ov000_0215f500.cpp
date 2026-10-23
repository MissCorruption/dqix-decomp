#include <globaldefs.h>

struct Struct_ov000_0215f500 { unsigned short unknown_0_[7]; };

struct Struct_ov000_0215f500_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    unsigned char unknown_c_;
    int unknown_10_;
    int unknown_14_;
    struct Struct_ov000_0215f500 unknown_18_;
};

// USA: func_ov000_0215f500
extern "C" ARM struct Struct_ov000_0215f500_2* func_ov000_0215f500(struct Struct_ov000_0215f500_2* arg0, struct Struct_ov000_0215f500_2* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_6_ = arg1->unknown_6_;
    arg0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_9_ = arg1->unknown_9_;
    arg0->unknown_a_ = arg1->unknown_a_;
    arg0->unknown_b_ = arg1->unknown_b_;
    arg0->unknown_c_ = arg1->unknown_c_;
    arg0->unknown_10_ = arg1->unknown_10_;
    arg0->unknown_14_ = arg1->unknown_14_;
    arg0->unknown_18_ = arg1->unknown_18_;
    return arg0;
}
