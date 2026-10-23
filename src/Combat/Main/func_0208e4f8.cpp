#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

struct Struct_0208e4f8 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_;
};

// USA: func_0208e4f8
extern "C" ARM void func_0208e4f8(struct Struct_0208e4f8* arg0) {
    int var0 = (int)GetGameResources();
    SafeAllocator* var1 = (SafeAllocator*)(var0 + 0x1a0);
    var1->Reset();
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
}
