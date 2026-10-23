#include <globaldefs.h>
#include <std_library_functions.h>

ARM int strncmp(const char* arg0, const char* arg1, unsigned int arg2) {
    if (arg2 != 0) {
        do {
            unsigned char var0 = *arg1++;
            unsigned char var1 = *arg0++;
            if (var1 != var0) return var1 - var0;
            if (var1 == 0) break;
        } while (--arg2);
    }
    return 0;
}
