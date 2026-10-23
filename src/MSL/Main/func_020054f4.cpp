#include <globaldefs.h>

#define INT_MAX 0x7fffffff
#define ERANGE  34
#define LDBL_MIN 2.2250738585072014e-308
#define LDBL_MAX 1.7976931348623157e+308

typedef struct {
    char* unknown_0_;
    int unknown_4_;
} Struct_020054f4;

extern "C" int func_02003d58(void* arg0, int arg1, int arg2);
extern "C" long double func_020042a8(int arg0, int (*arg1)(void*, int, int), void* arg2,
                                     int* arg3, int* arg4);
extern "C" double func_02008f3c(double arg0);
extern int data_020f3390;

// USA: func_020054f4
extern "C" ARM long double func_020054f4(const char* arg0, char** arg1) {
    long double var0, var1;
    int var2, var3;
    Struct_020054f4 var4;

    var4.unknown_0_ = (char*)arg0;
    var4.unknown_4_ = 0;

    var0 = func_020042a8(INT_MAX, &func_02003d58, (void*)&var4, &var2, &var3);

    if (arg1)
        *arg1 = (char*)arg0 + var2;

    var1 = func_02008f3c(var0);

    if (var3 || (var0 != 0.0 && (var1 < LDBL_MIN || var1 > LDBL_MAX)))
        data_020f3390 = ERANGE;

    return var0;
}
