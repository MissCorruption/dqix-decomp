#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe9f;

// USA: func_02041b34
extern "C" ARM int func_02041b34(char* arg0, int arg1, int arg2) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efe9f, arg1, arg2)) - arg0;
}
