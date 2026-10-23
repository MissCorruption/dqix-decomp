#include <globaldefs.h>

#if defined(jpn)
#define data_020efe78 data_020efe80
#endif

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe78;

// USA: func_02041a28
extern "C" ARM int func_02041a28(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efe78, arg1)) - arg0;
}
