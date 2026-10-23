#include <globaldefs.h>

// USA: func_0204a60c
extern "C" ARM void func_0204a60c(int arg0) {
    unsigned short *var0 = (unsigned short *)0x400100e;
    *var0 = (*var0 & ~3) | arg0;
}
