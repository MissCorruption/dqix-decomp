#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

extern "C" void func_020bdbe0(SignedAllocatorList* arg0);

struct Struct_020bdc24 {
    HMRFAllocator* unknown_0_;
    SignedAllocatorList unknown_4_;
};

// USA: func_020bdc24
extern "C" ARM int func_020bdc24(void* arg0) {
    struct Struct_020bdc24* var0 = (struct Struct_020bdc24*)arg0;
    void* var1 = var0->unknown_0_->Allocate(0x14, 4);
    if (var1 == NULL) return 0;
    func_020bdbe0((SignedAllocatorList*)var1);
    var0->unknown_4_.InsertAtEnd((SignedAllocatorHeader*)var1);
    return 1;
}
