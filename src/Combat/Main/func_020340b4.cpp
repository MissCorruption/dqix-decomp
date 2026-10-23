#include <globaldefs.h>

struct Struct_020340b4 {
    char unknown_0_[0xc2];
    unsigned char unknown_c2_;
};

// USA: func_020340b4
extern "C" ARM void func_020340b4(struct Struct_020340b4* arg0) {
    arg0->unknown_c2_ |= 0x80;
}
