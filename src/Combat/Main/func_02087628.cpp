#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02087628
extern "C" ARM void func_02087628(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 3; var0++) {
        memset(arg0 + 0xf2c + var0 * 0x14, 0, 0x14);
        *(char*)(arg0 + 0xf3c + var0 * 0x14) = -1;
    }
}
