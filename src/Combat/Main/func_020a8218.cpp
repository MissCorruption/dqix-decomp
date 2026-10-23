#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern SafeAllocator* data_02109fe0;

struct Struct_020a8218 {
    void* unknown_0_;              // 0x0
    unsigned short unknown_4_;   // 0x4
    unsigned short unknown_6_;      // 0x6
};

// USA: func_020a8218
extern "C" ARM void func_020a8218(struct Struct_020a8218* arg0, int arg1, int arg2) {
    if (arg1 == 0 || arg2 == 0) return;
    arg0->unknown_0_ = data_02109fe0->Allocate(arg2 * 0x2c);
    arg0->unknown_4_ = (unsigned short)arg2;
    arg0->unknown_6_ = 0;
}
