#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02001a40
extern "C" ARM void* memcpy(void* arg0, void* arg1, unsigned int arg2) {
    char* var0 = (char*)arg0;
    char* var1 = (char*)arg1;
    if (arg2 != 0) {
        do {
            *var0++ = *var1++;
        } while (--arg2);
    }
    return arg0;
}
