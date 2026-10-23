#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

struct Struct_02112780_5 {
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
    int unknown_c_[5];
    int unknown_20_;
};
extern Struct_02112780_5 data_02112780;

// USA: func_020d26ec
extern "C" ARM int func_020d26ec(void) {
    unsigned int var0 = DisableIRQInterrupts();
    int var1;
    if (data_02112780.unknown_8_ == 0)
        var1 = data_02112780.unknown_4_;
    else
        var1 = data_02112780.unknown_20_;
    SetIRQInterruptState(var0);
    return var1;
}
