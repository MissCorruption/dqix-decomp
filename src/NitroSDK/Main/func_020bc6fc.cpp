#include <globaldefs.h>

extern "C" int func_020d1e70(int arg0, int arg1);
extern "C" int func_020d1de8(int arg0);
extern "C" void func_020bc79c(void*);

struct Struct_020bc2f0_2 {
    char unknown_0_[0x2c];
    unsigned char unknown_2c_;
    char unknown_2d_[0x3c - 0x2d];
    unsigned char unknown_3c_;
};

// USA: func_020bc6fc
extern "C" ARM void func_020bc6fc(struct Struct_020bc2f0_2* arg0) {
    if (arg0->unknown_2c_ == 2) {
        func_020d1e70(arg0->unknown_3c_, 0xfffffd2d);
    }
    func_020d1de8(arg0->unknown_3c_);
    func_020bc79c(arg0);
}
