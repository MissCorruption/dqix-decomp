#include <globaldefs.h>

// USA: func_020a2cd8
extern "C" ARM void func_020a2cd8(unsigned char* arg0, int arg1) {
    if (arg1 != 0) {
        arg0[0x245] |= 2;
    } else {
        arg0[0x245] &= ~2;
    }
}
