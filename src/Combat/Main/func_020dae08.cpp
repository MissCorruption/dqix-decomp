#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov003_0217db88(void);
extern "C" int func_020a1e54(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern int data_02114e20;
extern "C" void func_020a0c0c(void);

struct Struct_020dae08 {
    char unknown_0_;
    char unknown_1_;
    char unknown_2_[0xc - 2];
    int unknown_c_;
    char unknown_10_[0x14 - 0xc - 4];
    SafeAllocator unknown_14_;
};

// USA: func_020dae08
extern "C" ARM void func_020dae08(struct Struct_020dae08* arg0) {
    if (arg0->unknown_c_ != 0) {
        func_ov003_0217db88();
        arg0->unknown_c_ = 0;
        func_020a1e54(1);
    }
    void* var0 = arg0->unknown_14_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_14_.Destroy();
        func_02012da4((AllocatorUnion*)&data_02114e20, var0);
    }
    func_020a0c0c();
    arg0->unknown_1_ = 1;
}
