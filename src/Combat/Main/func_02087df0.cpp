#include <globaldefs.h>

// USA: func_02087df0
extern "C" ARM void func_02087df0(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x10000;
    *(int*)(var0 + 0x58) &= ~0x1c0000;
    var0[0x74] = 0;
    var0[0x97] = 0;
}
