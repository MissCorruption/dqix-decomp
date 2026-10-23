#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

struct Struct_020d2768 {
    struct Struct_020d2768* unknown_0_;
};
struct Struct_02112780_7 {
    struct Struct_020d2768* unknown_0_;
};
extern struct Struct_02112780_7 data_02112780;

// USA: func_020d2768
// Kept as extern "C" func_020d2768: func_020d27e0 references this symbol.
extern "C" ARM int func_020d2768(void) {
    unsigned int var0 = DisableIRQInterrupts();
    struct Struct_020d2768* var1 = data_02112780.unknown_0_;
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
