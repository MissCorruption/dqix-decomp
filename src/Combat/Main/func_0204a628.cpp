#include <globaldefs.h>

// USA: func_0204a628
extern "C" ARM void func_0204a628(int arg0) {
    unsigned short *var0 = (unsigned short *)0x400100c;
    *var0 = (*var0 & ~3) | arg0;
}
