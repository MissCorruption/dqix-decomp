#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov031_0220d60c(void);

// USA: func_ov031_0220f084
extern "C" ARM void* func_ov031_0220f084(unsigned short* arg0) {
    void* var0 = NULL;
    unsigned short var1 = 0;
    int var2 = func_ov031_0220d60c();
    unsigned int var3 = DisableIRQInterrupts();
    if (var2 != 0) {
        if (*(int*)((char*)var2 + 0x2260) == 9 && *(unsigned char*)((char*)var2 + 0x226b) == 0) {
            var1 = *(unsigned short*)((char*)var2 + 0x214a);
            var0 = (char*)var2 + 0x214c;
        }
    }
    SetIRQInterruptState(var3);
    if (arg0 != NULL) {
        *arg0 = var1;
    }
    return var0;
}
