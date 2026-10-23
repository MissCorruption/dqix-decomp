#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020d6f0c {
    char unknown_0_[0xa28];
    SafeAllocator unknown_a28_;
};

// USA: func_020d6f0c
extern "C" ARM void func_020d6f0c(struct Struct_020d6f0c* arg0) {
    if (arg0->unknown_a28_.GetSignedAllocator() == NULL) return;
    arg0->unknown_a28_.Destroy();
    arg0->unknown_a28_.ResetAllocatorPointer();
}
