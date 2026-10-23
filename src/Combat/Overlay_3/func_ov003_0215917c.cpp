#include <globaldefs.h>

struct Struct_ov003_0215917c { unsigned char unknown_0_[0x589]; unsigned char unknown_589_; unsigned char unknown_58a_[6]; };

// USA: func_ov003_0215917c
extern "C" ARM void func_ov003_0215917c(struct Struct_ov003_0215917c* arg0, int arg1) {
    arg0->unknown_589_ = 0;
    if (arg1 & 1) arg0->unknown_58a_[arg0->unknown_589_++] = 0;
    if (arg1 & 2) arg0->unknown_58a_[arg0->unknown_589_++] = 1;
    if (arg1 & 4) arg0->unknown_58a_[arg0->unknown_589_++] = 2;
    if (arg1 & 8) arg0->unknown_58a_[arg0->unknown_589_++] = 3;
    if (arg1 & 0x10) arg0->unknown_58a_[arg0->unknown_589_++] = 4;
    if (arg1 & 0x20) arg0->unknown_58a_[arg0->unknown_589_++] = 5;
}
