#include <globaldefs.h>

// USA: func_02087c08
extern "C" ARM void func_02087c08(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x4000;
    *(int*)(var0 + 0x58) &= ~0x7000;
    var0[0x72] = 0;
    var0[0x95] = 0;
}
