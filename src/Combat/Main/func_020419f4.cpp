#include <globaldefs.h>

// USA: func_020419f4
extern "C" ARM void func_020419f4(int arg0, int arg1) {
    *(volatile unsigned int*)0x4000488 =
        (unsigned short)(short)(arg0 >> 8) | ((unsigned short)(short)(arg1 >> 8) << 16);
}
