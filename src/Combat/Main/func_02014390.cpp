#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/ZoneFeatures.h"

void* DecompressLZ77FileIntoScratchSpace(SafeAllocator& allocator, const void* source, unsigned int& size);

// USA: func_02014390
ARM int Zone3D::func_02014390(const void* arg0, unsigned int arg1) {
    SafeAllocator* var0 = pAllocator_68_;
    unsigned int var1;
    void* var2 = DecompressLZ77FileIntoScratchSpace(*var0, arg0, var1);
    Zone3D_StructPtr_8* var3 = pUnknownStruct_8_;
    substruct_6c_.func_0201e248();
    substruct_6c_.func_0201e2b4(var0, var2, var1);
    pUnknownStruct_8_ = var3;
    return 1;
}
