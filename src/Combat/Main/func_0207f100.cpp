#include <globaldefs.h>

// USA: func_0207f100
extern "C" ARM void* func_0207f100(unsigned char* arg0, short arg1) {
    if (arg1 < 0) {
        return NULL;
    }
    if (*(short*)(arg0 + 0x4) <= arg1) {
        return NULL;
    }
    return *(unsigned char**)(arg0 + 0x0) + arg1 * 0x18;
}
