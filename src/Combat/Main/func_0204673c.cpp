#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0204673c
extern "C" char* func_0204673c(char* arg0, char* arg1) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (arg1 == NULL) {
        return NULL;
    }
    if (arg1[0] == 0) {
        return NULL;
    }

    char* var0 = arg1;
    char* var1 = arg1;
    while (*var0 != 0) {
        if (*var0 == '/') {
            var1 = var0 + 1;
        }
        var0++;
    }

    while (arg0[0] != 0) {
        if (strcmp(arg0, var1) == 0) {
            return arg0;
        }
        arg0 += *(int*)(arg0 + 0x48);
    }
    return NULL;
}
