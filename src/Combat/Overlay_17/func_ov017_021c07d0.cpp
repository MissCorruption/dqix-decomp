#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_020a1f4c(int flag);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);

extern int data_02114e20;

// USA: func_ov017_021c07d0
extern "C" ARM void func_ov017_021c07d0(char* self) {
    int* flag = (int*)(self + 0x1c);
    if (*flag != 0) {
        func_020a1f4c(1);
        *flag = 0;
    }
    SafeAllocator* alloc = (SafeAllocator*)(self + 0x8);
    void* p = alloc->GetSignedAllocator();
    if (p == NULL) return;
    alloc->Destroy();
    func_02012da4((AllocatorUnion*)&data_02114e20, p);
}
