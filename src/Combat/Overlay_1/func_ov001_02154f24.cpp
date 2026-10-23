#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include <GameState/GameState.h>
#include <Resource/Brightness.h>
#include <Filesystem/BackgroundLoader.h>
#include <NitroSDK/Memory/AllocatorUnion.h>
#include <NitroSDK/Memory/HMRFAllocator.h>
#include <std_library_functions.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0203cf58;
struct Struct_020e385c;
struct Struct_ov001_02154f24_3
{
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[7];
    unsigned char unknown_13_;
    char unknown_14_[4];
    unsigned short unknown_18_;
    char unknown_1a_[0x3e - 0x1a];
    char unknown_3e_[0x50 - 0x3e];
    unsigned short unknown_50_;
    char unknown_52_[0x74 - 0x52];
    int unknown_74_;
#if !defined(jpn)
    int unknown_78_;
#endif
    SafeAllocator unknown_7c_;
    unsigned int unknown_90_;
    char unknown_94_[8];
    unsigned char unknown_9c_;
    char unknown_9d_[0x110 - 0x9d];
    int unknown_110_;
};
struct Struct_ov001_02154f24
{
    unsigned short unknown_0_;
};
struct Struct_ov001_02154f24_2
{
    char unknown_0_[8];
    unsigned int unknown_8_;
    char unknown_c_[0x34 - 0xc];
};
extern "C" void* func_0203cf4c();
extern "C" Struct_ov001_02154f24* func_02012fe4();
extern "C" void* func_0202ae18();
extern "C" void func_02012de4(AllocatorUnion*);
extern "C" void func_020a0cc4(int);
extern "C" void func_0203e0a0(void*, int);
extern "C" void func_ov017_021a316c(GameResources*);
extern "C" void func_0203cf58(Struct_0203cf58*);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void __clear(void*, unsigned int);
extern "C" void* func_0205ec34();
extern "C" int func_020649b0(void*, int, void*);
extern "C" void func_0206f81c(void*);
extern "C" Struct_020e385c* func_020e3808();
extern "C" void* func_020e385c(Struct_020e385c*, int, int);
extern "C" int func_0202c508(void*);
extern "C" void func_020e3994(Struct_020e385c*, int, int);
extern "C" void func_020e392c(Struct_020e385c*, int, int);
extern "C" int func_020100a8(GameState*);
extern "C" void func_020e39d4(Struct_020e385c*, int, int, int);
extern AllocatorUnion data_02114e20;
extern const char data_ov001_02164bef[];
extern const char data_ov001_02164c01[];
extern const char data_ov001_02164c13[];
#if defined(jpn)
extern const char data_ov001_021661c1[];
#else
extern const char data_ov001_02164c21[];
#endif
extern const char data_ov001_02164c26[];
extern const char data_ov001_02164c2d[];
extern const char data_ov001_02164c39[];

static inline SafeAllocator* inline_ov001_02154f24(GameResources* arg0, int arg1)
{
    return &arg0->allocator_array_38[arg1];
}

// USA: func_ov001_02154f24
extern "C" ARM int func_ov001_02154f24(Struct_ov001_02154f24_3* arg0)
{
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    void* var3 = func_0203cf4c();
    Struct_ov001_02154f24* var4 = func_02012fe4();
    void* var5 = func_0202ae18();
    if (!TestFlags00(var1, 0x1000))
    {
        if (!func_02094b4c(func_02094a00()))
        {
            return arg0->unknown_a_;
        }
    }
    if (IsBrightnessTransitionActive(var1))
    {
        return arg0->unknown_a_;
    }
    func_02012de4(&data_02114e20);
    func_020a0cc4(0x40400);
    func_02012de4(&data_02114e20);
    if ((arg0->unknown_50_ & 1) && !TestFlags00(var1, 0x1000))
    {
        func_0203e0a0(var3, var4->unknown_0_);
        func_ov017_021a316c(var1);
        func_0203cf58((Struct_0203cf58*)func_0203cf4c());
        SafeAllocator* var6 = inline_ov001_02154f24(var1, 7);
        arg0->unknown_90_ = var6->GetSize();
        void* var7 = var6->GetSignedAllocator();
        var6->Destroy();
        func_02012da4(&data_02114e20, var7);
    }
    else if (arg0->unknown_50_ & 4)
    {
        func_0203e0a0(var3, var4->unknown_0_);
        func_ov017_021a316c(var1);
        func_0203cf58((Struct_0203cf58*)func_0203cf4c());
        var1->allocator_array_38[7].Reset();
    }
    unsigned int var8 = 0x40400;
    if (arg0->unknown_50_ & 8)
    {
        var8 -= 0xa000;
    }
    if (arg0->unknown_50_ & 1)
    {
        var8 += arg0->unknown_90_;
    }
    if (!TestFlags00(var1, 0x1000))
    {
        void* var9 = func_02012d88(&data_02114e20, var8);
        arg0->unknown_7c_.CreateTypeA(var9, var8);
        arg0->unknown_7c_.Reset();
    }
    else
    {
        ((HMRFAllocator*)arg0->unknown_7c_.pSignedAlloc)->Free(1);
    }
    func_02012de4(&data_02114e20);
    char var10[80];
    if (arg0->unknown_9c_)
    {
        sprintf(var10, data_ov001_02164bef, arg0->unknown_3e_);
    }
    else if (arg0->unknown_13_)
    {
        sprintf(var10, data_ov001_02164c01, arg0->unknown_3e_);
    }
    else
    {
        sprintf(var10, data_ov001_02164c13, arg0->unknown_3e_);
    }
    int var11 = strlen(var10) - 4;
#if defined(jpn)
    memcpy(var10 + var11, data_ov001_021661c1, 4);
    var2->AddFence();
    arg0->unknown_74_ = var2->QueueLoadFile(var10, &arg0->unknown_7c_);
#else
    memcpy(var10 + var11, data_ov001_02164c21, 4);
    char var12[16];
    __clear(var12, 16);
    memcpy(var12, arg0->unknown_3e_, strlen(arg0->unknown_3e_) - 4);
    char var13[16];
    sprintf(var13, data_ov001_02164c26, var12);
    char var14[32];
    sprintf(var14, data_ov001_02164c2d, var12);
    var2->AddFence();
    arg0->unknown_74_ = var2->QueueLoadFileInGP2(var10, var13, &arg0->unknown_7c_);
    arg0->unknown_78_ = var2->QueueLoadFileInGP2(var10, var14, &arg0->unknown_7c_);
#endif
    if (arg0->unknown_50_ & 0x200)
    {
        arg0->unknown_110_ = var2->QueueLoadFile(data_ov001_02164c39, &arg0->unknown_7c_);
    }
    void* var15 = func_0205ec34();
    Struct_ov001_02154f24_2 var16;
    var16.unknown_8_ = arg0->unknown_8_;
    if (func_020649b0(var15, 10, &var16))
    {
        func_0206f81c(&var16);
    }
    Struct_020e385c* var17 = func_020e3808();
    void* var18 = func_020e385c(var17, 1, 0x71e8);
    if (func_0202c508(var5) && !var18 && !func_020e385c(var17, 1, arg0->unknown_18_))
    {
        func_020e3994(var17, 1, -1);
        func_020e392c(var17, 1, arg0->unknown_18_);
    }
    func_020e39d4(var17, func_020100a8(var0), 1, arg0->unknown_18_);
    return 2;
}
