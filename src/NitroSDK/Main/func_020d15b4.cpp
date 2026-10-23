#include <globaldefs.h>

extern int data_02112148;

unsigned int DisableIRQInterrupts(void);
extern "C" int func_020d131c(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" void func_020c8a18(unsigned int clearMask, unsigned int setMask);

// USA: func_020d15b4
extern "C" ARM void func_020d15b4(int flag) {
    unsigned int savedIntr = DisableIRQInterrupts();
    data_02112148 = flag;
    if (!func_020d131c()) {
        func_020c8a18(0xf000, flag != 0 ? 0x1000 : 0x5000);
    }
    SetIRQInterruptState(savedIntr);
}
