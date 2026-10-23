#include <globaldefs.h>

struct Struct_020e1674 {
    char unknown_0_[0x3e];
    unsigned char unknown_3e_;
};
struct Struct_020e1674_2 {
    char unknown_0_[4];
    struct Struct_020e1674* unknown_4_;
};
extern "C" void func_020e1674(struct Struct_020e1674_2* arg0, int arg1, int arg2);

extern "C" void func_020e1a74(struct Struct_020e1674_2* arg0);

struct Struct_020e2834 {
    char unknown_0_[0x10];
    struct Struct_020e1674_2* unknown_10_;
    signed char unknown_14_;
    char unknown_15_[0x17 - 0x15];
    unsigned char unknown_17_;
};

// USA: func_020e2834
extern "C" ARM void func_020e2834(struct Struct_020e2834* arg0)
{
    *(short*)((char*)arg0->unknown_10_ + 0x22) = 0x7fff;
    *(short*)((char*)arg0->unknown_10_ + 0x24) = 0xf0a;

    if (arg0->unknown_17_ != 0) {
        if (arg0->unknown_14_ == 0) {
            func_020e1674(arg0->unknown_10_, 9, 1);
            func_020e1674(arg0->unknown_10_, 0xb, 0);
        } else {
            func_020e1674(arg0->unknown_10_, 9, 0);
            func_020e1674(arg0->unknown_10_, 0xb, 1);
        }
    } else {
        func_020e1674(arg0->unknown_10_, 9, 0);
        func_020e1674(arg0->unknown_10_, 0xb, 0);
    }

    func_020e1a74(arg0->unknown_10_);
}
