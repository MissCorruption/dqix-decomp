#include <globaldefs.h>

// USA: func_0204a0f8
extern "C" ARM int func_0204a0f8(unsigned char* arg0) {
    int* var0 = *(int**)(arg0 + 0x13c);
    if (var0 != 0) {
        return (var0[8] & 0x400) != 0;
    }
    return 0;
}
