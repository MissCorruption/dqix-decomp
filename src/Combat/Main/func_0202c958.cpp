#include <globaldefs.h>

extern char data_021015a0;
extern "C" int func_020d5204(int arg0);
extern "C" void func_0202c848(int arg0);
extern "C" void func_0202c9ac(void);

// USA: func_0202c958
extern "C" ARM int func_0202c958(void) {
    int var0 = *(int*)(&data_021015a0 + 0x10);
    if ((unsigned int)(var0 - 4) <= 2) {
        return 1;
    }
    int var1 = func_020d5204((int)func_0202c9ac);
    if (var1 != 2) {
        func_0202c848(var1);
        return 0;
    }
    *(short*)(&data_021015a0 + 0x0) = 0;
    *(short*)(&data_021015a0 + 0xa) = 1;
    return 1;
}
