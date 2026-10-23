#include <globaldefs.h>

struct Struct_0200dad4_2 {
    char* unknown_0_;
    unsigned long unknown_4_;
    char* unknown_8_;
};

struct Struct_0200dad4 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    Struct_0200dad4_2* unknown_c_;
    Struct_0200dad4_2* unknown_10_;
    int unknown_14_;
};

extern "C" int func_0200f29c(Struct_0200dad4* arg0, char* arg1);
extern "C" Struct_0200dad4_2* func_0200da70(Struct_0200dad4_2* arg0, unsigned long arg1,
                                           char* arg2);
extern "C" char* func_0200f2bc(char* arg0);
extern "C" char* func_0200d9e4(char* arg0, unsigned long* arg1);

// USA: func_0200dad4
extern "C" ARM void func_0200dad4(char* arg0, Struct_0200dad4* arg1) {
    Struct_0200dad4_2* var0;
    char* var1;
    unsigned long var2;
    unsigned long var3;
    unsigned long var4;
    unsigned long var5;
    unsigned long var6;

    arg1->unknown_4_ = 0;
    arg1->unknown_8_ = 0;

    if (!func_0200f29c(arg1, arg0))
        return;

    if (!(var0 = func_0200da70(arg1->unknown_c_,
                                         arg1->unknown_10_ - arg1->unknown_c_, arg0)))
        return;

    if ((var0->unknown_4_ & 1) != 0)
        arg1->unknown_4_ = (char*)&var0->unknown_8_;
    else
        arg1->unknown_4_ = var0->unknown_8_;

    arg1->unknown_0_ = var0->unknown_0_;
    var2 = arg0 - var0->unknown_0_;

    var1 = func_0200f2bc(arg1->unknown_4_);

    for (var3 = 0;;) {
        var1 = func_0200d9e4(var1, &var4);
        if (var4 == 0)
            return;
        var1 = func_0200d9e4(var1, &var5);
        var1 = func_0200d9e4(var1, &var6);
        var3 += var4;
        if (var2 < var3)
            return;
        var3 += var5;
        if (var2 <= var3)
            break;
    }

    arg1->unknown_8_ = arg1->unknown_4_ + var6;
}
