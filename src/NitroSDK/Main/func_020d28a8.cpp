#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

struct Struct_020d2404 {
    struct Struct_020d2404* unknown_0_;
};
struct Struct_02112780_9 {
    struct Struct_020d2404* unknown_0_;
    unsigned char unknown_4_[0xc];
    struct Struct_020d2404* unknown_10_;
};
extern struct Struct_02112780_9 data_02112780;

// USA: func_020d28a8
extern "C" ARM struct Struct_020d2404* func_020d28a8(void) {
    unsigned int var0 = DisableIRQInterrupts();
    struct Struct_020d2404* var1 = data_02112780.unknown_0_;
    if (var1 == NULL) {
        SetIRQInterruptState(var0);
        return NULL;
    }
    struct Struct_020d2404* var2 = var1->unknown_0_;
    data_02112780.unknown_0_ = var2;
    if (var2 == NULL) {
        data_02112780.unknown_10_ = NULL;
    }
    SetIRQInterruptState(var0);
    return var1;
}
