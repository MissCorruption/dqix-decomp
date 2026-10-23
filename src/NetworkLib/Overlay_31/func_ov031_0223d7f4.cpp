#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

unsigned int SetSpecificInterruptsEnabled(unsigned int which);

struct Struct_ov031_02290d58 { void* unknown_0_; unsigned int unknown_4_; };
extern Struct_ov031_02290d58 data_ov031_02290d58;

// USA: func_ov031_0223d7f4
extern "C" ARM void func_ov031_0223d7f4(void) {
    volatile unsigned short* var0 = (volatile unsigned short*)0x4000208;
    unsigned short var1 = *var0;
    (void)var1;
    *var0 = 0;
    SetSpecificInterruptsEnabled(data_ov031_02290d58.unknown_4_);
    SetInterruptHandler(1, data_ov031_02290d58.unknown_0_);
}
