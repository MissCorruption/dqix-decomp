#include <globaldefs.h>

extern "C" int func_020ce704(int arg0, int arg1);
extern "C" void func_020ce234(int arg0, int* arg1);
extern "C" void func_020ce188(void);
extern "C" void func_020ce148(void);
extern void (*data_020f2298)(void);

// USA: func_020ce758
extern "C" ARM int func_020ce758(void) {
    int var0;
    int var1 = func_020ce704((int)func_020ce234, (int)&var0);
    if (var1 != 0) {
        return var1;
    }
    data_020f2298 = func_020ce188;
    data_020f2298();
    data_020f2298 = func_020ce148;
    return var0;
}
