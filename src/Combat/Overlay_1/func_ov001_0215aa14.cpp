#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern void* data_ov001_021658b8[8];

// USA: func_ov001_0215aa14
extern "C" ARM void func_ov001_0215aa14(SafeAllocator* arg0) {
    int var0;
    for (var0 = 0; var0 < 8; var0++) {
        data_ov001_021658b8[var0] = NULL;
    }
    if (arg0 != NULL) {
        arg0->GetMaxPossibleAllocation();
        data_ov001_021658b8[0] = arg0;
    }
}
