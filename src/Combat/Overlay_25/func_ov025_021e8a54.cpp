#include <globaldefs.h>

// USA: func_ov025_021e8a54
extern "C" ARM void* func_ov025_021e8a54(char* arg0) {
    unsigned char var0 = *(unsigned char*)(arg0 + 0x30);
    return *(void**)(arg0 + 0x10 + var0 * 4);
}
