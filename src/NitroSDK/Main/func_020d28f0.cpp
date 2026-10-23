#include <globaldefs.h>

extern "C" int func_020c7dc4(void);
unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

// USA: func_020d28f0
extern "C" ARM int func_020d28f0(void) {
    if (func_020c7dc4() == 0) {
        return 1;
    }
    unsigned int var0 = DisableIRQInterrupts();
    *(volatile int*)0x4fff200 = 0x10;
    int var1 = *(volatile int*)0x4fff200;
    SetIRQInterruptState(var0);
    return var1 != 0;
}
