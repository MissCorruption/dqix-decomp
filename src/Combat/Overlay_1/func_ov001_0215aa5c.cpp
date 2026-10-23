#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern SafeAllocator* data_ov001_021658b8[8];

// USA: func_ov001_0215aa5c
extern "C" ARM void func_ov001_0215aa5c(void) {
    for (int var0 = 0; var0 < 8; var0++) {
        SafeAllocator* var1 = data_ov001_021658b8[var0];
        if (var1 == NULL) continue;
        if (var1->GetSignedAllocator() == NULL) continue;
        data_ov001_021658b8[var0]->Destroy();
        data_ov001_021658b8[var0] = NULL;
    }
}
