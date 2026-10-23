#include <globaldefs.h>

struct Struct_ov004_021549e4_5 {
    char unknown_0_[0x26];
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
};

// USA: func_ov023_021f9bdc
extern "C" ARM void func_ov023_021f9bdc(struct Struct_ov004_021549e4_5* arg0, int arg1) {
    arg0->unknown_28_ = arg1 / arg0->unknown_26_;
    arg0->unknown_2a_ = arg1 % arg0->unknown_26_;
}
