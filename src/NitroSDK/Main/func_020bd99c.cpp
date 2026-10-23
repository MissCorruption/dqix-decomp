#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

extern "C" void func_020bdc60();
extern "C" int func_020bdc24(void* arg0);

struct Struct_020bd99c {
    HMRFAllocator* unknown_0_;
    SignedAllocatorList unknown_4_;
};

typedef void (*Type_020bd99c)(void*, int, int, int);

// USA: func_020bd99c
extern "C" ARM int func_020bd99c(struct Struct_020bd99c* arg0) {
    SignedAllocatorList* var0;
    int var1 = 0;
    var0 = (SignedAllocatorList*)arg0->unknown_4_.ElementBefore(NULL);
    if (var0 != NULL) {
        do {
            SignedAllocatorHeader* var2 = var0->ElementBefore(NULL);
            if (var2 != NULL) {
                do {
                    Type_020bd99c var3 = *(Type_020bd99c*)((char*)var2 + 0xc);
                    if (var3 != NULL) {
                        var3((char*)var2 + 0x20, *(int*)((char*)var2 + 8), *(int*)((char*)var2 + 0x10), *(int*)((char*)var2 + 0x14));
                        var1 = 1;
                    }
                    var2 = var0->ElementBefore(var2);
                } while (var2 != NULL);
            }
            arg0->unknown_4_.Remove((SignedAllocatorHeader*)var0);
            var0 = (SignedAllocatorList*)arg0->unknown_4_.ElementBefore(NULL);
        } while (var0 != NULL);
    }
    arg0->unknown_0_->Free(3);
    if (var1) {
        func_020bdc60();
    }
    return func_020bdc24(arg0);
}
