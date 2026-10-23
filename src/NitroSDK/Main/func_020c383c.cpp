#include <globaldefs.h>

// USA: func_020c383c
extern "C" ARM void func_020c383c(int lyc) {
    volatile unsigned short* dispstat = (volatile unsigned short*)0x4000004;
    *dispstat = (*dispstat & 0x3f) | ((lyc & 0xff) << 8) | ((lyc & 0x100) >> 1);
}
