#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

struct Struct_020bf3c8 {
    char unknown_0_[0x11c];
    int unknown_11c_;   /* 0x11c */
};

struct Struct_020bf3c8_2 {
    char unknown_0_[8];
    struct Struct_020bf3c8* unknown_8_;  /* 0x8 */
};

// USA: func_020bf3c8
extern "C" ARM SignedAllocatorHeader* func_020bf3c8(SignedAllocatorList* arg0) {
    unsigned int var0 = DisableIRQInterrupts();
    SignedAllocatorHeader* var1 = arg0->ElementAfter(NULL);
    if (var1 != NULL) {
        arg0->Remove(var1);
        ((Struct_020bf3c8_2*)var1)->unknown_8_->unknown_11c_--;
    }
    SetIRQInterruptState(var0);
    return var1;
}
