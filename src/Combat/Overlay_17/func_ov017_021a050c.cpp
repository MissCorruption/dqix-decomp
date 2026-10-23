#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "Combat/MapDisplay.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

class AllocatorUnion;
extern "C" int func_02012da4(AllocatorUnion*, void*);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);

extern AllocatorUnion data_02114e20;
extern int data_ov017_021d669c[];

// USA: func_ov017_021a050c
extern "C" ARM void func_ov017_021a050c(GameResources* self) {
    MapDisplay* display = self->unknown_ptr_36d0;
    func_02020720(display);

    for (int i = 0; data_ov017_021d669c[i] >= 0; i++) {
        int index = data_ov017_021d669c[i];
        void* p = self->allocator_array_38[index].GetSignedAllocator();
        self->allocator_array_38[index].Destroy();
        self->allocator_array_38[index].ResetAllocatorPointer();
        if (p != NULL) {
            func_02012da4(&data_02114e20, p);
        }
    }

    void* buf = func_02012d88(&data_02114e20, 0x6f78);
    self->allocator_array_38[5].CreateTypeA(buf, 0x6f78);
}
