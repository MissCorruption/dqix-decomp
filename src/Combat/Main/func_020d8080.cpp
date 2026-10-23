#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c {
    signed char unknown_0_;
    signed char unknown_1_;
    signed char unknown_2_;
    signed char unknown_3_;
};
struct Struct_020727d8 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};
extern "C" void func_0204693c(struct Struct_0204693c* arg0);
extern "C" void func_020727d8(struct Struct_020727d8* arg0);

struct Struct_020d8080 {
    struct Struct_0204693c unknown_0_;   // 0x0
    int unknown_4_;                          // 0x4
    int unknown_8_;                          // 0x8
    struct Struct_020727d8 unknown_c_;            // 0xc
    SafeAllocator unknown_14_;             // 0x14
};

// USA: func_020d8080
extern "C" ARM void func_020d8080(struct Struct_020d8080* arg0) {
    func_0204693c(&arg0->unknown_0_);
    arg0->unknown_0_.unknown_0_ = 0x43;
    arg0->unknown_8_ = 0;
    func_020727d8(&arg0->unknown_c_);
    arg0->unknown_14_.ResetAllocatorPointer();
}
