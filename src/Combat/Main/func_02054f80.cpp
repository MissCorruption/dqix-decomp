#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_02054f80 {
    int unknown_0_;
    int unknown_4_;
    SignedAllocatorList unknown_8_[3];
    SignedAllocatorList unknown_2c_[3];
    SignedAllocatorList unknown_50_[3];
    SignedAllocatorList unknown_74_;
    SignedAllocatorList unknown_80_[3];
    SignedAllocatorList unknown_a4_;
    SignedAllocatorList unknown_b0_;
    SignedAllocatorList unknown_bc_;
    SignedAllocatorList unknown_c8_;
    SignedAllocatorList unknown_d4_;
    SignedAllocatorList unknown_e0_;
    SignedAllocatorList unknown_ec_;
    SignedAllocatorList unknown_f8_;
    SignedAllocatorList unknown_104_;
    SignedAllocatorList unknown_110_;
    SignedAllocatorList unknown_11c_;
};

// USA: func_02054f80
extern "C" ARM void func_02054f80(Struct_02054f80* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;

    for (int var0 = 0; var0 < 3; var0++) {
        arg0->unknown_8_[var0].Initialize(4);
        arg0->unknown_2c_[var0].Initialize(4);
        arg0->unknown_50_[var0].Initialize(4);
        arg0->unknown_80_[var0].Initialize(4);
    }

    arg0->unknown_74_.Initialize(4);
    arg0->unknown_a4_.Initialize(4);
    arg0->unknown_b0_.Initialize(4);
    arg0->unknown_bc_.Initialize(4);
    arg0->unknown_c8_.Initialize(4);
    arg0->unknown_d4_.Initialize(4);
    arg0->unknown_e0_.Initialize(4);
    arg0->unknown_ec_.Initialize(4);
    arg0->unknown_f8_.Initialize(4);
    arg0->unknown_104_.Initialize(4);
    arg0->unknown_110_.Initialize(4);
    arg0->unknown_11c_.Initialize(4);
}
