#include <globaldefs.h>

// USA: func_0204936c
extern "C" ARM int func_0204936c(unsigned char* arg0) {
    int* var0 = *(int**)(arg0 + 0x13c);
    if (var0 == 0) return 0;
    return (var0[8] & 0x10) != 0;
}
