#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Matrix.h"
#include "Resource/GameResources.h"

struct Struct_0204b010;
struct Struct_02020cb8_3;

struct Struct_ov003_0217c7a0
{
    char unknown_0_[0x10];
    Vector3i unknown_10_;
};

struct Struct_02000c9c_89
{
    char unknown_0_[0x20];
};

struct Struct_ov003_0217c7a0_2
{
    SafeAllocator* unknown_0_;
    SafeAllocator unknown_4_;
    SafeAllocator unknown_18_;
    SafeAllocator unknown_2c_;
    Struct_02000c9c_89 unknown_40_;
    Struct_02000c9c_89 unknown_60_;
    char unknown_80_[0x130 - 0x80];
    int unknown_130_;
    int unknown_134_;
    int unknown_138_;
    char unknown_13c_[0x141 - 0x13c];
    signed char unknown_141_;
    char unknown_142_;
    unsigned char unknown_143_;
    Vector3i unknown_144_;
    int unknown_150_[3];
};

extern "C" void func_0204b010(Struct_0204b010* arg0, void* arg1);
extern "C" void func_0204b04c(void* arg0, int arg1);
extern "C" void func_0204b088(void* arg0, int arg1);
extern "C" void func_0204afb4(Struct_02020cb8_3* arg0);
extern "C" void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_0202e694(void* arg0, int* arg1);
extern "C" void func_020a2794(void* arg0);
extern "C" void func_020a2744(char* arg0);
extern "C" int func_ov003_0217c2a0(int arg0);
extern "C" void func_0200fd48(GameState* arg0, int arg1);

// USA: func_ov003_0217c7a0
extern "C" ARM void func_ov003_0217c7a0(Struct_ov003_0217c7a0_2* arg0)
{
    GameResources* var0 = GetGameResources();
    if (arg0->unknown_141_ == 0)
    {
        SetBrightness(var0, -16, 0x3c);
        arg0->unknown_141_++;
    }
    else if (arg0->unknown_141_ == 1)
    {
        if (IsBrightnessTransitionActive(var0))
            return;

        GameState* var1 = GameState::GetInstance();
        void* var2;

        var2 = arg0->unknown_4_.GetSignedAllocator();
        if (var2)
        {
            arg0->unknown_4_.Destroy();
            arg0->unknown_0_->Free(var2);
        }
        var2 = arg0->unknown_18_.GetSignedAllocator();
        if (var2)
        {
            arg0->unknown_18_.Destroy();
            arg0->unknown_0_->Free(var2);
        }
        var2 = arg0->unknown_2c_.GetSignedAllocator();
        if (var2)
        {
            arg0->unknown_2c_.Destroy();
            arg0->unknown_0_->Free(var2);
        }

        BackgroundLoader* var3 = BackgroundLoader::GetInstance();
        var3->RemoveTask(arg0->unknown_130_);
        arg0->unknown_130_ = -1;
        var3->RemoveTask(arg0->unknown_134_);
        arg0->unknown_134_ = -1;
        var3->RemoveTask(arg0->unknown_138_);
        arg0->unknown_138_ = -1;

        func_0204b010((Struct_0204b010*)&arg0->unknown_40_, 0);
        func_0204b04c(&arg0->unknown_40_, 0);
        func_0204b088(&arg0->unknown_40_, 0);
        func_0204afb4((Struct_02020cb8_3*)&arg0->unknown_40_);
        func_0204b010((Struct_0204b010*)&arg0->unknown_60_, 0);
        func_0204b04c(&arg0->unknown_60_, 0);
        func_0204b088(&arg0->unknown_60_, 0);
        func_0204afb4((Struct_02020cb8_3*)&arg0->unknown_60_);

        func_020c5588(0, 0, 0x7fff, 0, 0);
        Struct_ov003_0217c7a0* var4 = (Struct_ov003_0217c7a0*)func_020100bc(var1);
        var4->unknown_10_ = arg0->unknown_144_;
        func_0202e694(var4, arg0->unknown_150_);
        func_020a2794(var4);
        func_020a2744((char*)var4);
        func_ov003_0217c2a0(0);
        func_0200fd48(var1, 0xa0);
        arg0->unknown_143_ = 1;
    }
}
