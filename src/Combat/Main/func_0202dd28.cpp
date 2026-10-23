#include <globaldefs.h>

extern "C" int func_020d5f88(void* arg0);
extern "C" void func_0202c848(int arg0);
extern "C" int func_020d5004(int arg0);
extern "C" void func_0202d614(unsigned short* arg0);

extern char data_021015a0;
extern char data_02102be0;

// USA: func_0202dd28
extern "C" ARM void func_0202dd28(void) {
    if (*(int*)(&data_021015a0 + 0x10) == 5) {
        int var0 = func_020d5f88(&data_02102be0);
        if (var0) {
            func_0202c848(var0);
        }
    }

    *(int*)(&data_021015a0 + 0x10) = 3;
    int var1 = func_020d5004((int)func_0202d614);
    if (var1 == 2) {
        var1 = 1;
    } else {
        func_0202c848(var1);
        var1 = 0;
    }

    if (var1 == 0) {
        *(int*)(&data_021015a0 + 0x10) = 10;
    }
}
