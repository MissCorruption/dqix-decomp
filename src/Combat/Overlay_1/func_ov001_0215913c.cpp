#include <globaldefs.h>

extern "C" void* func_ov001_02158e0c(void*);

// USA: func_ov001_0215913c
extern "C" ARM void* func_ov001_0215913c(void* arg0, int arg1, int arg2, int arg3) {
    unsigned int* var0 = (unsigned int*)func_ov001_02158e0c(arg0);
    if (var0 != NULL) {
        var0[0] = 0xd;
        var0[1] = arg1;
        var0[2] = arg2;
        var0[3] = arg3;
    }
    return var0;
}
