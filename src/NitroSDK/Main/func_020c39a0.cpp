#include <globaldefs.h>

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

// USA: func_020c39a0
extern "C" ARM void func_020c39a0(short* out, int value) {
    if (value == 0) {
        *out = 0;
    } else if (value > 0) {
        *out = value | 0x4000;
    } else {
        *out = (-value) | 0x8000;
    }
}
