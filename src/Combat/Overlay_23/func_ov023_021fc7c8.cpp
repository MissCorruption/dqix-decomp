#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "Input/Input.h"

struct Struct_ov023_021fc7c8
{
    char unknown_0_[0xc12];
    unsigned char unknown_c12_;
    char unknown_c13_[0xc20 - 0xc13];
};

class Struct_ov023_021fc7c8_2
{
public:
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    const char* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    int unknown_1c_;
    Struct_ov023_021fc7c8 unknown_20_[2];
    int unknown_1860_;
    unsigned char unknown_1864_0_ : 1;
    unsigned char unknown_1864_1_ : 1;
    unsigned char unknown_1864_2_ : 1;
    unsigned char unknown_1864_3_ : 1;
    void (**unknown_1868_)(void* script);
    void (**unknown_186c_)(void* script);

    virtual void inline_ov023_021fc7c8(void* arg0);
};

struct Struct_ov009_02188454;

extern "C" void func_020c54a4(int, unsigned int, unsigned int, unsigned short);
extern "C" void func_ov023_021e5020(Struct_ov023_021fc7c8* arg0);
extern "C" Vector3i func_ov023_021e613c(Struct_ov023_021fc7c8* arg0);
extern "C" char* func_020100f8(char* arg0);
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" void func_0202ee38(char*, int, int);
extern "C" void func_0202ee58(char*, int, int);
extern "C" void func_ov023_021e6088(void* arg0, Struct_ov009_02188454* arg1);

extern const Vector3i data_ov023_021fda08;
extern const Vector3i data_ov023_021fd9fc;
extern const Vector3i data_ov023_021fd9f0;
extern const Vector3i data_ov023_021fd9e4;

// USA: func_ov023_021fc7c8
extern "C" ARM void func_ov023_021fc7c8(Struct_ov023_021fc7c8_2* arg0, void* arg1)
{
    func_020c54a4(0, 0, 0, 0);
    GameState* var0 = GameState::GetInstance();
    unsigned int var1 = var0->GetTickCount();
    if (var1 == 0)
        var1 = 1;
    func_ov023_021e5020(&arg0->unknown_20_[0]);
    func_ov023_021e5020(&arg0->unknown_20_[1]);
    if (arg0->unknown_1864_3_)
    {
        int var2 = (arg0->unknown_1864_0_ + 1) % 2;
        if (!arg0->unknown_20_[var2].unknown_c12_)
        {
            arg0->unknown_1864_0_ = var2;
            arg0->unknown_1864_3_ = 0;
        }
    }
    Struct_ov023_021fc7c8* var3 = &arg0->unknown_20_[arg0->unknown_1864_0_];
    Vector3i var4 = func_ov023_021e613c(var3);
    int var5 = fix32ReduceAngle0To2Pi(0x1eb - var4.y);
    int var6 = 0;
    if (g_keyManager.TestKeysHeld(0x200) && g_keyManager.TestKeysHeld(0x100))
    {
        if (!arg0->unknown_1864_1_)
            arg0->unknown_1864_1_ = 1;
    }
    if (g_keyManager.TestKeysHeld(0x40))
    {
        const Vector3i var7 = data_ov023_021fda08;
        const Vector3i var8 = data_ov023_021fd9fc;
        char* var9 = func_020100f8((char*)var0);
        func_020a28a0((unsigned char*)var9, 2);
        func_0202ee38(var9, (int)&var7, 0xa000);
        func_0202ee58(var9, (int)&var8, 0xa000);
    }
    else if (g_keyManager.TestKeysHeld(0x80))
    {
        const Vector3i var10 = data_ov023_021fd9f0;
        const Vector3i var11 = data_ov023_021fd9e4;
        char* var12 = func_020100f8((char*)var0);
        func_020a28b0((unsigned char*)var12, 2);
        func_0202ee38(var12, (int)&var10, 0xa000);
        func_0202ee58(var12, (int)&var11, 0xa000);
    }
    if (arg0->unknown_1864_1_)
    {
        if (var5 >= 0 && var5 < 0x3244)
        {
            var6 = var4.y + var5 / 12;
            for (unsigned int var13 = 0; var13 < var1 - 1; var13++)
                var6 += fix32ReduceAngle0To2Pi(0x1eb - var6) / 12;
        }
        else if (var5 >= 0x3244 && var5 < 0x6488)
        {
            var6 = var4.y - (0x6488 - var5) / 12;
            for (unsigned int var14 = 0; var14 < var1 - 1; var14++)
                var6 -= (0x6488 - fix32ReduceAngle0To2Pi(0x1eb - var6)) / 12;
        }
        var4.y = fix32ReduceAngle0To2Pi(var6);
        int var15 = fix32ReduceAngle0To2Pi(0x1eb - var6);
        int var16 = var15 < 0 ? -var15 : var15;
        if (var16 < 0x28)
        {
            arg0->unknown_1864_1_ = 0;
        }
        else
        {
            var16 = 0x6488 - var15;
            if (var16 < 0)
                var16 = -var16;
            if (var16 < 0x28)
                arg0->unknown_1864_1_ = 0;
        }
        if (!arg0->unknown_1864_1_)
            var4.y = 0x1eb;
    }
    else if (g_keyManager.TestKeysHeld(0x200))
    {
        if (arg0->unknown_1868_ != NULL)
        {
            (*arg0->unknown_1868_)(arg1);
            var4 = func_ov023_021e613c(var3);
        }
        else
        {
            var4.y += (int)(4096.0f * (0.08f * var1));
            var4.y = fix32ReduceAngle0To2Pi(var4.y);
        }
    }
    else if (g_keyManager.TestKeysHeld(0x100))
    {
        if (arg0->unknown_186c_ != NULL)
        {
            (*arg0->unknown_186c_)(arg1);
            var4 = func_ov023_021e613c(var3);
        }
        else
        {
            var4.y += (int)(4096.0f * (-0.08f * var1));
            var4.y = fix32ReduceAngle0To2Pi(var4.y);
        }
    }
    func_ov023_021e6088(var3, (Struct_ov009_02188454*)&var4);
}
