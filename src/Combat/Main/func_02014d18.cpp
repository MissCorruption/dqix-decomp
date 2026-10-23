#include <globaldefs.h>
#include "std_library_functions.h"

extern const char data_020ef1de[];
extern const char data_020ef1e6[];

// USA: func_02014d18
extern "C" ARM void func_02014d18(int arg0, char* arg1, char* arg2) {
    sprintf(arg2, data_020ef1de, arg0);
    char* var0 = strrchr(arg2, '.');
    if (var0 != NULL) {
        strcpy(var0 + 1, arg1);
    } else {
        strcat(arg2, data_020ef1e6);
        strcat(arg2, arg1);
    }
}
