#include <globaldefs.h>

// USA: func_020546a8
extern "C" ARM int func_020546a8(void* arg0) {
#if defined(jpn)
    return *(signed char*)((char*)arg0 + 0x2c4);
#else
    return *(signed char*)((char*)arg0 + 0x2d0);
#endif
}
