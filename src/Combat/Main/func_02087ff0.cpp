#include <globaldefs.h>

// USA: func_02087ff0
extern "C" ARM void func_02087ff0(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x2000000;
    *(int*)(var0 + 0x58) &= ~0x38000000;
    var0[0x77] = 0;
    var0[0x9a] = 0;
}
