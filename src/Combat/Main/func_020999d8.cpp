#include <globaldefs.h>

// USA: func_020999d8
extern "C" ARM void* func_020999d8(unsigned char* arg0, unsigned int arg1) {
    if (*(unsigned int*)(arg0 + 4) <= arg1) {
        return NULL;
    }
    return *(unsigned char**)arg0 + arg1 * 0x10;
}
