#include <globaldefs.h>

// USA: func_ov025_021e8a64
extern "C" ARM void* func_ov025_021e8a64(char* arg0) {
    unsigned char var0 = *(unsigned char*)(arg0 + 0x30);
    return *(void**)(arg0 + 0x20 + var0 * 4);
}
