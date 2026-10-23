#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02027b10_2712 = 0x9cc };
#else
enum { Enum_02027b10_2712 = 0xa98 };
#endif
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

struct Struct_02027b10 {
    char unknown_0_[Enum_02027b10_2712];
    unsigned char unknown_a98_;
    unsigned char unknown_a99_;
    char unknown_a9a_[2];
    void* unknown_a9c_;
};

// USA: func_02027b10
extern "C" ARM void func_02027b10(struct Struct_02027b10* arg0, unsigned int arg1) {
    int var0 = (int)GetGameResources();
    SafeAllocator* var1;
    if (arg0->unknown_a9c_ != 0) {
        var1 = (SafeAllocator*)(var0 + 0x128);
        var1->Free(arg0->unknown_a9c_);
    } else {
        var1 = (SafeAllocator*)(var0 + 0x128);
    }
    arg0->unknown_a9c_ = var1->Allocate(arg1 * 0xc);
    arg0->unknown_a98_ = arg1;
    arg0->unknown_a99_ = 0;
}
