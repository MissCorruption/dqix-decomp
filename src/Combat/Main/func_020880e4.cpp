#include <globaldefs.h>

// USA: func_020880e4
extern "C" ARM void func_020880e4(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x18) &= ~0x1;
    *(int*)(var0 + 0x58) &= ~0x7000000;
    var0[0x76] = 0;
    var0[0x99] = 0;
}
