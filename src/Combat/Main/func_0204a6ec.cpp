#include <globaldefs.h>

// USA: func_0204a6ec
extern "C" ARM void func_0204a6ec(int arg0, int arg1) {
    *(volatile unsigned int*)0x400101c = (arg0 & 0x1ff) | ((arg1 << 0x10) & 0x1ff0000);
}
