#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" ARM int func_020019ac(void* arg0, void* arg1);

// USA: func_020019c8
extern "C" ARM int func_020019c8(char* arg0, unsigned short* arg1, int arg2) {
    int var0 = 0;
    if (arg0 == 0 || arg1 == 0) return 0;
    char var1[4];
    do {
        unsigned short var2 = *arg1;
        if (var2 == 0) {
            arg0[var0] = 0;
            goto done;
        }
        arg1++;
        int var3 = func_020019ac(var1, (void*)(int)var2);
        if ((unsigned)(var0 + var3) > (unsigned)arg2) goto done;
        strncpy(arg0 + var0, var1, var3);
        var0 += var3;
    } while ((unsigned)var0 <= (unsigned)arg2);
done:
    return var0;
}
