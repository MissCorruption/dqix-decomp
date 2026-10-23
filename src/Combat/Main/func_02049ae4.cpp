#include <globaldefs.h>

// USA: func_02049ae4
extern "C" ARM void func_02049ae4(unsigned char* arg0) {
    int* var0 = *(int**)(arg0 + 0x13c);
    if (var0 != 0) {
        var0[8] &= ~0x4;
    }
}
