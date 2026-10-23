#include <globaldefs.h>

struct Struct_02047a5c_2 {
    unsigned char unknown_0_;
    char unknown_1_[7];
};

struct Struct_02047a5c {
    char unknown_0_[0x8];
    struct Struct_02047a5c_2* unknown_8_;
    char unknown_c_[0x78];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 7;
};

// USA: func_02047a5c
extern "C" ARM unsigned char func_02047a5c(struct Struct_02047a5c* arg0, int arg1) {
    if (arg0->unknown_84_0_) {
        return arg0->unknown_8_[arg1].unknown_0_;
    }
    return 0;
}
