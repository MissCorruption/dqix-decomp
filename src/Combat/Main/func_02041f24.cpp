#include <globaldefs.h>

extern char data_020effbd;
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: func_02041f24
extern "C" ARM int func_02041f24(char* arg0, int arg1, int arg2, int arg3) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020effbd, arg1, arg2, arg3)) - arg0;
}
