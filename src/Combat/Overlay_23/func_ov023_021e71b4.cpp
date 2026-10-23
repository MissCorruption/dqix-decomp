#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

// USA: func_ov023_021e71b4
// JPN: func_ov023_021e7414
extern "C" ARM void func_ov023_021e71b4(void* arg0, SafeAllocator* arg1) {
    if (arg1 == NULL) return;
    SafeAllocator* var0 = static_cast<SafeAllocator*>(arg0);

    void* var1 = arg1->Allocate(0x5000);
    var0[0].CreateTypeA(var1, 0x5000);

    var1 = arg1->Allocate(0x3400);
    var0[1].CreateTypeA(var1, 0x3400);

#if defined(jpn)
    const unsigned int var2 = 0xc00;
#else
    const unsigned int var2 = 0xccc;
#endif
    var1 = arg1->Allocate(var2);
    var0[2].CreateTypeA(var1, var2);
}
