#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" void func_020bf458(SignedAllocatorHeader* arg0);

// USA: func_020bf358
extern "C" ARM void func_020bf358(SignedAllocatorList* arg0, SignedAllocatorHeader* arg1) {
    unsigned int var0;
    SignedAllocatorHeader* var1;
    SignedAllocatorHeader* var2;
    var0 = DisableIRQInterrupts();
    var1 = arg0->ElementAfter(0);
    if (var1 != 0) {
        do {
            var2 = arg0->ElementAfter(var1);
            if (var1->pNextAllocator == arg1) {
                arg0->Remove(var1);
                func_020bf458(var1);
            }
            var1 = var2;
        } while (var1 != 0);
    }
    SetIRQInterruptState(var0);
}
