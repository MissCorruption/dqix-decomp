#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov027_021d9de8(int arg0);
extern void* data_ov027_021e33ec;

// USA: func_ov027_021d8b40
#pragma optimize_for_size off
extern "C" ARM int func_ov027_021d8b40(int arg0, int arg1) {
    int var0, var1;
    int var2 = DisableIRQInterrupts();
    switch (arg1) {
    case 0: var1 = 0xa; var0 = 4; break;
    case 1: var1 = 0xa; var0 = 3; break;
    case 2: var1 = 0xe; var0 = 2; break;
    case 3: var1 = 0x7; var0 = 5; break;
    default:
        SetIRQInterruptState(var2);
        return 0;
    }

    if (data_ov027_021e33ec != 0 && func_ov027_021d9de8(arg0) != 0) {
        int var3 = arg0 - 1;
        void* var4 = data_ov027_021e33ec;
        int var5 = *(int*)((char*)var4 + var3 * 4 + 0x1000 + 0x4e8);
        if (var1 == var5) {
            *(short*)((char*)var4 + var3 * 2 + 0x1700 + 0x54) = (short)var0;
            SetIRQInterruptState(var2);
            return 1;
        }
    }
    SetIRQInterruptState(var2);
    return 0;
}
