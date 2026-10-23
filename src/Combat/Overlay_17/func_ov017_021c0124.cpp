#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);
extern int data_ov017_021d8474;

struct Struct_ov017_021c0124 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    SafeAllocator unknown_8_;
    int unknown_1c_;
    unsigned char unknown_20_;
};

// USA: func_ov017_021c0124
extern "C" ARM void func_ov017_021c0124(Struct_ov017_021c0124* arg0, unsigned char arg1) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x20;
    arg0->unknown_8_.ResetAllocatorPointer();
    data_ov017_021d8474 = 0;
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = arg1;
}
