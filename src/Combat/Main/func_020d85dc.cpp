#include <globaldefs.h>

extern "C" signed char func_020d8550(int arg0);

// USA: func_020d85dc
extern "C" ARM int func_020d85dc(const char* arg0, const char* arg1) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    if (arg0 == arg1) {
        return 1;
    }
    signed char var0, var1;
    while ((var0 = *arg0) != 0 && (var1 = *arg1) != 0 && func_020d8550(var0) == func_020d8550(var1)) {
        arg0++;
        arg1++;
    }
    return (*arg1 == 0) ? 1 : 0;
}
