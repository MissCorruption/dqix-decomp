#include <globaldefs.h>

// USA: func_02039d7c
extern "C" ARM unsigned char func_02039d7c(char* arg0) {
#if defined(jpn)
    return arg0[0x260];
#else
    return arg0[0x26c];
#endif
}
