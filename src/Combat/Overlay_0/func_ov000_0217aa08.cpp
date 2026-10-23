#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020d2ff0(const char* arg0);
#if defined(jpn)
extern "C" void __clear(void* arg0, int arg1);
extern char data_ov000_021846f7[];
extern char data_ov000_021846f4[];
#endif

// USA: func_ov000_0217aa08
extern "C" ARM void func_ov000_0217aa08(char* arg0, char* arg1) {
    if (arg0 == NULL || arg1 == NULL) return;
#if !defined(jpn)
    if (arg0[0] == 0) return;
#endif
    sprintf(arg1, arg0);
    int var0 = func_020d2ff0(arg1);
#if defined(jpn)
    if (var0 <= 2) return;
    int var1 = var0 - 2;
    char var2[3];
    __clear(var2, 3);
    memcpy(var2, arg1 + var1, 2);
    if (strcmp(var2, data_ov000_021846f7) < 0) return;
    if (strcmp(var2, data_ov000_021846f4) <= 0) {
        arg1[var1] = 0;
        arg1[var1 + 1] = 0;
    }
#else
    if (var0 <= 0) return;
    if (arg1[var0 - 1] < 'A') return;
    if (arg1[var0 - 1] > 'Q') return;
    arg1[var0 - 1] = 0;
    if (arg1[var0 - 2] == ' ') arg1[var0 - 2] = 0;
#endif
}
