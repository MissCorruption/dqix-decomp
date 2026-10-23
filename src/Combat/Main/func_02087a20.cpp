#include <globaldefs.h>

// USA: func_02087a20
extern "C" ARM void func_02087a20(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x1000;
    *(int*)(var0 + 0x58) &= ~0x1c0;
    var0[0x70] = 0;
    var0[0x93] = 0;
}
