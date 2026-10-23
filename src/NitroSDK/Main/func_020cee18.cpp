#include <globaldefs.h>
extern "C" int func_020ce56c(int, int, int);

// USA: func_020cee18
extern "C" ARM int func_020cee18(int* arg0) {
    unsigned short var0;
    int var1 = func_020ce56c((int)(0xf), (int)(6), (int)(&var0));
    if (var1 != 0) {
        return var1;
    }
    if (arg0 != NULL) {
        *arg0 = var0;
    }
    return var1;
}
