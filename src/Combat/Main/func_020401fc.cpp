#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02040258;
extern "C" ARM void func_02040258(struct Struct_02040258* arg0);

struct Struct_0203d028_6 {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[2];
    void* unknown_8_;
};

// USA: func_020401fc
extern "C" ARM void func_020401fc(struct Struct_0203d028_6* arg0, unsigned int arg1, SafeAllocator* arg2) {
    unsigned int var0;
    arg0->unknown_4_ = 0;
    arg0->unknown_0_ = arg1;
    arg0->unknown_5_ = 0;
    arg0->unknown_8_ = arg2->Allocate(arg0->unknown_0_ * 0x3c);
    for (var0 = 0; var0 < arg0->unknown_0_; var0++) {
        func_02040258((struct Struct_02040258*)((char*)arg0->unknown_8_ + var0 * 0x3c));
    }
}
