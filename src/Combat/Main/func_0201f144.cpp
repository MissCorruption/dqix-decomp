#include <globaldefs.h>

// USA: func_0201f144
extern "C" ARM void* func_0201f144(unsigned char* arg0, int arg1) {
    if (arg1 < 0 || *(int*)(arg0 + 8) <= arg1) {
        return NULL;
    }
    return *(unsigned char**)arg0 + arg1 * 0xc;
}
