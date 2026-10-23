#include <globaldefs.h>

// USA: func_0204a00c
extern "C" ARM void func_0204a00c(unsigned char* arg0, int arg1) {
    int* var0 = *(int**)(arg0 + 0x13c);
    if (var0 != 0) {
        var0[0x1a] = arg1;
    }
}
