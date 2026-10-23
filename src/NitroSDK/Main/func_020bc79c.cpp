#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

extern SignedAllocatorList data_0210f3d8;
extern SignedAllocatorList data_0210f3cc;

struct Struct_020bc79c {
    void* unknown_0_;                  /* 0x0 */
    SignedAllocatorList* unknown_4_;  /* 0x4 */
    void* unknown_8_;                      /* 0x8 */
    char unknown_c_[0x2c - 0xc];
    unsigned char unknown_2c_;          /* 0x2c */
};

// USA: func_020bc79c
extern "C" ARM void func_020bc79c(struct Struct_020bc79c* arg0) {
    if (arg0->unknown_0_ != NULL) {
        *(void**)arg0->unknown_0_ = NULL;
        arg0->unknown_0_ = NULL;
    }
    SignedAllocatorList* var0 = arg0->unknown_4_;
    var0->Remove((SignedAllocatorHeader*)arg0);
    arg0->unknown_4_ = NULL;
    if (arg0->unknown_8_ != NULL) {
        ((SignedAllocatorList*)((char*)var0 + 0xc))->InsertAtEnd((SignedAllocatorHeader*)arg0->unknown_8_);
        *(void**)((char*)arg0->unknown_8_ + 0xc) = NULL;
        arg0->unknown_8_ = NULL;
    }
    data_0210f3d8.Remove((SignedAllocatorHeader*)arg0);
    data_0210f3cc.InsertAtEnd((SignedAllocatorHeader*)arg0);
    arg0->unknown_2c_ = 0;
}
