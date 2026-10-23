#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/WirelessScanDescriptor.h"

extern "C" int func_ov031_0220d60c(void);

// USA: func_ov031_0220ec04
extern "C" ARM Struct_ov031_0220ec04_3* func_ov031_0220ec04(int arg0) {
    int var0 = DisableIRQInterrupts();
    int var1 = func_ov031_0220d60c();
    if (var1 == 0) {
        SetIRQInterruptState(var0);
        return 0;
    }
    Struct_ov031_0220ec04_2* var2 = func_ov031_0220ee50(arg0);
    if (var2 == 0) {
        SetIRQInterruptState(var0);
        return 0;
    }
    SetIRQInterruptState(var0);
    return &var2->unknown_10_;
}
