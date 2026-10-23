#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02003f0c
extern "C" ARM unsigned int strlen(const char* arg0) {
    unsigned int var0 = (unsigned int)-1;
    do {
        var0++;
    } while (*arg0++ != 0);
    return var0;
}
