#include <globaldefs.h>

// USA: func_02010750
extern "C" ARM unsigned char func_02010750(char* arg0) {
#if defined(jpn)
    return *(unsigned char*)(arg0 + 0x54c9);
#else
    return *(unsigned char*)(arg0 + 0x5729);
#endif
}
