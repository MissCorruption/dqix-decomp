#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

extern SignedAllocatorList data_0210f3d8;

// USA: func_020bc6a8
extern "C" ARM void func_020bc6a8(SignedAllocatorHeader* arg0) {
    SignedAllocatorHeader* var0 = data_0210f3d8.ElementAfter(NULL);
    if (var0 != NULL) {
        do {
            if (*((unsigned char*)arg0 + 0x3d) < *((unsigned char*)var0 + 0x3d)) break;
            var0 = data_0210f3d8.ElementAfter(var0);
        } while (var0 != NULL);
    }
    data_0210f3d8.InsertBefore(var0, arg0);
}
