#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Memory/SafeAllocator.h>

struct Struct_ov005_02153954 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_[8];
    SafeAllocator unknown_c8_[16];
    SafeAllocator unknown_208_;
    SafeAllocator unknown_21c_;
    SafeAllocator unknown_230_;
    SafeAllocator unknown_244_;
    SafeAllocator unknown_258_;
    SafeAllocator unknown_26c_;
    SafeAllocator unknown_280_;
    char unknown_294_[R(0x3d00, 0x3d88) - 0x294];
    char* unknown_3d88_;
    char* unknown_3d8c_;
    char* unknown_3d90_;
    char* unknown_3d94_;
};

// USA: func_ov005_02153954
extern "C" ARM void func_ov005_02153954(Struct_ov005_02153954* arg0, SafeAllocator* arg1, SafeAllocator* arg2) {
    if (arg1 == NULL || arg2 == NULL)
        return;
    arg0->unknown_14_.CreateTypeA(arg2->Allocate(0x1300), 0x1300);
    for (int var0 = 0; var0 < 8; var0++)
        arg0->unknown_28_[var0].CreateTypeA(arg2->Allocate(R(0x100, 0xe0)), R(0x100, 0xe0));
    for (int var1 = 0; var1 < 16; var1++)
        arg0->unknown_c8_[var1].CreateTypeA(arg2->Allocate(R(0x100, 0xe0)), R(0x100, 0xe0));
    arg0->unknown_208_.CreateTypeA(arg2->Allocate(R(0x100, 0xe0)), R(0x100, 0xe0));
    arg0->unknown_21c_.CreateTypeA(arg2->Allocate(R(0x600, 0xc00)), R(0x600, 0xc00));
    arg0->unknown_244_.CreateTypeA(arg1->Allocate(0x1e00), 0x1e00);
    arg0->unknown_0_.CreateTypeA(arg1->Allocate(0x4b00), 0x4b00);
    arg0->unknown_258_.CreateTypeA(arg1->Allocate(0x4a00), 0x4a00);
    arg0->unknown_26c_.CreateTypeA(arg1->Allocate(0x1e00), 0x1e00);
    arg0->unknown_280_.CreateTypeA(arg2->Allocate(0x200), 0x200);
    arg0->unknown_3d88_ = (char*)arg1->Allocate(0x800);
    arg0->unknown_3d8c_ = (char*)arg2->Allocate(0x200);
    arg0->unknown_3d90_ = (char*)arg1->Allocate(0x800);
    arg0->unknown_3d94_ = (char*)arg2->Allocate(0x200);
}
