#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/GameResources.h"

// USA: func_ov003_02160344
#if defined(jpn)
extern "C" ARM void func_ov003_02160344(char* arg0) {
    char* var0 = (char*)GetGameResources() + 0x13c;
    int var1 = 0;
    var0 = var0 + 0x4000;
    for (; var1 < 4; var1++) {
        int* var2 = *(int**)(arg0 + 0x27c);
        if (var2 == 0) return;
        int var3 = var2[var1];
        if (var3 == 0) continue;
        char* var4 = var0 + var1 * 0xc;
        if (var4 != 0) {
            memcpy(var4, (const void*)var3, 0xc);
        }
    }
}
#else
extern "C" ARM void func_ov003_02160344(char* arg0) {
    char* var5 = (char*)GetGameResources() + 0x35c;
    int var6 = 0;
    var5 = var5 + 0x4000;
    for (; var6 < 4; var6++) {
        int* var7 = *(int**)(arg0 + 0x394);
        if (var7 == 0) return;
        int var8 = var7[var6];
        if (var8 == 0) continue;
        char* var9 = var5 + var6 * 0x30;
        if (var9 != 0) {
            sprintf(var9, (const char*)var8);
        }
    }
}
#endif
