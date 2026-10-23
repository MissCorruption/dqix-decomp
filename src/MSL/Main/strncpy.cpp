#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02003ff0
extern "C" ARM char* strncpy(char* arg0, const char* arg1, unsigned int arg2) {
    char* var0 = arg0;
    if (arg2 != 0) {
        for (;;) {
            char var1 = *arg1++;
            char* var2 = var0;
            *var0++ = var1;
            if (*var2 == 0) {
                if (--arg2 != 0) {
                    do {
                        *var0++ = 0;
                    } while (--arg2);
                }
                break;
            }
            if (--arg2 == 0) {
                break;
            }
        }
    }
    return arg0;
}
