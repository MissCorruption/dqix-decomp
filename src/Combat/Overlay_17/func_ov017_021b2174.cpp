#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

extern int data_ov017_021d83f0[2];

// USA: func_ov017_021b2174
extern "C" ARM void func_ov017_021b2174(unsigned char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0x0] = 0x2d;
    *(int*)(arg0 + 0x8) = 0;
    *(int*)(arg0 + 0xc) = -1;
    data_ov017_021d83f0[1] = 0;
    ((SafeAllocator*)(arg0 + 0x10))->ResetAllocatorPointer();

    struct Struct_ov017_021b2174 {
        unsigned int unknown_0_0_ : 1;
        unsigned int unknown_0_1_ : 1;
        unsigned int unknown_0_2_ : 1;
        unsigned int unknown_0_3_ : 1;
        unsigned int unknown_0_4_ : 1;
        unsigned int unknown_0_5_ : 1;
    };
    Struct_ov017_021b2174* var0 = (Struct_ov017_021b2174*)(arg0 + 0x38);
    var0->unknown_0_0_ = 0;
    var0->unknown_0_1_ = 0;
    var0->unknown_0_2_ = 0;
    arg0[0x24] = 0;
    *(int*)(arg0 + 0x30) = 0;
    var0->unknown_0_3_ = 1;
    var0->unknown_0_4_ = 0;
    var0->unknown_0_5_ = 0;

    arg0[0x3c] = 0xff;
    arg0[0x3d] = 0xff;
    arg0[0x3e] = 0;
    *(int*)(arg0 + 0x40) = 0;
    *(int*)(arg0 + 0x44) = 0;
    arg0[0x48] = 0;
}
