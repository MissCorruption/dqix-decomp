#include <globaldefs.h>

// USA: func_0202006c
extern "C" ARM void func_0202006c(unsigned char* arg0, int arg1) {
    int var0;
    if (arg1 < 0) var0 = 0xf;
    else var0 = 1 << arg1;
    arg0[0x55e] = var0;
}
