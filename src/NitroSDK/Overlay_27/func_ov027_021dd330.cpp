#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_ov027_021dd3cc(void *arg0);
extern "C" void func_ov027_021dd218();

struct Struct_ov027_021e3420 { void *unknown_0_; };
extern struct Struct_ov027_021e3420 data_ov027_021e3420;

// USA: func_ov027_021dd330
extern "C" ARM void func_ov027_021dd330(void *arg0, unsigned int arg1) {
    int var0 = DisableIRQInterrupts();
    if (data_ov027_021e3420.unknown_0_ == NULL) {
        char *var1 = (char *)arg0;
        data_ov027_021e3420.unknown_0_ = arg0;
        func_ov027_021dd3cc(var1 + 0xc4);
        *(unsigned int *)(var1 + 0xc0) = 0;
        unsigned int var2 = (arg1 - 0xe4) & ~3;
        unsigned int var3 = (unsigned int)(var1 + 0xe4) + var2;
        PopulateContext((ProcessorContext *)arg0, (unsigned int)func_ov027_021dd218, (unsigned int)arg0, var3, var2, 0);
        MarkContextReadyAndSwitch((ProcessorContext *)arg0);
    }
    SetIRQInterruptState(var0);
}
