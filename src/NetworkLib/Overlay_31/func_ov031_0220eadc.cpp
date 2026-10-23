#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220d60c(void);

// USA: func_ov031_0220eadc
extern "C" ARM void func_ov031_0220eadc(void) {
    int var0 = DisableIRQInterrupts();
    int var1 = func_ov031_0220d60c();
    if (var1 == 0) {
        SetIRQInterruptState(var0);
        return;
    }
    char* var2 = (char*)var1 + 0x2000;
    void* var3 = *(void**)(var2 + 0x270);
    if (var3 != NULL) {
        int var4 = *(int*)(var2 + 0x274);
        if (var4 > 0) {
            VectorizedMemset(var3, 0, var4);
        }
    }
    SetIRQInterruptState(var0);
}
