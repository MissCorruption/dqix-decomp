#include <globaldefs.h>

// USA: func_0207076c
extern "C" ARM void func_0207076c(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    *(volatile unsigned int*)0x40004a4 =
        arg0 | (arg1 << 4) | (arg2 << 6) | arg5 | (arg3 << 24) | (arg4 << 16);
}
