#include <globaldefs.h>

struct Struct_020877c0 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int unknown_58_0_ : 3;
};

extern "C" void func_02087838(void* arg0);

// USA: func_020877c0
extern "C" ARM int func_020877c0(struct Struct_020877c0* arg0, int arg1) {
    int var0 = arg0->unknown_58_0_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_02087838(arg0);
        return 0;
    }
    arg0->unknown_58_0_ = var0;
    *((unsigned char*)arg0 + 0x6e) = 5;
    *((unsigned char*)arg0 + 0x91) = 0;
    arg0->unknown_14_ |= 0x400;
    return arg0->unknown_58_0_;
}
