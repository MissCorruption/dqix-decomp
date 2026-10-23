#include <globaldefs.h>

#if defined(jpn)
#define data_020eff74 data_020eff73
#endif

extern char data_020eff74;
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: func_02041e70
extern "C" ARM int func_02041e70(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020eff74, arg1)) - arg0;
}
