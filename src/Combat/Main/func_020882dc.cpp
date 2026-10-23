#include <globaldefs.h>

// USA: func_020882dc
extern "C" ARM void func_020882dc(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x8;
    var0[0x5c] = 0;
    var0[0x7f] = 0;
}
