#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02054280 {
    short unknown_0_;
    SafeAllocator unknown_4_[10];
};

// USA: func_02054280
extern "C" ARM void func_02054280(struct Struct_02054280* arg0) {
    int var0;
    arg0->unknown_0_ = -1;
    for (var0 = 0; var0 < 10; var0++) {
        arg0->unknown_4_[var0].ResetAllocatorPointer();
    }
}
