#include <globaldefs.h>

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void func_0202756c(void* arg0, int arg1, int arg2, int arg3,
        unsigned char arg4, unsigned char arg5, unsigned short arg6, unsigned char arg7, int arg8, int arg9);

// USA: func_0202720c
extern "C" ARM void func_0202720c(void* arg0) {
    int var0 = 5;
    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1300;
    if (func_0202b7d8(func_0202ae18()) != 0) var0 += 0x10;
    func_0202756c(arg0, var0 << 12, 0x5000, 0x17, 0x40, 1, 0xff, 0xff, 0x1000, 0x1000);
}
