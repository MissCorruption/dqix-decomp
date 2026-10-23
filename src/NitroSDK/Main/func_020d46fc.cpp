#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

extern char data_021142e0;

struct Struct_020d46fc { unsigned char unknown_0_[0x14c]; int unknown_14c_; };

// USA: func_020d46fc
extern "C" ARM unsigned short func_020d46fc(void) {
    unsigned int var0 = DisableIRQInterrupts();
    struct Struct_020d46fc* var1 = *(struct Struct_020d46fc**)(&data_021142e0 + 4);
    int var2 = var1 ? var1->unknown_14c_ : 0;
    SetIRQInterruptState(var0);
    return (unsigned short)var2;
}
