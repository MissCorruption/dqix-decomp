#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov017_0219bf74(void);

struct Struct_ov003_0217bd38 {
    SafeAllocator* unknown_0_;
    SafeAllocator unknown_4_;
    SafeAllocator unknown_18_;
    SafeAllocator unknown_2c_;
};

// USA: func_ov003_0217bd38
extern "C" ARM void func_ov003_0217bd38(Struct_ov003_0217bd38* arg0) {
    arg0->unknown_0_ = (SafeAllocator*)func_ov017_0219bf74();
    void* var0 = arg0->unknown_0_->Allocate(0x32000);
    arg0->unknown_4_.CreateTypeA(var0, 0x32000);
    arg0->unknown_4_.Reset();
    void* var1 = arg0->unknown_0_->Allocate(0x6800);
    arg0->unknown_18_.CreateTypeA(var1, 0x6800);
    arg0->unknown_18_.Reset();
    void* var2 = arg0->unknown_0_->Allocate(0x6800);
    arg0->unknown_2c_.CreateTypeA(var2, 0x6800);
    arg0->unknown_2c_.Reset();
}
