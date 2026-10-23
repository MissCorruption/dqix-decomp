#include <globaldefs.h>

#if defined(jpn)
extern "C" int func_02042428(char*, int);
#define func_02041d9c func_02042428
#endif

extern char data_020eff43;
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: func_02041d9c
extern "C" ARM int func_02041d9c(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020eff43, arg1)) - arg0;
}
