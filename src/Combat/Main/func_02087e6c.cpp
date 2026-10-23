#include <globaldefs.h>

extern "C" void func_02087efc(unsigned char* arg0);
extern "C" void func_02088c38(unsigned char* arg0);
extern "C" void func_02088c9c(unsigned char* arg0);

struct Struct_02087e6c {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[0x58 - 0x18];
    int unknown_58_0_ : 21;
    int unknown_5a_5_ : 3;
    char unknown_5b_[0x75 - 0x5c];
    unsigned char unknown_74_;
    char unknown_75_[0x98 - 0x76];
    unsigned char unknown_97_;
};

// USA: func_02087e6c
extern "C" ARM int func_02087e6c(struct Struct_02087e6c* arg0, int arg1) {
    int var0 = arg1 + arg0->unknown_5a_5_;

    if (var0 > 2) {
        var0 = 2;
    }
    if (var0 < -2) {
        var0 = -2;
    }

    if (var0 == 0) {
        func_02087efc((unsigned char*)arg0);
        return 0;
    }

    arg0->unknown_5a_5_ = var0;
    arg0->unknown_74_ = 5;
    arg0->unknown_97_ = 0;
    arg0->unknown_14_ |= 0x20000;
    func_02088c38((unsigned char*)arg0);
    func_02088c9c((unsigned char*)arg0);
    return arg0->unknown_5a_5_;
}
