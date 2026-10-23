#include <globaldefs.h>

// USA: func_0203f1c8
extern "C" ARM void* func_0203f1c8(unsigned char* arg0, unsigned int arg1) {
    if (*(unsigned int*)(arg0 + 0x18) <= arg1) {
        return NULL;
    }
    return *(unsigned char**)(arg0 + 0x1c) + arg1 * 0x14;
}
