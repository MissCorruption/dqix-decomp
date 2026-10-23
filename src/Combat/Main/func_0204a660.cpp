#include <globaldefs.h>

// USA: func_0204a660
extern "C" ARM void func_0204a660(int arg0) {
    unsigned short *var0 = (unsigned short *)0x4001008;
    *var0 = (*var0 & ~3) | arg0;
}
