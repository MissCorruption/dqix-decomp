#include <globaldefs.h>

// USA: func_02087838
extern "C" ARM void func_02087838(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x400;
    *(int*)(var0 + 0x58) &= ~0x7;
    var0[0x6e] = 0;
    var0[0x91] = 0;
}
