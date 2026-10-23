#include <globaldefs.h>

struct Struct_020026b4 {
    unsigned char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    struct {
        unsigned char unknown_0_;
        unsigned char unknown_1_[32];
        unsigned char unknown_21_;
    } unknown_4_;
};

extern "C" int func_0200aa60(double arg0);
extern "C" int func_0200aa74(double arg0);
extern "C" double func_0200911c(double arg0, int* arg1);
extern "C" double func_020091d8(double arg0, int arg1);
extern "C" unsigned char func_0200a9cc(unsigned long long arg0);
extern "C" void func_02009998(Struct_020026b4* arg0, long arg1);
extern "C" void func_020096ac(Struct_020026b4* arg0, unsigned long long arg1);
extern "C" void func_02009778(Struct_020026b4* arg0, const Struct_020026b4* arg1, const Struct_020026b4* arg2);

static inline int inline_0200a180(double arg0) {
    unsigned long long var0 = *(unsigned long long*)&arg0 | 0x0010000000000000ULL;
    return func_0200a9cc((var0 & -var0) - 1);
}

// USA: func_0200a180
extern "C" ARM void func_0200a180(Struct_020026b4* arg0, double arg1) {
    char var0 = (char)(func_0200aa60(arg1) != 0);

    if (arg1 == 0) {
        arg0->unknown_0_ = var0;
        arg0->unknown_2_ = 0;
        arg0->unknown_4_.unknown_0_ = 1;
        arg0->unknown_4_.unknown_1_[0] = 0;
        return;
    }

    if (!(func_0200aa74(arg1) > 2)) {
        arg0->unknown_0_ = var0;
        arg0->unknown_2_ = 0;
        arg0->unknown_4_.unknown_0_ = 1;
        arg0->unknown_4_.unknown_1_[0] = func_0200aa74(arg1) == 1 ? 'N' : 'I';
        return;
    }

    if (var0 != 0) {
        arg1 = -arg1;
    }

    {
        int var1;
        double var2 = func_0200911c(arg1, &var1);
        int var3 = 53 - inline_0200a180(var2);
        Struct_020026b4 var4, var5;

        func_02009998(&var5, var1 - var3);
        func_020096ac(&var4, (unsigned long long)func_020091d8(var2, var3));
        func_02009778(arg0, &var4, &var5);
        arg0->unknown_0_ = var0;
    }
}
