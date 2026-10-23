#include <globaldefs.h>

extern char data_020efffc;

extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" ARM int func_020d2ff0(const char* arg0);

// USA: func_0204201c
extern "C" ARM int func_0204201c(char* arg0, int arg1, int arg2) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efffc, arg2, arg1)) - arg0;
}
