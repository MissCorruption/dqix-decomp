#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov003_0215e5fc {
    char unknown_0_[8];
    void* unknown_8_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};

// USA: func_ov003_0215e85c
extern "C" ARM void func_ov003_0215e85c(struct Struct_ov003_0215e5fc* arg0, class SafeAllocator* arg1, int arg2) {
    if (arg1 == NULL) {
        return;
    }
    if (arg2 < 0) {
        return;
    }
    arg0->unknown_8_ = arg1->Allocate(arg2 * 8);
    arg0->unknown_c_ = arg2;
    arg0->unknown_e_ = 0;
}
