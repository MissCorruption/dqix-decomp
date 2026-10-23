#include <globaldefs.h>

// USA: func_020889b4
extern "C" ARM void func_020889b4(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x8000000;
    var0[0x62] = 0;
    var0[0x85] = 0;
}
