#include <globaldefs.h>

// USA: func_02008da4
extern "C" ARM double func_02008da4(double arg0, double arg1) {
    unsigned int var0 = ((unsigned int*)&arg0)[1];
    unsigned int var1 = ((unsigned int*)&arg1)[1];
    ((unsigned int*)&arg0)[1] = (var0 & 0x7fffffffu) | (var1 & 0x80000000u);
    return arg0;
}
