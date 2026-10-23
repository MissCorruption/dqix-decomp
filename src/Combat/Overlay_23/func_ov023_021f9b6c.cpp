#include <globaldefs.h>

struct Struct_ov004_021549e4_3 {
    char unknown_0_[0x20];
    unsigned short* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
};

// USA: func_ov023_021f9b6c
extern "C" ARM unsigned int func_ov023_021f9b6c(struct Struct_ov004_021549e4_3* arg0, unsigned int arg1, unsigned int arg2) {
    if (!arg0->unknown_20_) return 0;
    if (arg0->unknown_24_ <= arg1 || arg0->unknown_26_ <= arg2) return 0;
    return arg0->unknown_20_[arg1 * arg0->unknown_26_ + arg2];
}
