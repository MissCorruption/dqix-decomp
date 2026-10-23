#include <globaldefs.h>

// USA: func_02053ccc
extern "C" ARM int func_02053ccc(unsigned char* arg0) {
#if defined(jpn)
    return *(int*)(arg0 + 0x17c);
#else
    return *(int*)(arg0 + 0x188);
#endif
}
