#include <globaldefs.h>

// USA: func_ov015_021931f8
extern "C" ARM void* func_ov015_021931f8(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        if (*(unsigned char*)(arg0 + var0 * 8 + 0xc8) == 0)
            return arg0 + 0xc4 + var0 * 8;
    }
    return NULL;
}
