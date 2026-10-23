#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_020041b8
extern "C" ARM char* strchr(const char* arg0, int arg1) {
    char var0 = (char)arg1;
    char var1 = *arg0++;
    if (var1 != 0) {
        do {
            if (var1 == var0) {
                return (char*)arg0 - 1;
            }
            var1 = *arg0++;
        } while (var1 != 0);
    }
    return (var0 != 0) ? (char*)0 : (char*)arg0 - 1;
}
