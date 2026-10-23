#include <globaldefs.h>

int FreeVRAMStagingMemory(void const*);

// USA: func_020e2478
extern "C" ARM int func_020e2478(int* arg0) {
    int var0 = arg0[0];
    if (var0 == 0) return var0;
    return FreeVRAMStagingMemory((void const*)var0);
}
