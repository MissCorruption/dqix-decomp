#include <globaldefs.h>
#include "std_library_functions.h"
extern "C" int func_020d2ff0(const char* arg0);
// USA: func_02068e1c
extern "C" char* func_02068e1c(char* arg0, char* arg1, char* arg2, char* arg3) {
    char* var0 = arg0;
    char* var1 = strstr(arg0, arg1);
    if (!var1) {
        goto done;
    }
    {
        char* var2 = strstr(var1, arg2);
        if (!var2) {
            goto done;
        }
        char* var3 = strstr(var2, arg3);
        if (!var3) {
            goto done;
        }
        var0 = var1 + func_020d2ff0(arg1);
        int var4 = func_020d2ff0(arg3);
        char* var5 = var0;
        char* var6 = var0;
        for (;;) {
            if (var6 == var2) {
                var6 = var3 + var4;
            }
            char var7 = *var6;
            *var5 = var7;
            if (var7 == 0) {
                break;
            }
            var5++;
            var6++;
        }
    }
done:
    return var0;
}
