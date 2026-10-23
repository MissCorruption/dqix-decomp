#include <globaldefs.h>

// USA: func_ov015_02193260
extern "C" ARM void* func_ov015_02193260(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        if (*(unsigned char*)(arg0 + var0 * 8 + 0x108) == 0)
            return arg0 + 0x104 + var0 * 8;
    }
    return NULL;
}
