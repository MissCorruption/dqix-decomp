#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" unsigned char data_020e8bd8[];

struct Struct_020827c4 {
    unsigned char unknown_0_[0x14];
    unsigned char unknown_14_;
    unsigned char unknown_15_;
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
};

// USA: func_020827c4
extern "C" ARM void func_020827c4(struct Struct_020827c4* arg0) {
    memcpy(arg0, data_020e8bd8, 0x14);
    arg0->unknown_14_ = arg0->unknown_14_ & ~1;
    arg0->unknown_14_ = (arg0->unknown_14_ & ~0xE) | 4;
    arg0->unknown_14_ = arg0->unknown_14_ & ~0xF0;
    arg0->unknown_15_ = arg0->unknown_15_ & ~0xF;
    arg0->unknown_18_ = 0x1000;
    arg0->unknown_1a_ = 0x1000;
    arg0->unknown_16_ = 0x36B7;
}
