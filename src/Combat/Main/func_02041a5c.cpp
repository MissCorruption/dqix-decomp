#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe7f;

#if defined(jpn)
#define func_02041a5c func_020420e8
extern "C" ARM int func_020420e8(char* arg0, int arg1);
#endif

// USA: func_02041a5c
extern "C" ARM int func_02041a5c(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efe7f, arg1)) - arg0;
}
