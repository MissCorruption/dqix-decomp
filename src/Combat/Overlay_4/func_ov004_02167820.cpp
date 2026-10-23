#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov023_021f6ed8(void* arg0);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_0208b9a0(void*, int);

struct Struct_0208b8c4;
extern "C" void func_0208b8c4(struct Struct_0208b8c4* arg0, SafeAllocator* arg1);

struct Struct_ov004_02167820 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    char unknown_a_[0x1c - 0xa];
    int unknown_1c_;
    SafeAllocator unknown_20_;
    char unknown_34_[0x106 - 0x34];
    unsigned short unknown_106_;
};

// USA: func_ov004_02167820
extern "C" ARM int func_ov004_02167820(Struct_ov004_02167820* arg0, void* arg1, int arg2, int arg3) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0x15;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_1c_ = 2;

    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    if (!var0) {
        return 0;
    }

    arg0->unknown_20_.ResetAllocatorPointer();
    void* var1 = ((SafeAllocator*)((char*)var0 + 4))->Allocate(0x2800);
    arg0->unknown_20_.CreateTypeA(var1, 0x2800);

    func_0208b9a0((char*)arg0 + 0x34, 1);
    func_0208b8c4((struct Struct_0208b8c4*)((char*)arg0 + 0x34), &arg0->unknown_20_);

    arg0->unknown_106_ = 0x270f;
    return 1;
}
