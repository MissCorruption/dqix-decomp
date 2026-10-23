#include <globaldefs.h>

// USA: func_0208b548
// USA: func_0208b548
extern "C" ARM void func_0208b548(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, unsigned int arg7) {
    *(volatile unsigned int*)0x040004a8 = (arg7 >> 3) | (arg0 << 26) | (arg1 << 30) | (arg2 << 20) | (arg3 << 23) | (arg4 << 16) | (arg5 << 18) | (arg6 << 29);
}
