#include <globaldefs.h>

#include "Resource/GameResources.h"

struct Struct_02026b0c {
    short unknown_0_;
    char unknown_2_[24];
};

struct Struct_0201f8d0_2 {
    #if defined(jpn)
    char unknown_0_[0x6ce];
#else
    char unknown1_0_[0x77a];
#endif
    unsigned char unknown_77a_;
    unsigned char unknown_77b_;
    Struct_02026b0c* unknown_77c_;
};

// USA: func_02026b0c
extern "C" ARM void func_02026b0c(struct Struct_0201f8d0_2* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    SafeAllocator* var1 = &var0->allocator_array_38[12];
    arg0->unknown_77a_ = arg1;
    arg0->unknown_77c_ = static_cast<Struct_02026b0c*>(var1->Allocate((arg1 & 0xff) * sizeof(Struct_02026b0c)));
}
