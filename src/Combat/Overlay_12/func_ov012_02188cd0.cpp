#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Input/Input.h"

struct Struct_02072a68_2;
struct Struct_0205d6a0;
struct Struct_ov003_0215e6d8;
struct Struct_ov003_0215efb8;
struct Struct_0205de24_2;
struct Struct_0205def8;
struct Struct_02108760;

struct Struct_ov012_02188cd0_2
{
    void* unknown_0_;
    void* unknown_4_;
    char* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    short unknown_1c_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;
    unsigned char unknown_20_;
    unsigned char unknown_21_;
    unsigned char unknown_22_;
    unsigned char unknown_23_;
    unsigned char unknown_24_;
    char unknown_25_[3];
};

struct Struct_ov012_02188cd0_3
{
    char unknown_0_[8];
    char unknown_8_[0x74];
};

struct Struct_01ff8b48_10
{
    char unknown_0_[0x5400];
    Struct_ov012_02188cd0_3 unknown_5400_;
};

struct Struct_01ff8b48_11
{
    char unknown_0_[0x29c];
    Struct_01ff8b48_10 unknown_29c_;
};

struct Struct_ov012_02188cd0_4
{
    char unknown_0_[0x998];
    int unknown_998_;
};

struct Struct_ov012_02188cd0
{
    void* unknown_0_;
    void* unknown_4_;
    char unknown_8_[0x20 - 0x8];
    char unknown_20_[7][0x14];
    char unknown_ac_[0xd28 - 0xac];
    char unknown_d28_[0x600];
    char* unknown_1328_;
    char unknown_132c_[0x133c - 0x132c];
    char unknown_133c_[0x1370 - 0x133c];
    unsigned char unknown_1370_;
    unsigned char unknown_1371_;
    char unknown_1372_[0x1380 - 0x1372];
    int unknown_1380_[6];
    int unknown_1398_;
    int unknown_139c_;
    unsigned char unknown_13a0_;
    char unknown_13a1_[3];
    int unknown_13a4_;
    char unknown_13a8_[4];
    void* unknown_13ac_;
    char unknown_13b0_[0x13d0 - 0x13b0];
    char* unknown_13d0_;
    char unknown_13d4_[0x1480 - 0x13d4];
    unsigned char unknown_1480_[0x14bc - 0x1480];
};

extern "C" void func_0205d6a0(Struct_0205d6a0* arg0, int arg1);
extern "C" void func_02042764(const void* arg0, char* arg1, int arg2);
extern "C" void func_ov003_0215e6d8(Struct_ov003_0215e6d8* arg0);
extern "C" void func_ov003_0215e6f8(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void func_ov003_0215efb8(Struct_ov003_0215efb8* arg0);
extern "C" int func_ov012_0218ae74(Struct_ov012_02188cd0* arg0, Struct_ov012_02188cd0_3* arg1);
extern "C" void func_0205de24(Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov023_021e6e60(Struct_ov012_02188cd0* arg0);
extern "C" void func_ov012_0218aabc(char* arg0);
extern "C" void func_ov003_0215f41c(void* arg0, const char* arg1);
extern "C" void func_ov012_0218ab34(Struct_ov012_02188cd0* arg0, char* arg1, int arg2);
extern "C" int func_0205d97c(void* arg0);
extern "C" int func_ov003_0215f000(void* arg0, int arg1);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_ov023_021e8270(void* arg0);
extern "C" void func_ov012_021845f8(void* arg0);
extern "C" int func_ov012_02184d80(void* arg0, char* arg1);
extern "C" void func_0205def8(Struct_0205def8* arg0, int arg1, int arg2);
extern "C" void func_020426bc(const char* arg0, char* arg1, int arg2);
extern "C" void func_ov012_0218943c(Struct_ov012_02188cd0* arg0);
extern "C" Struct_ov012_02188cd0_4* func_020421a0();
extern "C" const char* func_02072a68(Struct_02072a68_2* arg0, int arg1);
extern "C" void func_0204500c(Struct_ov012_02188cd0_4* arg0, const char* arg1, int arg2, int arg3);

extern "C" const char data_ov012_0218b2ea[];
extern "C" const char data_ov012_0218b303[];
extern "C" char data_02108760[];

static inline Struct_ov012_02188cd0_3* inline_ov012_02188cd0(GameState* arg0)
{
    return &((Struct_01ff8b48_11*)arg0)->unknown_29c_.unknown_5400_;
}

// USA: func_ov012_02188cd0
extern "C" ARM void func_ov012_02188cd0(Struct_ov012_02188cd0* arg0)
{
    if (arg0->unknown_1370_ == 0)
    {
        func_0205d6a0((Struct_0205d6a0*)arg0->unknown_ac_, 1);
        Struct_ov012_02188cd0_3* var0 = inline_ov012_02188cd0(GameState::GetInstance());
        memset(arg0->unknown_13d0_, 0, 0x400);
        arg0->unknown_1328_ = arg0->unknown_13d0_;
        func_02042764(var0->unknown_8_, arg0->unknown_13d0_, 1);
        arg0->unknown_1380_[0] = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov012_0218b2ea, 0);
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 1)
    {
        BackgroundLoader* var1 = BackgroundLoader::GetInstance();
        if (var1->GetTaskStatus(arg0->unknown_1380_[0]))
        {
            if (var1->GetDetailedTaskStatus(arg0->unknown_1380_[0]) != 2)
            {
                var1->RemoveTask(arg0->unknown_1380_[0]);
                arg0->unknown_1380_[0] = -1;
            }
            void* var2;
            unsigned int var3;
            var1->GetLoadedFileByID(arg0->unknown_1380_[0], &var2, &var3);
            if (var2 != 0 && var3 != 0)
            {
                ((SafeAllocator*)arg0->unknown_20_[4])->Reset();
                func_ov003_0215e6d8((Struct_ov003_0215e6d8*)arg0->unknown_4_);
                func_ov003_0215e6f8(arg0->unknown_4_, (SafeAllocator*)arg0->unknown_20_[4], var2, var3);
                func_ov003_0215efb8((Struct_ov003_0215efb8*)arg0->unknown_0_);
                ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_4_ = arg0->unknown_4_;
                ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_0_ = 0;
            }
            var1->RemoveTask(arg0->unknown_1380_[0]);
            arg0->unknown_1380_[0] = -1;
            arg0->unknown_1370_++;
            return;
        }
        return;
    }
    else if (arg0->unknown_1370_ == 2)
    {
        func_ov012_0218ae74(arg0, inline_ov012_02188cd0(GameState::GetInstance()));
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 3)
    {
        arg0->unknown_13a0_ = 0;
        func_0205de24((Struct_0205de24_2*)arg0->unknown_ac_, 0, 2);
        func_ov023_021e6e60(arg0);
        func_ov012_0218aabc((char*)arg0);
        memcpy(arg0->unknown_13ac_, inline_ov012_02188cd0(GameState::GetInstance())->unknown_8_, 0x72);
        Struct_ov012_02188cd0_2* var4 = (Struct_ov012_02188cd0_2*)arg0->unknown_0_;
        var4->unknown_8_ = arg0->unknown_13d0_;
        var4->unknown_10_ = 0x400;
        ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_14_ = 0x39;
        ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_1f_ = 1;
        ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_21_ = 1;
        ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_24_ = 1;
        func_ov003_0215f41c(arg0->unknown_0_, data_ov012_0218b303);
        ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_22_ = 1;
        ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_23_ = 0;
        func_ov012_0218ab34(arg0, 0, 0);
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 4)
    {
        if ((g_keyManager.TestKeysPressed(2) || func_0205d97c(arg0->unknown_ac_) == 2) && *arg0->unknown_13d0_ == 0)
        {
            func_0205d6a0((Struct_0205d6a0*)arg0->unknown_ac_, 1);
            arg0->unknown_1370_++;
        }
        Struct_ov012_02188cd0_2* var5 = (Struct_ov012_02188cd0_2*)arg0->unknown_0_;
        unsigned char var6 = var5->unknown_20_;
        switch (func_ov003_0215f000(var5, arg0->unknown_13a4_))
        {
            case 1:
                func_0205eaa0((Struct_02108760*)data_02108760, 2, 0);
                return;

            case 2:
            case 3:
            case 8:
                func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
                if (var6 != ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_20_)
                    func_ov012_0218ab34(arg0, 0, 0);
                func_ov023_021e8270(arg0->unknown_d28_);
                return;

            case 4:
            case 5:
            case 6:
            case 7:
            case 11:
                func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
                func_ov012_0218ab34(arg0, 0, 0);
                return;

            case 9:
                func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
                return;

            case 10:
                func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
                if (*arg0->unknown_13d0_ != 0)
                {
                    GameState::GetInstance();
                    BackgroundLoader::AddLockGlobal();
                    BackgroundLoader::FreeAllocationsGlobal();
                    func_ov012_021845f8(arg0->unknown_1480_);
                    int var7 = func_ov012_02184d80(arg0->unknown_1480_, arg0->unknown_13d0_);
                    BackgroundLoader::RemoveLockGlobal();
                    if (var7)
                    {
                        func_0205def8((Struct_0205def8*)arg0->unknown_ac_, 0, 14);
                        arg0->unknown_1370_ = 10;
                        return;
                    }
                }
                func_0205d6a0((Struct_0205d6a0*)arg0->unknown_ac_, 1);
                arg0->unknown_1370_++;
                return;
        }
    }
    else if (arg0->unknown_1370_ == 5)
    {
        func_020426bc(arg0->unknown_13d0_, inline_ov012_02188cd0(GameState::GetInstance())->unknown_8_, 1);
        arg0->unknown_1328_ = 0;
        memset(arg0->unknown_13d0_, 0, 0x400);
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 6)
    {
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 7)
    {
        arg0->unknown_1371_ = 1;
        func_ov023_021e6e60(arg0);
        func_ov012_0218943c(arg0);
        arg0->unknown_13a0_ = 1;
        arg0->unknown_1370_ = 1;
        return;
    }
    else if (arg0->unknown_1370_ == 10)
    {
        Struct_ov012_02188cd0_4* var8 = func_020421a0();
        func_0204500c(var8, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 501), 0, 0xe3);
        var8->unknown_998_ = 1;
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 11)
    {
        if (func_020421a0()->unknown_998_ == 0)
        {
            func_0205def8((Struct_0205def8*)arg0->unknown_ac_, 1, 14);
            arg0->unknown_1370_ = 4;
            ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_18_ = 0;
            ((Struct_ov012_02188cd0_2*)arg0->unknown_0_)->unknown_1c_ = 0;
        }
    }
}
