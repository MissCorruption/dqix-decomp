#include <globaldefs.h>
#include "NitroSDK/Memory/HPXEAllocator.h"

unsigned int DisableSpecificInterrupts(unsigned int mask);
ARM unsigned int EnableSpecificInterrupts(unsigned int mask);

extern HPXEAllocator* data_ov031_02290d3c;

// USA: func_ov031_0223cf70
extern "C" ARM unsigned int func_ov031_0223cf70(void** arg0) {
    unsigned int var0 = DisableSpecificInterrupts(1);
    void* var1 = *arg0;
    if (var1 == NULL) {
        return var0;
    }
    data_ov031_02290d3c->Free(var1);
    EnableSpecificInterrupts(var0);
    *arg0 = NULL;
    return 0;
}
