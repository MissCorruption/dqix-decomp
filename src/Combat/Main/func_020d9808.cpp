#include <globaldefs.h>

// USA: func_020d9808
extern "C" ARM int func_020d9808(int* arg0, int* arg1, int* arg2) {
    int var0 = *arg1;
    int var1 = *arg0;
    if (var1 <= var0) {
        var1 = var0;
    }
    if (var1 >= *arg2) {
        var1 = *arg2;
    }
    return var1;
}
