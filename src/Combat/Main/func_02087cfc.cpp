#include <globaldefs.h>

// USA: func_02087cfc
extern "C" ARM void func_02087cfc(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x8000;
    *(int*)(var0 + 0x58) &= ~0x38000;
    var0[0x73] = 0;
    var0[0x96] = 0;
}
