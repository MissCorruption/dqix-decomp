#include <globaldefs.h>

// USA: func_0208792c
extern "C" ARM void func_0208792c(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x800;
    *(int*)(var0 + 0x58) &= ~0x38;
    var0[0x6f] = 0;
    var0[0x92] = 0;
}
