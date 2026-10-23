#include <globaldefs.h>

struct Struct_0209caa0 {
    unsigned char unknown_0_[0xc8];
    unsigned char unknown_c8_0_ : 1;
    unsigned char unknown_c8_1_ : 1;
    unsigned char unknown_c8_2_ : 6;
    unsigned char unknown_c9_[4];
    unsigned char unknown_cd_;
};

extern "C" void func_0209c2e0(struct Struct_0209caa0* arg0, int arg1, int arg2);

// USA: func_0209caa0
extern "C" ARM void func_0209caa0(struct Struct_0209caa0* arg0, int arg1) {
    if (arg0->unknown_c8_1_ == arg1) {
        return;
    }
    arg0->unknown_c8_1_ = (arg1 != 0);
    func_0209c2e0(arg0, arg0->unknown_cd_, 0x1e);
}
