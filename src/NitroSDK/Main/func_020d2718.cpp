#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

struct Struct_02112780_6 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
};
extern struct Struct_02112780_6 data_02112780;


// USA: func_020d2718
extern "C" ARM int func_020d2718(unsigned int arg0) {
    unsigned int var0 = DisableIRQInterrupts();
    unsigned int var1 = data_02112780.unknown_4_;
    int var2;
    if (arg0 > var1) {
        if ((arg0 - var1) < 0x80000000u) {
            var2 = 0;
        } else {
            var2 = 1;
        }
    } else {
        var2 = (var1 - arg0) < 0x80000000u;
    }
    SetIRQInterruptState(var0);
    return var2;
}
