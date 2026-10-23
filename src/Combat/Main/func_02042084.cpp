#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern char data_020efe91;

// USA: func_02042084
extern "C" ARM int func_02042084(char* arg0, char* arg1, int arg2, int arg3) {
#if defined(jpn)
    int var0 = func_020d2ff0(arg1);
    var0 *= arg3;
    int var2 = ((arg2 - (var0 >> 1)) >> 1) + 1;
#else
    int var1 = func_020420e8(arg1, arg3);
    int var2 = ((arg2 - var1) >> 1) + 1;
#endif
    sprintf(arg0 + func_020d2ff0(arg0), &data_020efe91, var2);
    sprintf(arg0 + func_020d2ff0(arg0), arg1);
    return func_020d2ff0(arg0);
}
