#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1);

// USA: func_02042058
extern "C" ARM int func_02042058(char* arg0, const char* arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, arg1)) - arg0;
}
