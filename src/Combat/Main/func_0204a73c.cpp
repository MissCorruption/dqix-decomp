#include <globaldefs.h>

// USA: func_0204a73c
extern "C" ARM void func_0204a73c(int arg0, int arg1) {
    *(volatile unsigned int*)0x4001014 = (arg0 & 0x1ff) | ((arg1 << 0x10) & 0x1ff0000);
}
