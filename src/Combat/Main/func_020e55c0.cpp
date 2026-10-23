#include <globaldefs.h>
#include "std_library_functions.h"

extern const char data_020f2e20[];
extern const char data_020f2e25[];

// USA: func_020e55c0
extern "C" ARM int func_020e55c0(char* arg0, const char* arg1) {
    if (!arg0 || !arg1) return 0;
    sprintf(arg0, arg1);
    char* var0 = strstr(arg0, data_020f2e20);
    if (var0) strcpy(var0, data_020f2e25);
    return 1;
}
