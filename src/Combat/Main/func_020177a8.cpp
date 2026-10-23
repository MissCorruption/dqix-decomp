#include <globaldefs.h>

// USA: func_020177a8
extern "C" ARM void* func_020177a8(unsigned char* arg0, int arg1) {
#if defined(jpn)
    if (arg1 < 0 || arg0[0x497] <= arg1) {
#else
    if (arg1 < 0 || arg0[0x477] <= arg1) {
#endif
        return NULL;
    }
#if defined(jpn)
    return *(unsigned char**)(arg0 + 0x49c) + arg1 * 0x24;
#else
    return *(unsigned char**)(arg0 + 0x47c) + arg1 * 0x24;
#endif
}
