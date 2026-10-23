#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe91;

#if defined(jpn)
#define func_02041acc func_02042158
extern "C" ARM int func_02042158(char* arg0, int arg1);
#endif

// USA: func_02041acc
extern "C" ARM int func_02041acc(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efe91, arg1)) - arg0;
}
