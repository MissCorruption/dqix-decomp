#include <globaldefs.h>

// USA: func_020d3d78
extern "C" ARM void* func_020d3d78(unsigned char* arg0, int arg1) {
#if defined(jpn)
    if (arg1 < *(int*)(arg0 + 0xa0)) {
#else
    if (arg1 < *(int*)(arg0 + 0xb4)) {
#endif
        #if defined(jpn)
        return arg0 + arg1 * 0x20;
#else
        return arg0 + arg1 * 0x24;
#endif
    }
    return NULL;
}
