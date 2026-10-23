#if defined(jpn)
#define R(j,u) (j)
#define func_ov013_021846a0 func_ov013_021856dc
#define func_ov013_02184d80 func_ov013_02185db4
#define func_ov013_02186160 func_ov013_02187178
#define func_ov013_021864f0 func_ov013_02187820
#define func_ov013_02186590 func_ov013_021878c0
#define func_ov013_0218678c func_ov013_02187ab8
#define func_ov013_0218683c func_ov013_02187b68
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Memory/SafeAllocator.h>

struct Struct_ov008_021842a0 {
    char unknown_0_[R(0x28,0x5c)];
    void* unknown_5c_;
};

extern "C" Struct_ov008_021842a0* func_020421a0();

struct Struct_ov008_021842a0_2 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator unknown_3c_;
    SafeAllocator unknown_50_;
    SafeAllocator unknown_64_;
    SafeAllocator unknown_78_;
    SafeAllocator unknown_8c_;
    char unknown_a0_[0x18];
    char* unknown_b8_;
    char unknown_bc_[0x72c - 0xbc];
    void* unknown_72c_;
    void* unknown_730_;
    void* unknown_734_;
    void* unknown_738_;
    char unknown_73c_[0xb24 - 0x73c];
    int unknown_b24_;
};

// USA: func_ov008_021842a0
extern "C" ARM void func_ov008_021842a0(Struct_ov008_021842a0_2* arg0, SafeAllocator* arg1)
{
    if (arg1 == NULL)
        return;
    arg0->unknown_14_.CreateTypeA(arg1->Allocate(0x2400), 0x2400);
    arg0->unknown_28_.CreateTypeA(arg1->Allocate(0x800), 0x800);
    if (arg0->unknown_b24_ == 0)
    {
        arg0->unknown_0_.CreateTypeA(arg1->Allocate(0x1000), 0x1000);
        arg0->unknown_3c_.CreateTypeA(arg1->Allocate(0x200), 0x200);
        arg0->unknown_50_.CreateTypeA(arg1->Allocate(0x400), 0x400);
        arg0->unknown_64_.CreateTypeA(arg1->Allocate(0x8800), 0x8800);
        arg0->unknown_78_.CreateTypeA(arg1->Allocate(R(0xa000,0x8000)), R(0xa000,0x8000));
        arg0->unknown_8c_.CreateTypeA(arg1->Allocate(R(0x6000,0x8000)), R(0x6000,0x8000));
        arg0->unknown_730_ = arg1->Allocate(0x54);
        arg0->unknown_734_ = arg1->Allocate(0x2d0);
        arg0->unknown_738_ = arg1->Allocate(8);
        arg0->unknown_b8_ = (char*)func_020421a0()->unknown_5c_;
    }
    else
    {
        arg0->unknown_b8_ = (char*)arg1->Allocate(R(0x800,0x960));
    }
    arg0->unknown_72c_ = arg0->unknown_14_.Allocate(0x1c00);
}
