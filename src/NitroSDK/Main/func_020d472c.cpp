#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
extern "C" int func_020d41e8(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" void* func_020d41d8(void);

// USA: func_020d472c
extern "C" ARM int func_020d472c(void* arg0) {
    unsigned int var0 = DisableIRQInterrupts();
    int var1 = func_020d41e8();
    if (var1 != 0) {
        SetIRQInterruptState(var0);
        return var1;
    }
    void* var2 = func_020d41d8();
    *(void**)((char*)var2 + 0xc8) = arg0;
    SetIRQInterruptState(var0);
    return 0;
}
