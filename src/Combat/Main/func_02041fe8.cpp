#include <globaldefs.h>

#if defined(jpn)
#define data_020effec data_020effeb
#endif

extern char data_020effec;

extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" ARM int func_020d2ff0(const char* arg0);

// USA: func_02041fe8
extern "C" ARM int func_02041fe8(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020effec, arg1)) - arg0;
}
