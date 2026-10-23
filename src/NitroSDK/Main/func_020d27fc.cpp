#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);
extern "C" void func_020d29b0(int arg0);

// USA: func_020d27fc
extern "C" ARM void func_020d27fc(int arg0, int arg1) {
    unsigned int var0 = DisableIRQInterrupts();
    func_020d29b0(arg1);
    SetIRQInterruptState(var0);
}
