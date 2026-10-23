#include <globaldefs.h>

extern "C" void func_020ce234();
extern "C" int func_020ce4e8(int arg0, int arg1, int arg2, void* arg3, int* arg4);
extern void (*data_020f2298)();

// USA: func_020ce56c
extern "C" ARM int func_020ce56c(int arg0, int arg1, int arg2) {
    int var0;
    int var1 = func_020ce4e8(arg0, arg1, arg2, (void*)func_020ce234, &var0);
    if (var1 != 0) {
        return var1;
    }
    data_020f2298();
    return var0;
}
