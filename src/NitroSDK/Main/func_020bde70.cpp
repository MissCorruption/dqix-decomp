#include <globaldefs.h>
extern "C" int func_020be1a8(unsigned int, int, int);
extern "C" int* func_020bd4b8(int);

extern "C" int func_020bd8ac(unsigned int);

// USA: func_020bde70
extern "C" ARM int func_020bde70(int arg0, int arg1, int arg2, int arg3, int* arg4) {
    int* var0 = func_020bd4b8((int)(arg0));
    if (var0 == NULL) return 3;
    int var1 = *var0;
    int var2;
    if (arg1 & 8) {
        var2 = func_020be1a8((unsigned int)(var1), (int)(arg2), (int)(arg3));
        if (var2 == 0) return 7;
    } else {
        var2 = func_020bd8ac(var1);
    }
    if (arg4 != NULL) *arg4 = var2;
    return 0;
}
