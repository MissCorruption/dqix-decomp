#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov000_02170c7c(void* arg0);
extern "C" void func_0204bc08(void* arg0, int arg1, int arg2, void* arg3, int arg4);
extern short data_ov000_021833a0[];

// USA: func_ov000_021750e4
extern "C" ARM void func_ov000_021750e4(char* arg0) {
    char* var0;
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        int var2;
        signed char var3 = *(signed char*)(arg0 + var1 + 0x6c);
#if defined(jpn)
        enum { Enum_ov000_021750e4_1096 = 0x488 };
#else
        enum { Enum_ov000_021750e4_1096 = 0x448 };
#endif
        var0 = arg0 + 0x958 + var3 * Enum_ov000_021750e4_1096;
        int var4 = *(int*)(var0 + 0x4c);
        int var5 = (var4 >= 0 && var4 <= 3) ? 1 : 0;
        if (!var5) continue;
        var2 = 0;
        int var6 = func_ov000_02170c7c(var0);
        switch (var6) {
        case 4: var2 = 1; break;
        case 5: var2 = 2; break;
        case 6: var2 = 3; break;
        }
        memcpy(*(void**)(arg0 + 0x178), &data_ov000_021833a0[var2], 2);
        func_0204bc08(arg0 + 0x8c4, var4 + 2, 0xa, *(void**)(arg0 + 0x178), 2);
    }
}
