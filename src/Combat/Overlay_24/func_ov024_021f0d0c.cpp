#include <globaldefs.h>

struct Struct_ov024_021f0d0c {
    char unknown_0_[0x3c];
    unsigned char unknown_3c_0_:1;
    unsigned char unknown_3c_1_:1;
    unsigned char unknown_3c_2_:1;
    unsigned char unknown_3c_3_:1;
    unsigned char unknown_3c_4_:1;
    unsigned char unknown_3c_5_:1;
    unsigned char unknown_3c_6_:1;
    unsigned char unknown_3c_7_:1;
};

struct Struct_ov024_021f0b84 {
    char unknown_0_[0x138];
    struct Struct_ov024_021f0d0c* unknown_138_;
};

// USA: func_ov024_021f0d0c
extern "C" ARM int func_ov024_021f0d0c(struct Struct_ov024_021f0b84* arg0) {
    return arg0->unknown_138_->unknown_3c_1_ != 0;
}
