#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov023_021fbe4c {
    char unknown_0_[0x20];
    SafeAllocator unknown_20_;
};

// USA: func_ov023_021fbe4c
extern "C" ARM void func_ov023_021fbe4c(struct Struct_ov023_021fbe4c* arg0) {
    if (arg0->unknown_20_.GetSignedAllocator() == NULL) return;
    arg0->unknown_20_.Destroy();
}
