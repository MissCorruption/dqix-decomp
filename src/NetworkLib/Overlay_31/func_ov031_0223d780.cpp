#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" void func_ov031_0223d830(void);

struct Struct_ov031_02290d58 { void* unknown_0_; unsigned int unknown_4_; };
extern Struct_ov031_02290d58 data_ov031_02290d58;

// USA: func_ov031_0223d780
extern "C" ARM void func_ov031_0223d780(void) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4000210;
    data_ov031_02290d58.unknown_4_ = *var0;
    SetSpecificInterruptsEnabled(0x40018);
    EnableSpecificInterrupts(1);
    data_ov031_02290d58.unknown_0_ = (void*)GetInterruptHandler(1);
    SetInterruptHandler(1, (const void*)func_ov031_0223d830);
    AcknowledgeSpecificInterrupts(1);
    volatile unsigned short* var1 = (volatile unsigned short*)0x4000208;
    unsigned short var2 = *var1;
    (void)var2;
    *var1 = 1;
    EnableIRQInterrupts();
}
