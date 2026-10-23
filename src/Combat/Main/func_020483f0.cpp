#include <globaldefs.h>

// USA: func_020483f0
extern "C" ARM int func_020483f0(unsigned char* arg0, unsigned short arg1) {
    int* var0 = *(int**)(arg0 + 0x130);
    if (arg1 & var0[0]) {
        return 0;
    }
    var0[0] = (unsigned short)(var0[0] | arg1);
    return 1;
}
