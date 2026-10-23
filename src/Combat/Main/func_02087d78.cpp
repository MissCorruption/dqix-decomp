#include <globaldefs.h>

struct Struct_02087d78 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 18;
    int unknown_5a_2_ : 3;
};

extern "C" void func_02087df0(void* arg0);

// USA: func_02087d78
extern "C" ARM int func_02087d78(struct Struct_02087d78* arg0, int arg1) {
    int var0 = arg0->unknown_5a_2_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_02087df0(arg0);
        return 0;
    }
    arg0->unknown_5a_2_ = var0;
    *((unsigned char*)arg0 + 0x74) = 5;
    *((unsigned char*)arg0 + 0x97) = 0;
    arg0->unknown_14_ |= 0x10000;
    return arg0->unknown_5a_2_;
}
