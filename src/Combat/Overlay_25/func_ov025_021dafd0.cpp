#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021dafd0_1096 = 0x488 };
#else
enum { Enum_ov025_021dafd0_1096 = 0x448 };
#endif

// USA: func_ov025_021dafd0
extern "C" ARM void* func_ov025_021dafd0(char* arg0, int arg1) {
    int var0;
    if (arg1 < 0) goto zero;
    if (arg1 <= 3) { var0 = 1; goto check; }
zero:
    var0 = 0;
check:
    if (var0 == 0) goto fail;
    for (int var1 = 0; var1 < 4; var1++) {
        int var2 = *(int*)(arg0 + var1 * Enum_ov025_021dafd0_1096 + 0x9a4);
        if (arg1 == var2) {
            return arg0 + 0x958 + var1 * Enum_ov025_021dafd0_1096;
        }
    }
fail:
    return NULL;
}
