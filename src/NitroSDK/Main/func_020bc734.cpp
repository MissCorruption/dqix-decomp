#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020bc2f0_2;
extern "C" void func_020bc6fc(struct Struct_020bc2f0_2* arg0);
extern "C" void func_020bc6a8(SignedAllocatorHeader* arg0);

extern SignedAllocatorList data_0210f3cc;
extern SignedAllocatorList data_0210f3d8;

// USA: func_020bc734
extern "C" ARM SignedAllocatorHeader* func_020bc734(int arg0) {
    SignedAllocatorHeader* var0 = data_0210f3cc.ElementAfter(NULL);
    if (var0 == NULL) {
        var0 = data_0210f3d8.ElementAfter(NULL);
        if (arg0 < *((unsigned char*)var0 + 0x3d)) {
            return NULL;
        }
        func_020bc6fc((struct Struct_020bc2f0_2*)var0);
    }
    data_0210f3cc.Remove(var0);
    *((unsigned char*)var0 + 0x3d) = arg0;
    func_020bc6a8(var0);
    return var0;
}
