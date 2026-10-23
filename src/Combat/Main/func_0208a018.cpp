#include <globaldefs.h>

// USA: func_0208a018
extern "C" ARM void* func_0208a018(unsigned char* arg0, int arg1) {
    unsigned char* var0 = *(unsigned char**)arg0;
    if (var0 == 0) {
        return NULL;
    }
    if (*(short*)(arg0 + 4) <= arg1) {
        return NULL;
    }
    return var0 + arg1 * 0x40;
}
