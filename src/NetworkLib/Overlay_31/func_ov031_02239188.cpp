#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern unsigned short* data_ov031_02290d14;
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

// USA: func_ov031_02239188
extern "C" ARM int func_ov031_02239188(int arg0) {
    unsigned int var0 = DisableIRQInterrupts();
    unsigned short var1 = 1 << arg0;
    if (!(data_ov031_02290d14[1] & var1)) {
        SetIRQInterruptState(var0);
        return 0;
    }
    unsigned short var2[7];
    VectorizedInvertedMemcpy(data_ov031_02290d14, var2, 0xe);
    SetIRQInterruptState(var0);
    if (var2[2] & var1) return 2;
    if (var2[3] & var1) return 3;
    if (var2[4] & var1) return 4;
    if (var2[5] & var1) return 5;
    if (var2[6] & var1) return 6;
    return 1;
}
