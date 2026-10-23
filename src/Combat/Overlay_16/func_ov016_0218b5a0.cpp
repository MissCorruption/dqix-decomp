#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" unsigned int func_02029568(void*);

struct Struct_ov016_0218b5a0
{
    SafeAllocator unknown_0_;
    char unknown_14_[0x80];
    unsigned int unknown_94_;
};

// USA: func_ov016_0218b5a0
extern "C" ARM unsigned int func_ov016_0218b5a0(Struct_ov016_0218b5a0* arg0) {
    arg0->unknown_0_.ResetAllocatorPointer();
    func_02029568(arg0->unknown_14_);
    arg0->unknown_94_ = 1;
    return 1;
}
