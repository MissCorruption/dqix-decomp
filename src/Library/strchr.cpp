#include <globaldefs.h>
#include <std_library_functions.h>

ARM char* strchr(const char* arg0, int arg1) {
    char var0 = *arg0++;
    char var1 = (char)arg1;
    if (var0 != 0) {
        do {
            if (var0 == var1) return (char*)(arg0 - 1);
            var0 = *arg0++;
        } while (var0 != 0);
    }
    if (var1 != 0) return (char*)0;
    return (char*)(arg0 - 1);
}
