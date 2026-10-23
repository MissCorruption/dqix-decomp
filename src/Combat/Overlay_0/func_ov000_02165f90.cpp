#include <globaldefs.h>

struct Struct_ov000_02165f90 { char unknown_0_[8]; };

struct Struct_ov000_02165f90_2 {
    unsigned short unknown_0_;
    Struct_ov000_02165f90 unknown_2_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    unsigned char unknown_c_;
    Struct_ov000_02165f90 unknown_d_;
    unsigned char unknown_15_;
    unsigned char unknown_16_;
    unsigned char unknown_17_;
};

// USA: func_ov000_02165f90
extern "C" ARM void func_ov000_02165f90(struct Struct_ov000_02165f90_2* arg0, struct Struct_ov000_02165f90_2* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_a_ = arg1->unknown_a_;
    arg0->unknown_b_ = arg1->unknown_b_;
    arg0->unknown_c_ = arg1->unknown_c_;
    arg0->unknown_d_ = arg1->unknown_d_;
    arg0->unknown_15_ = arg1->unknown_15_;
    arg0->unknown_16_ = arg1->unknown_16_;
    arg0->unknown_17_ = arg1->unknown_17_;
}
