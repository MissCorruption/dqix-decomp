#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020263e4 {
#if defined(jpn)
    char unknown_0_[0x6c0];
#else
    char unknown1_0_[0x76c];
#endif
    SafeAllocator* unknown_76c_;
    void* unknown_770_;
    int unknown_774_;
};

// USA: func_020263e4
extern "C" ARM void func_020263e4(struct Struct_020263e4* arg0) {
    if (arg0->unknown_76c_ != NULL && arg0->unknown_770_ != NULL) {
        arg0->unknown_76c_->Free(arg0->unknown_770_);
    }
    arg0->unknown_76c_ = NULL;
    arg0->unknown_770_ = NULL;
    arg0->unknown_774_ = 0;
}
