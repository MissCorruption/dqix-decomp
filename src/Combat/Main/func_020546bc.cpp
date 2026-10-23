#include <globaldefs.h>

// USA: func_020546bc
extern "C" ARM int func_020546bc(void* arg0) {
#if defined(jpn)
    return *(signed char*)((char*)arg0 + 0x2c5);
#else
    return *(signed char*)((char*)arg0 + 0x2d1);
#endif
}
