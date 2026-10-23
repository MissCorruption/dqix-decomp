#include <globaldefs.h>

// USA: func_02084e4c
extern "C" ARM unsigned int func_02084e4c(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
    unsigned int var0 = arg1 + arg2;
    if (arg1 == arg3) {
        arg2 = 0;
    } else if (arg1 > arg3) {
        arg2 = 0;
    } else if (var0 > arg3) {
        arg2 = arg3 - arg1;
    }
    return arg2;
}
