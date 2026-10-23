#include <globaldefs.h>

// USA: func_020881ac
extern "C" ARM void func_020881ac(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x14) &= ~0x1000000;
    var0[0x24] = 0;
}
