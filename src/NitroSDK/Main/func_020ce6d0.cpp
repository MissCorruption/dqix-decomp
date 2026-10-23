#include <globaldefs.h>

extern "C" int func_020ce648(int arg0, int arg1, void (*arg2)(void), int *arg3);
extern "C" void func_020ce234(void);
extern void (*data_020f2298)(void);

// USA: func_020ce6d0
extern "C" ARM int func_020ce6d0(int arg0, int arg1) {
    int var0;
    int var1 = func_020ce648(arg0, arg1, func_020ce234, &var0);
    if (var1 != 0) return var1;
    data_020f2298();
    return var0;
}
