#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov023_021f6ed8(void* arg0);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
struct Struct_ov023_021f9eb4;
extern "C" void func_ov023_021f9eb4(struct Struct_ov023_021f9eb4* arg0);

struct Struct_ov011_02185b10_3 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    unsigned int unknown_10_;
    char unknown_14_[8];
    unsigned int unknown_1c_;
    unsigned short unknown_20_;
    char unknown_22_[2];
    void* unknown_24_;
};

// USA: func_ov023_021f9ec8
extern "C" ARM int func_ov023_021f9ec8(struct Struct_ov011_02185b10_3* arg0, void* arg1, int arg2, int arg3, int arg4) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 9;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_1c_ = 2;
    arg0->unknown_20_ = arg4;

    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    if (var0 == NULL) {
        return 0;
    }

    SafeAllocator* var1 = (SafeAllocator*)((char*)var0 + 4);
    arg0->unknown_24_ = var1->Allocate(arg0->unknown_20_ * 0x28);
    if (arg0->unknown_24_ == NULL) {
        return 0;
    }

    int var2;
    for (var2 = 0; var2 < arg0->unknown_20_; var2++) {
        func_ov023_021f9eb4((struct Struct_ov023_021f9eb4*)((char*)arg0->unknown_24_ + var2 * 0x28));
    }
    return 1;
}
