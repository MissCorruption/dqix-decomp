#include <globaldefs.h>

// USA: func_0204a7b4
extern "C" ARM void func_0204a7b4(int arg0, int arg1) {
    *(volatile unsigned int*)0x4000018 = (arg0 & 0x1ff) | ((arg1 << 16) & 0x1ff0000);
}
