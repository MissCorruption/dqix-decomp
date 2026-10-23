#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02004040
extern "C" ARM char* strcat(char* arg0, const char* arg1) {
    char* var0 = arg0;
    while (*var0++ != 0) {
    }
    var0--;
    do {
        char var1 = *arg1++;
        char* var2 = var0++;
        *var2 = var1;
        if (*var2 == 0) {
            break;
        }
    } while (1);
    return arg0;
}
