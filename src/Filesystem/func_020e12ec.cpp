#include <globaldefs.h>
#include <std_library_functions.h>

#if defined(jpn)
extern char data_020f2cb4[];
extern char data_020f2cb9[];
extern char data_020f2cbe[];

// JPN: func_020e12ec
extern "C" ARM int func_020e12ec(char* arg0, const char* arg1) {
    if (arg0 == 0 || arg1 == 0)
        return 0;
    strcpy(arg0, arg1);
    char* var0 = strstr(arg0, data_020f2cb4);
    if (var0 == 0)
        var0 = strstr(arg0, data_020f2cb9);
    if (var0 != 0)
        strcpy(var0, data_020f2cbe);
    return 1;
}
#endif
