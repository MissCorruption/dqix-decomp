#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov028_021d9940 {
    char unknown_0_[4];
    void* unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" void func_ov028_021d987c(void*);

// USA: func_ov028_021d9940
extern "C" ARM void func_ov028_021d9940(Struct_ov028_021d9940* arg0, SafeAllocator* arg1, unsigned int arg2) {
    arg0->unknown_4_ = arg1->Allocate(arg2 * 0xc);
    for (unsigned short var0 = 0; var0 < arg2; var0++) {
        func_ov028_021d987c((char*)arg0->unknown_4_ + var0 * 0xc);
    }
    arg0->unknown_8_ = 0;
    arg0->unknown_a_ = (unsigned short)arg2;
}
