#include <globaldefs.h>

// USA: func_0204a78c
extern "C" ARM void func_0204a78c(int arg0, int arg1) {
    *(volatile unsigned int*)0x400001c = (arg0 & 0x1ff) | ((arg1 << 16) & 0x1ff0000);
}
