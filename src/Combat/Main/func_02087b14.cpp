#include <globaldefs.h>

// USA: func_02087b14
extern "C" ARM void func_02087b14(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x2000;
    *(int*)(var0 + 0x58) &= ~0xe00;
    var0[0x71] = 0;
    var0[0x94] = 0;
}
