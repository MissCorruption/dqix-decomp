#include <globaldefs.h>

#if defined(jpn)
#define data_020efec0 data_020efec8
#endif

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efec0;

// USA: func_02041bac
extern "C" ARM int func_02041bac(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efec0, arg1, arg2, arg3, arg4, arg5)) - arg0;
}
