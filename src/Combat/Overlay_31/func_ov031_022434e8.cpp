#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

extern SafeAllocator data_ov031_02291e3c;

// USA: func_ov031_022434e8
extern "C" ARM void func_ov031_022434e8(void* arg0, void* arg1) {
    if (arg1) {
        unsigned int var0 = DisableIRQInterrupts();
        data_ov031_02291e3c.Free(arg1);
        SetIRQInterruptState(var0);
    }
}
