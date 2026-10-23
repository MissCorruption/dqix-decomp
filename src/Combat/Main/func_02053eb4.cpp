#include <globaldefs.h>

// USA: func_02053eb4
extern "C" ARM unsigned char func_02053eb4(void* arg0, int arg1) {
#if defined(jpn)
    return *((unsigned char*)arg0 + arg1 + 0x194);
#else
    return *((unsigned char*)arg0 + arg1 + 0x1a0);
#endif
}
