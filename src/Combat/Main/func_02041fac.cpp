#include <globaldefs.h>

extern char data_020effd7;

extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" ARM int func_020d2ff0(const char* arg0);

#if defined(jpn)
#define func_02041fac func_02042638
extern "C" ARM int func_02042638(char* arg0, int arg1, int arg2);
#endif

// USA: func_02041fac
extern "C" ARM int func_02041fac(char* arg0, int arg1, int arg2) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020effd7, arg2, arg1)) - arg0;
}
