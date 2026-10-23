#include <globaldefs.h>

struct Struct_02033f2c {
    char unknown_0_[0xe0];
    unsigned char unknown_e0_;
};

// USA: func_02033f2c
extern "C" ARM void func_02033f2c(struct Struct_02033f2c* arg0) {
    arg0->unknown_e0_ &= ~0x40;
    arg0->unknown_e0_ &= ~0x80;
}
