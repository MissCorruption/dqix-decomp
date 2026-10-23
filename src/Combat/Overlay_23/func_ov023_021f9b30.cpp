#include <globaldefs.h>

struct Struct_ov004_02153e20 {
    char unknown_0_[0x20];
    short* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
};

// USA: func_ov023_021f9b30
extern "C" ARM int func_ov023_021f9b30(struct Struct_ov004_02153e20* arg0, short arg1, unsigned int arg2, unsigned int arg3) {
    if (arg0->unknown_20_ == NULL) {
        return 0;
    }
    if (!(arg0->unknown_24_ > arg2 && arg0->unknown_26_ > arg3)) {
        return 0;
    }
    arg0->unknown_20_[arg2 * arg0->unknown_26_ + arg3] = arg1;
    return 1;
}
