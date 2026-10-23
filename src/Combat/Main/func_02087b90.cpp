#include <globaldefs.h>

struct Struct_02087b90 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 12;
    int unknown_59_4_ : 3;
};

extern "C" void func_02087c08(void* arg0);

// USA: func_02087b90
extern "C" ARM int func_02087b90(struct Struct_02087b90* arg0, int arg1) {
    int var0 = arg0->unknown_59_4_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_02087c08(arg0);
        return 0;
    }
    arg0->unknown_59_4_ = var0;
    *((unsigned char*)arg0 + 0x72) = 5;
    *((unsigned char*)arg0 + 0x95) = 0;
    arg0->unknown_14_ |= 0x4000;
    return arg0->unknown_59_4_;
}
