#include <globaldefs.h>
#include "Combat/BattleHeapOwner.h"
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021b2c4c {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    int unknown_8_;
    SafeAllocator unknown_c_;
};

// USA: func_ov017_021b2c4c
extern "C" ARM void func_ov017_021b2c4c(Struct_ov017_021b2c4c* arg0) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x12;
    arg0->unknown_c_.ResetAllocatorPointer();
    arg0->unknown_8_ = 0;
    data_ov017_021d840c = 0;
    *((unsigned char*)arg0 + 0x20) = 0xff;
}
