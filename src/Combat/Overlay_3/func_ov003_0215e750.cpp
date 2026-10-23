#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov003_0215e4e4 {
    void* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_ov003_0215e750
extern "C" ARM void func_ov003_0215e750(struct Struct_ov003_0215e4e4* arg0, SafeAllocator* arg1, int arg2) {
    if (arg1 == NULL) return;
    if (arg2 < 0) return;
    arg0->unknown_0_ = arg1->Allocate(arg2 * 0x14);
    arg0->unknown_4_ = (unsigned short)arg2;
    arg0->unknown_6_ = 0;
}
