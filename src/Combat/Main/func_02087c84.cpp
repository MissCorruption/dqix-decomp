#include <globaldefs.h>

struct Struct_02087c84 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 15;
    int unknown_59_7_ : 3;
};

extern "C" void func_02087cfc(void* arg0);

// USA: func_02087c84
extern "C" ARM int func_02087c84(struct Struct_02087c84* arg0, int arg1) {
    int var0 = arg0->unknown_59_7_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_02087cfc(arg0);
        return 0;
    }
    arg0->unknown_59_7_ = var0;
    *((unsigned char*)arg0 + 0x73) = 5;
    *((unsigned char*)arg0 + 0x96) = 0;
    arg0->unknown_14_ |= 0x8000;
    return arg0->unknown_59_7_;
}
