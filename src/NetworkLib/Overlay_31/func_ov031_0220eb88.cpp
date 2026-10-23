#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);
extern "C" int func_ov031_0220d60c(void);

// USA: func_ov031_0220eb88
extern "C" ARM int func_ov031_0220eb88(int arg0) {
    unsigned int var0 = DisableIRQInterrupts();
    int var1 = func_ov031_0220d60c();
    if (var1 == 0) {
        SetIRQInterruptState(var0);
        return 0;
    }
    unsigned char var2 = *(unsigned char*)(var1 + 0x2000 + 0x26a);
    int var3;
    if (arg0) {
        var3 = (var2 != 0);
        *(unsigned char*)(var1 + 0x2000 + 0x26a) = 1;
    } else {
        var3 = (var2 != 0);
        *(unsigned char*)(var1 + 0x2000 + 0x26a) = 0;
    }
    SetIRQInterruptState(var0);
    return var3;
}
