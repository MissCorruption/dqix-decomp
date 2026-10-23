#include <globaldefs.h>

#if defined(jpn)
#define data_020eff87 data_020eff86
#endif

extern char data_020eff87;
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: func_02041ea4
extern "C" ARM int func_02041ea4(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020eff87, arg1)) - arg0;
}
