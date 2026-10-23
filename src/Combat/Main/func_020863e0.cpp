#include <globaldefs.h>

struct Struct_02083e28_6 {
    char unknown_0_[0x1c];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    char unknown_20_[0x6c - 0x20];
    unsigned short unknown_6c_;
    unsigned short unknown_6e_;
};

// USA: func_020863e0
extern "C" ARM void func_020863e0(struct Struct_02083e28_6* arg0) {
    if (arg0->unknown_6c_ < arg0->unknown_1c_) arg0->unknown_1c_ = arg0->unknown_6c_;
    if (arg0->unknown_6e_ < arg0->unknown_1e_) arg0->unknown_1e_ = arg0->unknown_6e_;
}
