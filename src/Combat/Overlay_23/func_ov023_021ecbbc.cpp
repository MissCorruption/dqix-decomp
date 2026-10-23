#include <globaldefs.h>

struct Struct_ov023_021ecbbc {
    char unknown_0_[0x433];
    unsigned char unknown_433_;
    char unknown_434_[0x438 - 0x434];
    unsigned short unknown_438_;
    char unknown_43a_[0x43c - 0x43a];
    unsigned char unknown_43c_;
};

// USA: func_ov023_021ecbbc
extern "C" ARM void func_ov023_021ecbbc(Struct_ov023_021ecbbc* arg0) {
    arg0->unknown_438_ &= ~0x100;
    arg0->unknown_438_ |= 0x40;
    arg0->unknown_43c_ = 0;
    arg0->unknown_433_ = 0;
}
