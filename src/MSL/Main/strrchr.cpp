#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_020041f4
extern "C" ARM char* strrchr(const char* arg0, int arg1) {
    char var0 = (char)arg1;
    char* var1 = (char*)arg0 + 1;
    char* var2 = (char*)0;
    char var3 = *arg0;
    if (var3 != 0) {
        do {
            if (var3 == var0) {
                var2 = var1 - 1;
            }
            var3 = *var1++;
        } while (var3 != 0);
    }
    if (var2 != 0) {
        return var2;
    }
    return (var0 != 0) ? (char*)0 : var1 - 1;
}
