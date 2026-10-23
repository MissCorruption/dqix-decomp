#include <globaldefs.h>

// USA: func_020883fc
extern "C" ARM void func_020883fc(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x20;
    var0[0x5e] = 0;
    var0[0x81] = 0;
}
