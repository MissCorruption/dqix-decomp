#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

extern "C" void func_020bc658(SignedAllocatorList* arg0, SignedAllocatorHeader* arg1);
extern "C" void func_020bc6a8(SignedAllocatorHeader* arg0);

extern SignedAllocatorList data_0210f3d8;

// USA: func_020bc870
extern "C" ARM void func_020bc870(SignedAllocatorHeader* arg0, unsigned char arg1) {
    SignedAllocatorList* var0 = (SignedAllocatorList*)arg0->pPrevAllocator;
    if (var0 != NULL) {
        var0->Remove(arg0);
        arg0->pPrevAllocator = NULL;
    }
    data_0210f3d8.Remove(arg0);
    *((unsigned char*)arg0 + 0x3d) = arg1;
    if (var0 != NULL) {
        func_020bc658(var0, arg0);
    }
    func_020bc6a8(arg0);
}
