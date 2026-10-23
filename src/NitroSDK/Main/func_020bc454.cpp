#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020bc084;
extern "C" void func_020bc084(struct Struct_020bc084** arg0);

struct Struct_020bc2f0_2;
extern "C" void func_020bc6fc(struct Struct_020bc2f0_2* arg0);

extern "C" void func_020bc658(SignedAllocatorList* arg0, SignedAllocatorHeader* arg1);
extern "C" SignedAllocatorHeader* func_020bc734(int arg0);

struct Struct_020bc454 {
    void* unknown_0_;
};

struct Struct_0210f824_3 {
    SignedAllocatorList unknown_0_;
    char unknown_c_[0x18 - 0xc];
    unsigned int unknown_18_;
    char unknown_1c_[0x24 - 0x1c];
};
extern struct Struct_0210f824_3 data_0210f824[];

// USA: func_020bc454
extern "C" ARM void* func_020bc454(struct Struct_020bc454* arg0, int arg1, int arg2) {
    struct Struct_0210f824_3* var0 = &data_0210f824[arg1];

    if (arg0->unknown_0_ != NULL) {
        func_020bc084((struct Struct_020bc084**)arg0);
    }

    if (var0->unknown_0_.numElements >= var0->unknown_18_) {
        SignedAllocatorHeader* var1 = var0->unknown_0_.ElementAfter(NULL);
        if (var1 == NULL) {
            return NULL;
        }
        if (arg2 < *((unsigned char*)var1 + 0x3d)) {
            return NULL;
        }
        func_020bc6fc((struct Struct_020bc2f0_2*)var1);
    }

    {
        SignedAllocatorHeader* var2 = func_020bc734(arg2);
        if (var2 == NULL) {
            return NULL;
        }
        func_020bc658(&var0->unknown_0_, var2);
        *(void**)var2 = arg0;
        arg0->unknown_0_ = var2;
        return var2;
    }
}
