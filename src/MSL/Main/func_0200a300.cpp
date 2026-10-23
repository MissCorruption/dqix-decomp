#include <globaldefs.h>

typedef struct Struct_020026b4 {
    char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    struct {
        unsigned char unknown_0_;
        unsigned char unknown_1_[32];
        unsigned char unknown_21_;
    } unknown_4_;
} Struct_020026b4;

typedef struct Struct_020026b4_2 {
    char unknown_0_;
    char unknown_1_;
    short unknown_2_;
} Struct_020026b4_2;

extern "C" void func_0200a180(Struct_020026b4* arg0, double arg1);
extern "C" void func_0200966c(Struct_020026b4* arg0, int arg1);

// USA: func_0200a300
extern "C" ARM void func_0200a300(const Struct_020026b4_2* arg0, double arg1, Struct_020026b4* arg2) {
    short var0 = arg0->unknown_2_;
    int var1;

    func_0200a180(arg2, arg1);

    if (arg2->unknown_4_.unknown_1_[0] > 9)
        return;

    if (var0 > 32)
        var0 = 32;

    func_0200966c(arg2, var0);

    while (arg2->unknown_4_.unknown_0_ < var0)
        arg2->unknown_4_.unknown_1_[arg2->unknown_4_.unknown_0_++] = 0;

    arg2->unknown_2_ -= arg2->unknown_4_.unknown_0_ - 1;

    for (var1 = 0; var1 < arg2->unknown_4_.unknown_0_; var1++)
        arg2->unknown_4_.unknown_1_[var1] += '0';
}
