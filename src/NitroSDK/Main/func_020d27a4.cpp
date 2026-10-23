#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

struct Struct_020d27a4 {
    struct Struct_020d27a4* unknown_0_;
};
struct Struct_02112780_8 {
    struct Struct_020d27a4* unknown_0_;
    struct Struct_020d27a4* unknown_4_;
    struct Struct_020d27a4* unknown_8_;
};
extern struct Struct_02112780_8 data_02112780;

// USA: func_020d27a4
// Kept as extern "C" func_020d27a4: func_020d27e0 references this symbol.
extern "C" ARM int func_020d27a4(void) {
    unsigned int var0 = DisableIRQInterrupts();
    struct Struct_020d27a4* var1 = data_02112780.unknown_8_;
    int var2 = 0;
    if (var1 != NULL) {
        do {
            var1 = var1->unknown_0_;
            var2++;
        } while (var1 != NULL);
    }
    SetIRQInterruptState(var0);
    return var2;
}
