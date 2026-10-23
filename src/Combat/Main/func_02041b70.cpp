#include <globaldefs.h>

#if defined(jpn)
#define data_020efeb3 data_020efebb
#endif

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efeb3;

// USA: func_02041b70
extern "C" ARM int func_02041b70(char* arg0, int arg1, const char* arg2) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efeb3, arg1, arg2)) - arg0;
}
