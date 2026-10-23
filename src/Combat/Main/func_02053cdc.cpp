#include <globaldefs.h>

// USA: func_02053cdc
extern "C" ARM int func_02053cdc(int* arg0) {
#if defined(jpn)
    return arg0[0x6a] > 0 || arg0[0x6b] > 0;
#else
    return arg0[0x6d] > 0 || arg0[0x6e] > 0;
#endif
}
