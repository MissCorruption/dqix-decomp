#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02004184
extern "C" ARM int strncmp(const char* arg0, const char* arg1, unsigned int arg2) {
    if (arg2 != 0) {
        do {
            unsigned char var0 = (unsigned char)*arg1++;
            unsigned char var1 = (unsigned char)*arg0++;
            if (var1 != var0) {
                return (int)var1 - (int)var0;
            }
            if (var1 == 0) {
                break;
            }
        } while (--arg2);
    }
    return 0;
}
