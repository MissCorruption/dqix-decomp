#include <globaldefs.h>

// USA: func_02029470
extern "C" ARM void func_02029470(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    *(unsigned int*)0x040004a4 = arg0 | (arg1 << 4) | (arg2 << 6) | arg5 | (arg3 << 24) | (arg4 << 16);
}
