#include <globaldefs.h>

// USA: func_02053c6c
extern "C" ARM int func_02053c6c(unsigned char* arg0) {
#if defined(jpn)
    return *(int*)(arg0 + 0x144);
#else
    return *(int*)(arg0 + 0x150);
#endif
}
