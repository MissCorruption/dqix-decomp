#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020545b8 {
    char unknown_0_[4];
    SafeAllocator unknown_4_[10];
    char unknown_cc_[0x460];
    SafeAllocator unknown_52c_;
    SafeAllocator unknown_540_;
    SafeAllocator unknown_554_;
    char unknown_568_[0x70];
    SafeAllocator unknown_5d8_;
};

// USA: func_020545b8
extern "C" ARM void func_020545b8(struct Struct_020545b8* arg0) {
    int var0;
    for (var0 = 0; var0 < 10; var0++) {
        if (arg0->unknown_4_[var0].GetSignedAllocator()) {
            arg0->unknown_4_[var0].Destroy();
        }
    }
    SafeAllocator* var1[4] = { &arg0->unknown_52c_, &arg0->unknown_540_, &arg0->unknown_554_, &arg0->unknown_5d8_ };
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        SafeAllocator* var3 = var1[var2];
        if (var3->GetSignedAllocator()) {
            var3->Destroy();
        }
    }
}
