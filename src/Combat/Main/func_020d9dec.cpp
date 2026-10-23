#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_02061c04_15 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_[5];
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    int unknown_c_[1];
};

// USA: func_020d9dec
extern "C" ARM void func_020d9dec(Struct_02061c04_15* arg0, int arg1) {
    int var0;
    if (arg1 == 0 && arg0->unknown_2_ != 0) return;
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x49;
    arg0->unknown_8_ = 0;
    arg0->unknown_a_ = 0;
    for (var0 = 0; var0 < 1; var0++) {
        arg0->unknown_c_[var0] = -1;
    }
}
