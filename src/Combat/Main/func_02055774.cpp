#include <globaldefs.h>

extern "C" int func_02057334(int);

// USA: func_02055774
extern "C" ARM int func_02055774(int* arg0) {
    int var0 = arg0[1];
    if (var0 == 0) return var0;
    return func_02057334(var0);
}
