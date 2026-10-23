#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02088e80 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x21 - 0x1c];
    unsigned char unknown_21_;
    unsigned short unknown_22_;
    unsigned char unknown_24_;
    char unknown_25_[0x32 - 0x25];
    short unknown_32_;
    short unknown_34_;
    char unknown_36_[0x3b - 0x36];
    unsigned char unknown_3b_;
    char unknown_3c_[0x58 - 0x3c];
    unsigned char unknown_58_[4];
    unsigned char unknown_5c_[0x23];
    unsigned char unknown_7f_[0x23];
};

// USA: func_02088e80
extern "C" ARM void func_02088e80(Struct_02088e80* arg0, int) {
    int var0 = 0;
    if (arg0->unknown_14_ & 0x4) var0 = 1;
    arg0->unknown_14_ = 1;
    arg0->unknown_18_ = 0;
    arg0->unknown_21_ = 0;
    arg0->unknown_22_ &= ~0x3;
    arg0->unknown_22_ &= ~0x3c;
    arg0->unknown_22_ &= ~0x1c0;
    arg0->unknown_22_ &= ~0xe00;
    arg0->unknown_22_ &= ~0x3000;
    arg0->unknown_24_ = 0;
    arg0->unknown_22_ &= ~0x4000;
    arg0->unknown_3b_ &= ~0x8;
    arg0->unknown_3b_ &= ~0xf0;
    arg0->unknown_3b_ &= ~0x4;
    arg0->unknown_32_ = -1;
    arg0->unknown_34_ = -1;
    if (var0) {
        arg0->unknown_14_ |= 0x4;
    }
    memset(arg0->unknown_58_, 0, 4);
    memset(arg0->unknown_5c_, 0, 0x23);
    memset(arg0->unknown_7f_, 0, 0x23);
}
