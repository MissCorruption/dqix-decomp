#include <globaldefs.h>

// USA: func_ov023_021ec39c
extern "C" ARM void func_ov023_021ec39c(int arg0, int arg1, int arg2, int arg3) {
    *(volatile unsigned short*)0x400100c = (unsigned short)((*(volatile unsigned short*)0x400100c & 0x43) |
        (arg0 << 14) | (arg1 << 7) | (arg2 << 8) | (arg3 << 2));
}
