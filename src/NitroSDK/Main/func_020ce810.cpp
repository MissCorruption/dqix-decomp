#include <globaldefs.h>
extern "C" int func_020ce56c(int, int, int);

// USA: func_020ce810
extern "C" ARM int func_020ce810(int *arg0, int *arg1) {
    unsigned short var0;
    int var1 = func_020ce56c((int)(0xf), (int)(1), (int)(&var0));
    if (var1 != 0) {
        return var1;
    }
    if (arg0 != NULL) {
        *arg0 = (var0 & 8) ? 1 : 0;
    }
    if (arg1 != NULL) {
        *arg1 = (var0 & 4) ? 1 : 0;
    }
    return var1;
}
