#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" const char data_020eff11[];

#if defined(jpn)
#define func_02041cc0 func_0204234c
extern "C" ARM int func_0204234c(char* arg0, int arg1);
#endif

// USA: func_02041cc0
extern "C" ARM int func_02041cc0(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, data_020eff11, arg1)) - arg0;
}
