#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0209f864
extern "C" ARM void func_0209f864(char* arg0, int arg1) {
    int var0 = 0x40;
    if (arg1 == 0) {
        int var1;
        int var2;
        *(int*)(arg0 + 0x98) = 0;
        var1 = *(unsigned char*)(*(char**)(arg0 + 4) + 0x8e07);
        for (var2 = 0; var2 < var1; var2++) {
            char* var3 = *(char**)(arg0 + 4) + 0x5c60 + var2 * var0;
            if (var3 != 0 && (*(unsigned char*)(var3 + 0x25) != 0 || *(unsigned char*)(var3 + 0x26) != 0)) {
                int var4 = *(int*)(arg0 + 0x98);
                *(int*)(arg0 + 0x98) += 1;
                memcpy(arg0 + 0x9c + var4 * var0, var3, var0);
            }
        }
        return;
    }
    *(int*)(arg0 + 0x49c) = 0;
    memset(arg0 + 0x4a0, 0, 0x400);
    {
        char* var5 = arg0 + 0x9c;
        int var6;
        for (var6 = 0; var6 < *(int*)(arg0 + 0x98); var6++) {
            char* var7 = var5 + var6 * var0;
            if (*(unsigned char*)(var7 + 0x25) != 0 || *(unsigned char*)(var7 + 0x26) != 0) {
                int var8 = *(int*)(arg0 + 0x49c);
                int var9 = *(int*)(var5 + 0x400);
                *(int*)(var5 + 0x400) = var9 + 1;
                memcpy(arg0 + 0x4a0 + var8 * var0, var7, var0);
            }
        }
    }
    *(int*)(arg0 + 0x98) = *(int*)(arg0 + 0x49c);
    memcpy(arg0 + 0x9c, arg0 + 0x4a0, 0x400);
}
