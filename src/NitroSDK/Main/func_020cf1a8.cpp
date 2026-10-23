#include <globaldefs.h>

extern char data_02111818;
extern "C" int func_020cf134(int arg0, void (*arg1)(int), int arg2);
extern "C" void func_020cf864(void);
extern "C" void func_020cf854(int arg0);

// USA: func_020cf1a8
extern "C" ARM int func_020cf1a8(int arg0) {
    int var0 = func_020cf134(arg0, func_020cf854, 0);
    *(int*)(&data_02111818 + 0x2c) = var0;
    if (var0 == 0) {
        func_020cf864();
    }
    return *(int*)(&data_02111818 + 0x2c);
}
