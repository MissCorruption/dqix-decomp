#include <globaldefs.h>

struct Struct_0205d0e0 {
    char unknown_0_[0xc2];
    unsigned short unknown_c2_;
    char unknown_c4_[0xe0 - 0xc4];
};

struct Struct_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct Struct_0205d0e0* unknown_9c_;
    char unknown_a0_[0xe0 - 0xa0];
};

extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c*, int);

// USA: func_0205deb4
extern "C" ARM void func_0205deb4(struct Struct_0205d81c* arg0, int arg1, int arg2) {
    struct Struct_0205d0e0* var0;
    if (arg0->unknown_98_ == 0 || arg0->unknown_9c_ == 0) return;
    var0 = func_0205d81c(arg0, arg1);
    if (var0 != 0) {
        unsigned short var1 = arg2 & 0xf;
        var0->unknown_c2_ = var1 & 0xf;
    }
}
