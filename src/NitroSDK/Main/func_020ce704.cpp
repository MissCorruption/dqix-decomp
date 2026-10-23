#include <globaldefs.h>

extern "C" void func_020cef94(int arg0);
extern "C" int func_020ce4e8(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020ce1d8(void);
extern void (*data_020f2298)(void);

// USA: func_020ce704
extern "C" ARM int func_020ce704(int arg0, int arg1) {
    void (*var0)(void) = data_020f2298;
    data_020f2298 = func_020ce1d8;
    func_020cef94(arg0);
    data_020f2298 = var0;
    return func_020ce4e8(0xe, 0, 0, arg0, arg1);
}
