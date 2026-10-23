#include <globaldefs.h>

// USA: func_ov015_0219322c
extern "C" ARM void* func_ov015_0219322c(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        if (*(unsigned char*)(arg0 + var0 * 8 + 0xe8) == 0)
            return arg0 + 0xe4 + var0 * 8;
    }
    return NULL;
}
