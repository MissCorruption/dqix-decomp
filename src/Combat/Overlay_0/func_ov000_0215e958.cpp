#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov000_0215e958
extern "C" ARM void* func_ov000_0215e958(char* arg0) {
    int var0 = *(unsigned char*)(arg0 + 0x8e02);
    if (var0 >= 0x168) {
        return 0;
    }
    char* var1 = arg0 + 0x21e0 + var0 * 0x24;
    memset(var1, 0, 0x20);
    *(int*)(var1 + 0x20) = 0;
    return arg0 + 0x21e0 + *(unsigned char*)(arg0 + 0x8e02) * 0x24;
}
