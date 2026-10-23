#include <globaldefs.h>

struct Struct_02087a9c {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 9;
    int unknown_59_1_ : 3;
};

extern "C" void func_02087b14(void* arg0);

// USA: func_02087a9c
extern "C" ARM int func_02087a9c(struct Struct_02087a9c* arg0, int arg1) {
    int var0 = arg0->unknown_59_1_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_02087b14(arg0);
        return 0;
    }
    arg0->unknown_59_1_ = var0;
    *((unsigned char*)arg0 + 0x71) = 6;
    *((unsigned char*)arg0 + 0x94) = 0;
    arg0->unknown_14_ |= 0x2000;
    return arg0->unknown_59_1_;
}
