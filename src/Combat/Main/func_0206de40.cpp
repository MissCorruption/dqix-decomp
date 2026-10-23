#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
extern "C" void func_0206ef94(unsigned char* arg0);
#define func_0206de40 func_0206ef94
#endif

// USA: func_0206de40
extern "C" ARM void func_0206de40(unsigned char* arg0) {
    int var0;
    for (var0 = 0; var0 < 5; var0++) {
        unsigned char* var1 = arg0 + var0 * 0x1c;
        var1[0] = 1;
        var1[1] = 1;
        var1[2] = 1;
        memset(var1 + 3, 0, 4);
        memset(var1 + 8, 0, 8);
        memset(var1 + 0x10, 0, 4);
        memset(var1 + 0x14, 0, 8);
    }
}
