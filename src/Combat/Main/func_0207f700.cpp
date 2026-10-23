#include <globaldefs.h>

// USA: func_0207f700
extern "C" ARM void* func_0207f700(unsigned char* arg0, short arg1) {
    if (arg1 < 0) {
        return NULL;
    }
    if (*(short*)(arg0 + 4) <= arg1) {
        return NULL;
    }
    return *(unsigned char**)arg0 + arg1 * 0x30;
}
