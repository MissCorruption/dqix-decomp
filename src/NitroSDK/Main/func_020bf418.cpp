#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

extern SignedAllocatorList data_021103bc;

// USA: func_020bf418
extern "C" ARM SignedAllocatorHeader* func_020bf418(void) {
    unsigned int var0 = DisableIRQInterrupts();
    SignedAllocatorHeader* var1 = data_021103bc.ElementAfter(NULL);
    if (var1 != NULL) {
        data_021103bc.Remove(var1);
    }
    SetIRQInterruptState(var0);
    return var1;
}
