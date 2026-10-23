#include <globaldefs.h>

struct Struct_020e1e24;
extern "C" void func_020e1e24(struct Struct_020e1e24* arg0, unsigned short* arg1, unsigned short* arg2, int arg3);

struct Struct_020e2604 {
    char unknown_0_[0x10];
    struct Struct_020e1e24* unknown_10_;
    char unknown_14_;
    char unknown_15_[3];
    short unknown_18_;
    short unknown_1a_;
};

// USA: func_020e2604
extern "C" ARM void func_020e2604(struct Struct_020e2604* arg0) {
    func_020e1e24(arg0->unknown_10_, (unsigned short*)&arg0->unknown_18_, (unsigned short*)&arg0->unknown_1a_, arg0->unknown_14_);
    arg0->unknown_18_ -= 0x10;
    arg0->unknown_1a_ -= 2;
}
