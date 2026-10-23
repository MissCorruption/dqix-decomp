#include <globaldefs.h>

extern "C" int func_020cf1e0(void*, void*, void(*)(int), int);
extern "C" void func_020cf864(void);
extern "C" void func_020cf854(int arg0);

extern char data_02111818;

// USA: func_020cf25c
extern "C" ARM int func_020cf25c(void* arg0, void* arg1) {
    int var0 = func_020cf1e0(arg0, arg1, func_020cf854, 0);
    *(int*)(&data_02111818 + 0x2c) = var0;
    if (var0 == 0) {
        func_020cf864();
    }
    return *(int*)(&data_02111818 + 0x2c);
}
