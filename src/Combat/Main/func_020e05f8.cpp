#include <globaldefs.h>
#if defined(jpn)
#define data_020f2b6c data_020f2cc4
#define data_020f2b71 data_020f2cc9
#endif
#include "std_library_functions.h"

extern const char data_020f2b6c[];
extern const char data_020f2b71[];

// USA: func_020e05f8
extern "C" ARM int func_020e05f8(char* arg0, char const* arg1, short) {
    if (!arg0 || !arg1) return 0;
    sprintf(arg0, arg1);
    char* var0 = strstr(arg0, data_020f2b6c);
    if (var0) strcpy(var0, data_020f2b71);
    return 1;
}
