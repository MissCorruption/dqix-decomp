#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

extern "C" void func_020bdc60();
extern "C" int func_020bd99c(void* arg0);
extern "C" int func_020bdc24(void* arg0);

struct Struct_020bdb0c {
    HMRFAllocator* unknown_0_;
    SignedAllocatorList unknown_4_;
};

typedef void (*Type_020bdb0c)(void*, int, int, int);

// USA: func_020bdb0c
extern "C" ARM void func_020bdb0c(struct Struct_020bdb0c* arg0, int arg1) {
    SignedAllocatorList* var0;
    int var1;
    SignedAllocatorHeader* var2;
    var2 = NULL;
    var1 = 0;
    if (arg1 == 0) {
        func_020bd99c(arg0);
        return;
    }
    if (arg1 < arg0->unknown_4_.numElements) {
        do {
            var0 = (SignedAllocatorList*)arg0->unknown_4_.ElementBefore(NULL);
            var2 = var0->ElementBefore(var2);
            if (var2 != NULL) {
                do {
                    Type_020bdb0c var3 = *(Type_020bdb0c*)((char*)var2 + 0xc);
                    if (var3 != NULL) {
                        var3((char*)var2 + 0x20, *(int*)((char*)var2 + 8), *(int*)((char*)var2 + 0x10), *(int*)((char*)var2 + 0x14));
                        var1 = 1;
                    }
                    var2 = var0->ElementBefore(var2);
                } while (var2 != NULL);
            }
            arg0->unknown_4_.Remove((SignedAllocatorHeader*)var0);
        } while (arg1 < arg0->unknown_4_.numElements);
    }
    arg0->unknown_0_->RestoreState(arg1);
    if (var1) {
        func_020bdc60();
    }
    arg0->unknown_0_->SaveCurrentState(arg0->unknown_4_.numElements);
    func_020bdc24(arg0);
}
