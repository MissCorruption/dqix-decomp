#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "Combat/MapDisplay.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

class AllocatorUnion;
extern "C" int func_02012da4(AllocatorUnion*, void*);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);

extern AllocatorUnion data_02114e20;
extern int data_ov017_021d669c[];

// USA: func_ov017_021a050c
extern "C" ARM void func_ov017_021a050c(GameResources* arg0) {
    Struct_02020554* var0 = arg0->unknown_ptr_36d0;
    func_02020720(var0);

    for (int var1 = 0; data_ov017_021d669c[var1] >= 0; var1++) {
        int var2 = data_ov017_021d669c[var1];
        void* var3 = arg0->allocator_array_38[var2].GetSignedAllocator();
        arg0->allocator_array_38[var2].Destroy();
        arg0->allocator_array_38[var2].ResetAllocatorPointer();
        if (var3 != NULL) {
            func_02012da4(&data_02114e20, var3);
        }
    }

    void* var4 = func_02012d88(&data_02114e20, 0x6f78);
    arg0->allocator_array_38[5].CreateTypeA(var4, 0x6f78);
}
