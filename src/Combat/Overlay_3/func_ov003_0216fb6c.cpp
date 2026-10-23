// USA: func_ov003_0216fb6c
#include <globaldefs.h>

extern "C" ARM void func_ov003_0216fb6c(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 3; var0++) {
        *(int*)(arg0 + var0 * 4 + 0x1000 + 0xb68) = -1;
    }
    *(int*)(arg0 + 0x1000 + 0xb74) = 0;
}
