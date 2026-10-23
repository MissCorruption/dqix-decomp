#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02000c9c_24 { short unknown_0_; int unknown_4_; };
struct Struct_020729b4 {
    void* unknown_0_;      // 0x0
    short unknown_4_;  // 0x4
    short unknown_6_;       // 0x6
};

// USA: func_020729b4
extern "C" ARM void func_020729b4(Struct_020729b4* arg0, SafeAllocator* arg1, unsigned int arg2) {
    if (arg0->unknown_0_ != 0) return;
    arg0->unknown_6_ = 0;
    arg0->unknown_4_ = (short)arg2;
    arg0->unknown_0_ = arg1->Allocate(arg2 * 8);
    for (unsigned short var0 = 0; var0 < arg2; var0++) {
        ((short*)arg0->unknown_0_)[var0 * 4] = -1;
        *(int*)((char*)arg0->unknown_0_ + var0 * 8 + 4) = 0;
    }
}
