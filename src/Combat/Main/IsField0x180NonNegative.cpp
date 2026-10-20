#include <globaldefs.h>

// USA: func_020535e0
ARM int IsField0x180NonNegative_020535e0(int* obj) {
#if defined(jpn)
    return obj[0x5d] >= 0;
#else
    return obj[0x60] >= 0;
#endif
}
