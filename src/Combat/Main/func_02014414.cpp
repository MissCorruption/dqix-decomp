#include <globaldefs.h>
#include "World/Zone3D.h"

void* DecompressLZ77FileIntoScratchSpace(SafeAllocator& allocator, const void* source, unsigned int& size);

// USA: func_02014414
ARM int Zone3D::func_02014414(const void* arg0, unsigned int arg1) {
    SafeAllocator* var0 = pAllocator_68_;
    unsigned int var1;
    void* var2 = DecompressLZ77FileIntoScratchSpace(*var0, arg0, var1);
    lighting_.Initialize();
    lighting_.LoadFromScript(var2, var1, var0);
    return 1;
}
