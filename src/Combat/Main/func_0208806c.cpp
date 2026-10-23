#include <globaldefs.h>

struct Struct_0208806c {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
    char unknown_1c_[0x3c];
    int : 24;
    int unknown_5b_0_ : 3;
};

extern "C" void func_020880e4(void* arg0);

// USA: func_0208806c
extern "C" ARM int func_0208806c(struct Struct_0208806c* arg0, int arg1) {
    int var0 = arg0->unknown_5b_0_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_020880e4(arg0);
        return 0;
    }
    arg0->unknown_5b_0_ = var0;
    *((unsigned char*)arg0 + 0x76) = 5;
    *((unsigned char*)arg0 + 0x99) = 0;
    arg0->unknown_18_ |= 0x1;
    return arg0->unknown_5b_0_;
}
