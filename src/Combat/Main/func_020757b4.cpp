#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020757b4

extern char data_020f0dc2[];
extern char* data_020f0da0[];

extern "C" char* func_020d2f88(char* arg0, char* arg1);
extern "C" int func_020d2ff0(const char* arg0);

char* StringReplaceLanguageTag(const char* arg0, char* arg1, int arg2) {
    if (arg0 == 0 || arg1 == 0) {
        return arg1;
    }

    char* const var0 = data_020f0dc2;
    strcpy(arg1, arg0);
    char* var1 = func_020d2f88(arg1, var0);
    char* var2 = data_020f0da0[arg2];
    int var3 = func_020d2ff0(var2);
    int var4 = func_020d2ff0(var2) - func_020d2ff0(var0);

    while (var1 != 0) {
        if (var4 > 0) {
            memmove(var1 + var4, var1, func_020d2ff0(var1) + 1);
        } else if (var4 < 0) {
            memmove(var1, var1 - var4, var4 + func_020d2ff0(var1) + 1);
        }
        memmove(var1, var2, var3);
        var1 = func_020d2f88(arg1, var0);
    }
    return arg1;
}
