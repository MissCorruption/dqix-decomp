#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02109d94_4 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_02109d94_4 data_02109d94;

struct Struct_020a14fc {
    void* unknown_0_;              // 0x0
    unsigned short unknown_4_;  // 0x4
    unsigned short unknown_6_;      // 0x6
    char unknown_8_[4];               // 0x8
    void* unknown_c_;               // 0xc
};

// USA: func_020a14fc
extern "C" ARM void func_020a14fc(struct Struct_020a14fc* arg0, void* arg1, int arg2) {
    int var0;
    if (arg1 == NULL || arg2 == 0) return;

    arg0->unknown_0_ = data_02109d94.unknown_8_->Allocate(arg2 * 0xc);
    arg0->unknown_4_ = (unsigned short)arg2;
    arg0->unknown_6_ = 0;

    var0 = (arg0->unknown_4_ - 1) / 8 + 1;
    arg0->unknown_c_ = data_02109d94.unknown_8_->Allocate(var0);
}
