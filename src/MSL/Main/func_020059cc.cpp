#include <globaldefs.h>

struct Struct_02003d58 {
    char* unknown_0_;
    int unknown_4_;
};

extern "C" int func_02003d58(Struct_02003d58* arg0, int arg1, int arg2);
extern "C" unsigned long func_020055e4(int arg0, int arg1,
                                       int (*arg2)(Struct_02003d58*, int, int),
                                       Struct_02003d58* arg3, int* arg4,
                                       int* arg5, int* arg6);

extern int data_020f3390;

// USA: func_020059cc
extern "C" ARM long func_020059cc(const char* arg0, char** arg1, int arg2) {
    unsigned long var0;
    int var1, var2, var3;
    Struct_02003d58 var4;

    var4.unknown_0_ = (char*)arg0;
    var4.unknown_4_ = 0;

    var0 = func_020055e4(arg2, 0x7fffffff, func_02003d58, &var4, &var1, &var2, &var3);

    if (arg1)
        *arg1 = (char*)arg0 + var1;

    if (var3 || (!var2 && var0 > 0x7fffffff) || (var2 && var0 > 0x80000000)) {
        var0 = var2 ? 0x80000000 : 0x7fffffff;
        data_020f3390 = 0x22;
    } else if (var2) {
        var0 = -var0;
    }

    return var0;
}
