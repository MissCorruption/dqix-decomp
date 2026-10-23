#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

extern "C" void func_020bd99c(void*);

struct Struct_0210f824_4 {
    char unknown_0_[0xc];
    SignedAllocatorList unknown_c_;  /* 0xc */
    char unknown_18_[0xc];
};
extern struct Struct_0210f824_4 data_0210f824[];

struct Struct_020bc5bc {
    char unknown_0_[8];
    void* unknown_8_;                 /* 0x8 */
    struct Struct_020bc5bc* unknown_c_;  /* 0xc */
};

// USA: func_020bc5bc
extern "C" ARM void* func_020bc5bc(int arg0, struct Struct_020bc5bc* arg1) {
    Struct_020bc5bc* var0 = (Struct_020bc5bc*)data_0210f824[arg0].unknown_c_.ElementAfter(NULL);
    if (var0 == NULL) return NULL;
    data_0210f824[arg0].unknown_c_.Remove((SignedAllocatorHeader*)var0);
    var0->unknown_c_ = arg1;
    arg1->unknown_8_ = var0;
    func_020bd99c(var0->unknown_8_);
    return var0->unknown_8_;
}
