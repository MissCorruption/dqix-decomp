#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

struct Struct_020bbf84_2 {
    HMRFAllocator* unknown_0_;
    SignedAllocatorList unknown_4_;
};

typedef void (*Type_020bbf84)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);

// USA: func_020bda58
extern "C" ARM void* func_020bda58(struct Struct_020bbf84_2* arg0, unsigned int arg1, Type_020bbf84 arg2, int arg3, int arg4) {
    unsigned int var0 = ((arg1 + 0x1f) & ~0x1f) + 0x20;
    unsigned char* var1 = (unsigned char*)arg0->unknown_0_->Allocate(var0, 0x20);
    if (var1 == NULL) {
        return NULL;
    }
    SignedAllocatorList* var2 = (SignedAllocatorList*)arg0->unknown_4_.ElementBefore(NULL);
    *(int*)(var1 + 0x8) = arg1;
    *(Type_020bbf84*)(var1 + 0xc) = arg2;
    *(int*)(var1 + 0x10) = arg3;
    *(int*)(var1 + 0x14) = arg4;
    var2->InsertAtEnd((SignedAllocatorHeader*)var1);
    return var1 + 0x20;
}
