#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020c9bf0 func_020cb6bc
#endif

extern "C" void func_020c9bf0(void);
extern char data_027e0000;

#define INTERRUPT_MASTER_ENABLE (*(volatile unsigned short*)0x04000208)

// USA: func_020c9778
extern "C" ARM void func_020c9778(bool arg0, unsigned int arg1) {
    int var0 = DisableIRQInterrupts();
    unsigned short var1 = INTERRUPT_MASTER_ENABLE;
    INTERRUPT_MASTER_ENABLE = 1;

    if (arg0) {
        *(unsigned int*)((char*)&data_027e0000 + 0x3ff8) &= ~arg1;
    }

    unsigned int* var2 = (unsigned int*)((char*)&data_027e0000 + 0x3ff8);
    if ((arg1 & *(unsigned int*)((char*)&data_027e0000 + 0x3ff8)) == 0) {
        do {
            func_020c9bf0();
            EnableIRQInterrupts();
            DisableIRQInterrupts();
        } while ((arg1 & *var2) == 0);
    }
    *var2 &= ~arg1;

    (void)INTERRUPT_MASTER_ENABLE;
    INTERRUPT_MASTER_ENABLE = var1;

    SetIRQInterruptState(var0);
}
