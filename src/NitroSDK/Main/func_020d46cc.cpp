#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

extern char data_021142e0;

struct Struct_020d46cc { unsigned char unknown_0_[0x150]; unsigned short unknown_150_; };

// USA: func_020d46cc
extern "C" ARM int func_020d46cc(void) {
    unsigned int var0 = DisableIRQInterrupts();
    struct Struct_020d46cc* var1 = *(struct Struct_020d46cc**)(&data_021142e0 + 4);
    int var2 = var1 ? var1->unknown_150_ : 0;
    SetIRQInterruptState(var0);
    return var2;
}
