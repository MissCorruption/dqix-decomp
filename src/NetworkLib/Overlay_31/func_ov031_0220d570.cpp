#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
extern char* data_ov031_0224e53c;

// USA: func_ov031_0220d570
extern "C" ARM int func_ov031_0220d570(int arg0) {
    int var0 = DisableIRQInterrupts();
    char* var1 = data_ov031_0224e53c;
    unsigned int var2 = 0;
    int var3 = *(int*)(var1 + 0x2000 + 0x264);
    if (var1 == NULL) {
        SetIRQInterruptState(var0);
        return 0;
    }
    if (arg0 & 0x8000) {
        var2 |= 0x3ffe;
        if (!(arg0 & 0x3ffe)) arg0 |= 0xa082;
    }
    if (arg0 & 0x20000) var2 |= 0x10000;
    if (arg0 & 0x80000) var2 |= 0x40000;
    if (arg0 & 0x200000) var2 |= 0x100000;
    if (arg0 & 0x800000) var2 |= 0x400000;
    *(int*)(var1 + 0x2000 + 0x264) = arg0 | (var3 & ~var2);
    SetIRQInterruptState(var0);
    return var3;
}
