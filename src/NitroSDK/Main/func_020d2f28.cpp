#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);

// USA: func_020d2f28
extern "C" ARM int func_020d2f28(char* arg0, const char* arg1, int arg2) {
    int var0 = 0;
    const char* var1 = arg1;
    if (arg2 - 1 > 0) {
        do {
            arg0[var0] = *var1;
            if (*var1 == 0) break;
            var0++;
            var1++;
        } while (var0 < arg2 - 1);
    }
    if (var0 >= arg2 - 1) {
        if (arg2 != 0) arg0[var0] = 0;
    }
    return func_020d2ff0(arg1);
}
