#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" int func_ov017_021d60f4(void*);
struct AllocatorUnion;
extern "C" void func_02012da4(struct AllocatorUnion*, void*);
struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(struct Struct_02114e20*);

extern SafeAllocator* data_ov001_021658b8[8];
extern struct AllocatorUnion data_02114e20;

// USA: func_ov001_0215ea40
extern "C" ARM int func_ov001_0215ea40(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    if (var0 < 0 || var0 >= 8) return 0;
    SafeAllocator* var1 = data_ov001_021658b8[var0];
    if (var1 == NULL) return 0;
    SignedAllocatorHeader* var2 = var1->GetSignedAllocator();
    if (var2 != NULL) {
        var1->Destroy();
        func_02012da4(&data_02114e20, var2);
    }
    func_02012dd0((struct Struct_02114e20*)&data_02114e20);
    return 1;
}
