#include <globaldefs.h>

// USA: func_020120a0
extern "C" ARM void* func_020120a0(char* arg0, unsigned int arg1) {
    if (arg1 < 4) {
#if defined(jpn)
        return arg0 + 0x729e + arg1 * 8;
#else
        return arg0 + 0x74de + arg1 * 8;
#endif
    }
    return NULL;
}
