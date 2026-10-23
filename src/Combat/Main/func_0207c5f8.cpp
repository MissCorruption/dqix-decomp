#include <globaldefs.h>

// USA: func_0207c5f8
extern "C" ARM void* func_0207c5f8(unsigned char* arg0, unsigned int arg1) {
    if (arg1 > 7) {
        return NULL;
    }
    return *(void**)(arg0 + arg1 * 4 + 0xbd0);
}
