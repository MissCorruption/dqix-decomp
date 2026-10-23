#include <globaldefs.h>

struct Struct_020879a8 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 6;
    int unknown_58_6_ : 3;
};

extern "C" void func_02087a20(void* arg0);

// USA: func_020879a8
extern "C" ARM int func_020879a8(struct Struct_020879a8* arg0, int arg1) {
    int var0 = arg0->unknown_58_6_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_02087a20(arg0);
        return 0;
    }
    arg0->unknown_58_6_ = var0;
    *((unsigned char*)arg0 + 0x70) = 6;
    *((unsigned char*)arg0 + 0x93) = 0;
    arg0->unknown_14_ |= 0x1000;
    return arg0->unknown_58_6_;
}
