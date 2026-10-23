#include <globaldefs.h>

// USA: func_020535e0
extern "C" ARM int func_020535e0(int* arg0) {
#if defined(jpn)
    return arg0[0x5d] >= 0;
#else
    return arg0[0x60] >= 0;
#endif
}
