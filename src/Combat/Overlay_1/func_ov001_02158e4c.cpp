#include <globaldefs.h>

extern "C" void* func_ov001_02158d8c(void** arg0);

// USA: func_ov001_02158e4c
extern "C" ARM void* func_ov001_02158e4c(void** arg0) {
    unsigned int* var0 = (unsigned int*)func_ov001_02158d8c(arg0);
    if (var0 == 0)
        return 0;
    unsigned int* var1 = (unsigned int*)arg0[9];
    if (var1 != 0)
        var1[0x12] = (unsigned int)var0;
    arg0[9] = var0;
    var0[0x12] = 0;
    if (arg0[8] == 0)
        arg0[8] = var0;
    return var0;
}
