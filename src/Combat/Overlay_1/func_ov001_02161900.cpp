#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

extern "C" int func_ov017_021d60f4(void*);
extern void* data_ov001_021658b8[];

// USA: func_ov001_02161900
extern "C" ARM int func_ov001_02161900(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = data_ov001_021658b8[var0];
    if (var1 != NULL) {
        HMRFAllocator* var2 = *(HMRFAllocator**)var1;
        var2->Free(1);
    }
    return 1;
}
