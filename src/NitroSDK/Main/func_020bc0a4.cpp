#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

extern SignedAllocatorList data_0210f3d8;

struct Struct_020bc0a4 {
    unsigned char unknown_0_[0x34];
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned short unknown_38_;
};

// USA: func_020bc0a4
extern "C" ARM int func_020bc0a4(int arg0) {
    int var0 = 0;
    SignedAllocatorHeader* var1 = data_0210f3d8.ElementAfter(NULL);
    if (var1 != NULL) {
        do {
            Struct_020bc0a4* var2 = (Struct_020bc0a4*)var1;
            if (var2->unknown_34_ == 1 && var2->unknown_38_ == arg0) var0++;
            var1 = data_0210f3d8.ElementAfter(var1);
        } while (var1 != NULL);
    }
    return var0;
}
