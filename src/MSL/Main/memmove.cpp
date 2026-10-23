#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02001a60
extern "C" ARM void* memmove(void* arg0, const void* arg1, unsigned int arg2) {
    if ((const char*)arg1 >= (const char*)arg0) {
        char* var0 = (char*)arg0;
        const char* var1 = (const char*)arg1;
        if (arg2 != 0) {
            do {
                *var0++ = *var1++;
            } while (--arg2);
        }
        return arg0;
    }
    const char* var2 = (const char*)arg1 + arg2;
    char* var3 = (char*)arg0 + arg2;
    if (arg2 != 0) {
        do {
            *--var3 = *--var2;
        } while (--arg2);
    }
    return arg0;
}
