#include <globaldefs.h>

// USA: func_0204a804
extern "C" ARM void func_0204a804(int arg0, int arg1) {
    *(volatile unsigned int*)0x4000010 = (arg0 & 0x1ff) | ((arg1 << 16) & 0x1ff0000);
}
