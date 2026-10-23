#include <globaldefs.h>

// USA: func_ov023_021e616c
extern "C" ARM void func_ov023_021e616c(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 0xa; var0++) {
        *(short*)(arg0 + var0 * 0xac + 0x2) = -1;
    }
}
