#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov028_021d977c {
    char unknown_0_[0x44];
    class SafeAllocator unknown_44_;
};

extern "C" ARM void func_ov028_021d9494(struct Struct_ov028_021d977c* arg0);

// USA: func_ov028_021d977c
extern "C" ARM struct Struct_ov028_021d977c* func_ov028_021d977c(struct Struct_ov028_021d977c* arg0) {
    arg0->unknown_44_.ResetAllocatorPointer();
    func_ov028_021d9494(arg0);
    return arg0;
}
