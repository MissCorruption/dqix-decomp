#include <globaldefs.h>
#include "NitroSDK/Memory/HPXEAllocator.h"

unsigned int DisableSpecificInterrupts(unsigned int mask);
ARM unsigned int EnableSpecificInterrupts(unsigned int mask);

extern HPXEAllocator* data_ov031_02290d3c;

// USA: func_ov031_0223cfb4
extern "C" ARM unsigned int func_ov031_0223cfb4(void* arg0) {
    unsigned int var0 = DisableSpecificInterrupts(1);
    if (arg0 == NULL) {
        return var0;
    }
    data_ov031_02290d3c->Free(arg0);
    return EnableSpecificInterrupts(var0);
}
