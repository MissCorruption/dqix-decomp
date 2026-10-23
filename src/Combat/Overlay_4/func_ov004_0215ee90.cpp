#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov004_0215ee90
extern "C" ARM void func_ov004_0215ee90(void* arg0) {
    char* var0 = (char*)arg0;
    for (int var1 = 0; var1 < 2; var1++, var0 += 0x240) {
        int var2;
        char* var3 = var0;
        for (var2 = 0; var2 < 0x1a; var2++, var3 += 0x16) {
            memset(var3, 0xff, 0xe);
            memset(var3 + 0xe, 0, 7);
            var3[0x15] = 0;
        }
        var0[0x23c] = 0;
        var0[0x23d] = 0;
        var0[0x23e] = 0;
        var0[0x23f] = 0;
    }
}
