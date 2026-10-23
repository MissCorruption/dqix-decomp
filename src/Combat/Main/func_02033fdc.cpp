#include <globaldefs.h>

struct Struct_02033fdc {
    char unknown_0_[0xe0];
    unsigned char unknown_e0_;
};

// USA: func_02033fdc
extern "C" ARM void func_02033fdc(struct Struct_02033fdc* arg0) {
    arg0->unknown_e0_ &= ~0x4;
}
