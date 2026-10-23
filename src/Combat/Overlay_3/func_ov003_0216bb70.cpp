#include <globaldefs.h>
#if defined(jpn)
#define REGION_LAYOUT(j,u) j
#else
#define REGION_LAYOUT(j,u) u
#endif
#include <GameState/GameState.h>
#include <Memory/SafeAllocator.h>
#include <NitroSDK/Graphics.h>
#include <NitroSDK/Memory.h>
#include <std_library_functions.h>

struct Struct_ov000_0217636c_2 {
    char unknown_0_[REGION_LAYOUT(0x28, 0x5c)];
    void* unknown_5c_;
    char unknown_60_[REGION_LAYOUT(0x868, 0x998) - REGION_LAYOUT(0x2c, 0x60)];
    int unknown_998_;
};

struct Struct_02000c9c_87;

struct Struct_ov003_0216bb70 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    char unknown_c_[0x14 - 0xc];
    char unknown_14_[REGION_LAYOUT(0x41c, 0x404) - 0x14];
    unsigned char unknown_404_;
    unsigned char unknown_405_;
    char unknown_406_[REGION_LAYOUT(0x1164, 0x12d4) - REGION_LAYOUT(0x41e, 0x406)];
    SafeAllocator unknown_12d4_;
    char unknown_12e8_[REGION_LAYOUT(0x127c, 0x13ec) - REGION_LAYOUT(0x1178, 0x12e8)];
    unsigned char unknown_13ec_;
};

extern "C" Struct_ov000_0217636c_2* func_020421a0();
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern AllocatorUnion data_02114e20;

extern "C" void func_ov003_0215c650(void* arg0);
extern "C" void func_ov003_0215c568(void* arg0, SafeAllocator* arg1);
extern "C" int func_ov003_0215c924(void* arg0, unsigned int arg1);
extern "C" void func_ov003_0215c800(void* arg0);
#if defined(jpn)
extern "C" void func_ov003_0216d8d4(Struct_ov003_0216bb70* arg0, int arg1);
#else
extern "C" void func_ov003_0216d8d4(Struct_ov003_0216bb70* arg0, int arg1, int arg2, int arg3, int arg4);
#endif

// USA: func_ov003_0216bb70
extern "C" ARM void func_ov003_0216bb70(Struct_ov003_0216bb70* arg0)
{
    GameState* var0 = GameState::GetInstance();

    if (arg0->unknown_6_ == 0) {
        memset(func_020421a0()->unknown_5c_, 0, REGION_LAYOUT(0x800, 0x960));
        void* var1 = func_02012d88(&data_02114e20, 0x10000);
        VectorizedMemset(var1, 0, 0x10000);
        arg0->unknown_12d4_.CreateTypeA(var1, 0x10000);
        arg0->unknown_12d4_.Reset();
        func_ov003_0215c650(arg0->unknown_14_);
        func_ov003_0215c568(arg0->unknown_14_, &arg0->unknown_12d4_);
        arg0->unknown_404_ = 1;
        arg0->unknown_6_ = 1;
    }
    if (arg0->unknown_6_ == 1) {
        if (func_ov003_0215c924(arg0->unknown_14_, var0->GetTickCount())) {
            arg0->unknown_6_ = 2;
        }
    }
    if (arg0->unknown_6_ == 2) {
        unsigned char var2 = arg0->unknown_405_;
        func_ov003_0215c800(arg0->unknown_14_);
        SignedAllocatorHeader* var3 = arg0->unknown_12d4_.GetSignedAllocator();
        if (var3 != NULL) {
            arg0->unknown_12d4_.Destroy();
            func_02012da4(&data_02114e20, var3);
        }
        if (var2 == 0) {
            arg0->unknown_4_ = 7;
            arg0->unknown_6_ = 0;
            return;
        }
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
        arg0->unknown_a_ = 3;
        func_020421a0()->unknown_998_ = 1;
#if defined(jpn)
        func_ov003_0216d8d4(arg0, 0x29);
#else
        func_ov003_0216d8d4(arg0, 0x29, -1, -1, -1);
#endif
        arg0->unknown_4_ = 1;
        arg0->unknown_6_ = 0;
        arg0->unknown_8_ = 0;
        arg0->unknown_13ec_ |= 1;
    }
}
