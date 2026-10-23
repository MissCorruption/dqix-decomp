#include <globaldefs.h>

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

// USA: func_020c39a0
extern "C" ARM void func_020c39a0(short* arg0, int arg1) {
    if (arg1 == 0) {
        *arg0 = 0;
    } else if (arg1 > 0) {
        *arg0 = arg1 | 0x4000;
    } else {
        *arg0 = (-arg1) | 0x8000;
    }
}
