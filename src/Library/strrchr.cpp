#include <globaldefs.h>
#include <std_library_functions.h>

ARM char* strrchr(const char* arg0, int arg1) {
    char var0 = (char)arg1;
    char* var1 = (char*)0;
    char var2 = *arg0;
    char* var3 = (char*)arg0 + 1;
    if (var2 != 0) {
        do {
            if (var2 == var0) var1 = var3 - 1;
            var2 = *var3++;
        } while (var2 != 0);
    }
    if (var1 != 0) return var1;
    if (var0 != 0) return (char*)0;
    return var3 - 1;
}
