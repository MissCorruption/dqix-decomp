#include <globaldefs.h>

struct Struct_02033edc_3 {
    unsigned int unknown_0_[9];
};

struct Struct_02033edc_4 {
    unsigned int unknown_0_[3];
};

struct Struct_02033edc {
    struct Struct_02033edc_3 unknown_0_;
    struct Struct_02033edc_4 unknown_24_;
};

struct Struct_02033edc_2 {
    unsigned char unknown_0_[0xe0];
    unsigned char unknown_e0_;
    unsigned char unknown_e1_[3];
    struct Struct_02033edc_3 unknown_e4_;
    struct Struct_02033edc_4 unknown_108_;
};

// USA: func_02033edc
extern "C" ARM void func_02033edc(struct Struct_02033edc_2* arg0, struct Struct_02033edc* arg1) {
    arg0->unknown_e0_ |= 0x40;
    arg0->unknown_e4_ = arg1->unknown_0_;
    arg0->unknown_108_ = arg1->unknown_24_;
}
