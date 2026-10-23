#include <globaldefs.h>

struct Struct_02047a3c_2 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
};

struct Struct_02047a3c {
    char unknown_0_[8];
    struct Struct_02047a3c_2* unknown_8_;
    char unknown_c_[0x84 - 0xc];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 7;
};

// USA: func_02047a3c
extern "C" ARM int func_02047a3c(struct Struct_02047a3c* arg0, int arg1) {
    if (arg0->unknown_84_0_) {
        return arg0->unknown_8_[arg1].unknown_1_;
    }
    return 0;
}
