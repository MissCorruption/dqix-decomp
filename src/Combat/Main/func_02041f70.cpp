#include <globaldefs.h>

#if defined(jpn)
#define data_020effcb data_020effca
#endif

extern char data_020effcb;

extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" ARM int func_020d2ff0(const char* arg0);

// USA: func_02041f70
extern "C" ARM int func_02041f70(char* arg0, int arg1, int arg2) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020effcb, arg1, arg2)) - arg0;
}
