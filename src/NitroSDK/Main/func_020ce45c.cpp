#include <globaldefs.h>

extern "C" void func_020ce39c(unsigned int *arg0, int arg1);
extern "C" int func_020ceba8(int arg0, int arg1, int arg2, int arg3);

// USA: func_020ce45c
extern "C" ARM int func_020ce45c(int arg0, int arg1) {
    unsigned int var0[2];
    var0[0] = 0x3006000;
    func_020ce39c(var0, 1);
    while (func_020ceba8(0, 2, 0, 1) != 1) {}
    var0[0] = (arg0 & 0xff) | 0x6200 | 0x2000000;
    var0[1] = 0x1010000 | (unsigned short)arg1;
    func_020ce39c(var0, 2);
    return 0;
}
