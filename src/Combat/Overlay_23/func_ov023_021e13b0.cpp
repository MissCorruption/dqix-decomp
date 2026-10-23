#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_021e12cc;
extern "C" void func_ov023_021e12cc(struct Struct_021e12cc* arg0);

struct Struct_ov023_021e13b0 {
    char unknown_0_[4];
    char* unknown_4_;
    short unknown_8_;
    short unknown_a_;
};

// USA: func_ov023_021e13b0
extern "C" ARM void func_ov023_021e13b0(Struct_ov023_021e13b0* arg0, SafeAllocator* arg1, int arg2) {
    if (arg1 == 0 || arg2 == 0) return;
    arg0->unknown_4_ = (char*)arg1->Allocate(arg2 * 0x10);
    arg0->unknown_8_ = 0;
    arg0->unknown_a_ = arg2;
    for (short var0 = 0; var0 < arg0->unknown_a_; var0++) {
        func_ov023_021e12cc((struct Struct_021e12cc*)(arg0->unknown_4_ + var0 * 0x10));
    }
}
