#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

extern char data_020f2dc8;
extern char data_020f2dcb;
extern char data_020f2dcf;

// USA: func_020e462c
extern "C" ARM char* func_020e462c(char* arg0, char* arg1, char* arg2) {
    if (arg1 != 0 && *arg1 != 0) {
        arg0 += sprintf(arg0, &data_020f2dc8, arg1);
        int var0;
        if (arg1 == 0) goto setFlag1;
        {
            int var1 = func_020d2ff0(arg1);
            if (var1 <= 3) goto setFlag1;
            var0 = func_02001aec(arg1 + (var1 - 3), &data_020f2dcb, 3);
            goto flagDone;
        }
    setFlag1:
        var0 = 1;
    flagDone:
        if (var0 != 0) {
            arg0 += sprintf(arg0, &data_020f2dcf);
        }
    }
    arg0 += sprintf(arg0, arg2);
    return arg0;
}
