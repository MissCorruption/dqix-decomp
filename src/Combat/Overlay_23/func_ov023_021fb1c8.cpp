#include <globaldefs.h>

struct Struct_ov023_021fb1c8_2 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov023_021fb1c8 {
    char unknown_0_[0x28];
    int unknown_28_;
    int unknown_2c_;
};

// USA: func_ov023_021fb1c8
extern "C" ARM void func_ov023_021fb1c8(struct Struct_ov023_021fb1c8* arg0, struct Struct_ov023_021fb1c8_2* arg1) {
    arg0->unknown_28_ = arg1->unknown_0_;
    arg0->unknown_2c_ = arg1->unknown_4_;
}
