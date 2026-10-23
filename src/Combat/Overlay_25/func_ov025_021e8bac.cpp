#include <globaldefs.h>

struct Struct_ov025_021e267c_3 {
    char unknown_0_[1];
    unsigned char unknown_1_;
    char unknown_2_[6];
    struct Struct_ov025_021e267c_3* unknown_8_;
};
struct Struct_ov025_021e267c_2 {
    char unknown_0_[0x30];
    unsigned char unknown_30_;
    char unknown_31_[0x1a7];
    struct Struct_ov025_021e267c_3* unknown_1d8_;
};

// USA: func_ov025_021e8bac
extern "C" ARM void func_ov025_021e8bac(struct Struct_ov025_021e267c_2* arg0, struct Struct_ov025_021e267c_3* arg1) {
    arg1->unknown_1_ = arg0->unknown_30_;
    arg1->unknown_8_ = arg0->unknown_1d8_;
    arg0->unknown_1d8_ = arg1;
}
