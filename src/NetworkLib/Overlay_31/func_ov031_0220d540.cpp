#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern int data_ov031_0224e53c;

// USA: func_ov031_0220d540
extern "C" ARM int func_ov031_0220d540(void) {
    int var0 = DisableIRQInterrupts();
    int var1 = 0;
    if (data_ov031_0224e53c != 0) {
        var1 = *(int*)((char*)data_ov031_0224e53c + 0x2000 + 0x260);
    }
    SetIRQInterruptState(var0);
    return var1;
}
