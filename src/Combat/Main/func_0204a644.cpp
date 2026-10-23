#include <globaldefs.h>

// USA: func_0204a644
extern "C" ARM void func_0204a644(int arg0) {
    unsigned short *var0 = (unsigned short *)0x400100a;
    *var0 = (*var0 & ~3) | arg0;
}
