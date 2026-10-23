#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

// USA: func_020bc658
extern "C" ARM void func_020bc658(SignedAllocatorList* arg0, SignedAllocatorHeader* arg1) {
    SignedAllocatorHeader* var0 = arg0->ElementAfter(NULL);
    if (var0 != NULL) {
        do {
            if (*((unsigned char*)arg1 + 0x3d) < *((unsigned char*)var0 + 0x3d)) break;
            var0 = arg0->ElementAfter(var0);
        } while (var0 != NULL);
    }
    arg0->InsertBefore(var0, arg1);
    arg1->pPrevAllocator = (SignedAllocatorHeader*)arg0;
}
