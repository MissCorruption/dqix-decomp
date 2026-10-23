#include <globaldefs.h>


// USA: func_020c5680
extern "C" ARM int func_020c5680(int* out) {
    volatile unsigned int* gxstat = (volatile unsigned int*)0x4000600;
    if (*gxstat & 0x4000) return -1;
    *out = (*gxstat & 0x2000) >> 13;
    return 0;
}
