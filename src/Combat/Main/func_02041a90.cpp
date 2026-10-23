#include <globaldefs.h>

#if defined(jpn)
#define data_020efe86 data_020efe8e
#endif

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe86;

// USA: func_02041a90
extern "C" ARM int func_02041a90(char* arg0, int arg1, int arg2) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efe86, arg1, arg2)) - arg0;
}
