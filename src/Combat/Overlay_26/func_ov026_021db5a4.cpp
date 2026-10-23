#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Matrix.h"
#include "Resource/Brightness.h"

struct Struct_ov000_02161e30;
struct Struct_ov000_0217e870_2;
struct Struct_02049f50;

struct Struct_0203d028 {
    unsigned int unknown_0_[10];
    unsigned int unknown_28_[10];
    unsigned int unknown_50_;
    unsigned int unknown_54_;
    unsigned int unknown_58_[2];
    unsigned int unknown_60_[2];
};

struct Struct_02078398_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xf];
    unsigned char unknown_10_;
    unsigned char unknown_11_0_ : 1;
    unsigned char unknown_11_1_ : 1;
    unsigned char unknown_11_2_ : 1;
    unsigned char unknown_11_3_ : 1;
    unsigned char unknown_11_4_ : 1;
    unsigned char unknown_11_5_ : 1;
    unsigned char unknown_11_6_ : 1;
    unsigned char unknown_11_7_ : 1;
    short unknown_12_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    short unknown_1e_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    Vector3fix unknown_2c_;
    Vector3fix unknown_38_;
    Vector3fix unknown_44_;
};

struct Struct_ov000_02160da0 {
    char unknown_0_[0x30];
    SafeAllocator unknown_30_;
    char unknown_44_[0x258];
    Struct_ov000_02161e30* unknown_29c_;
    Struct_ov000_0217e870_2* unknown_2a0_;
    char unknown_2a4_[0x34bc];
    char unknown_3760_[0x1d72];
    unsigned short unknown_54d2_;
    char unknown_54d4_[0x223d];
    unsigned char unknown_7711_;
    signed char unknown_7712_;
    char unknown_7713_[0x1];
    short unknown_7714_;
    short unknown_7716_[4];
    short unknown_771e_;
    short unknown_7720_;
    short unknown_7722_;
    short unknown_7724_;
    short unknown_7726_;
    char unknown_7728_[0x21];
    unsigned char unknown_7749_;
    char unknown_774a_[0x2];
    SafeAllocator unknown_774c_;
    Struct_0203d028 unknown_7760_;
};

struct Struct_ov026_021db5a4 {
    unsigned char unknown_0_[3];
};

struct Struct_ov026_021de6a0 {
    char unknown_0_[0xa];
    Struct_ov026_021db5a4 unknown_a_;
    char unknown_d_[0xb];
};

extern "C" void func_0207df50(Struct_0203d028* arg0);
void SetBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);
void SetMainBrightness(GameResources*, int, int);
extern "C" void func_0205eb54(void* arg0, int arg1, int arg2);
extern "C" void func_0205eb90(void* arg0, int arg1, int arg2);
extern "C" void func_0205eb80(void* arg0);
extern "C" void func_02078484(Struct_02078398_2* arg0);
extern "C" int func_02057fb4(void* arg0, int arg1, void* arg2);
extern "C" void func_02049f50(Struct_02049f50* arg0, int arg1, int arg2);
extern "C" void func_ov000_021637c8(void* arg0);
extern "C" void func_ov000_021636ac(void* arg0);
extern "C" void func_ov000_02163710(void* arg0, int arg1);
extern "C" void func_ov000_02167e6c(unsigned char* arg0);

extern "C" {
void* func_02057924();
int func_02057e6c(void* arg0, int arg1, SafeAllocator* arg2, void* arg3, unsigned int arg4, Struct_0203d028* arg5);
void func_02057f00(void* arg0, int arg1);
int func_ov000_021759f4(void* arg0);
void func_ov000_02175808(void* arg0);
void func_ov000_021626a0(Struct_ov000_02160da0* arg0, int arg1, int arg2);
void func_ov000_02163894(Struct_ov000_02160da0* arg0);
void func_ov000_02163928(Struct_ov000_02160da0* arg0);
void func_ov026_021dc440(SafeAllocator* arg0, Struct_ov000_02160da0* arg1, Struct_ov000_02161e30* arg2, Struct_ov000_0217e870_2* arg3, const char* arg4);
int func_ov026_021dc040(SafeAllocator* arg0, Struct_ov000_02160da0* arg1, Struct_ov000_02161e30* arg2, Struct_ov000_0217e870_2* arg3);
}

extern const char data_ov026_021dee0c[];
extern const char data_ov026_021dee23[];
extern const char data_ov026_021dee3a[];
extern const char data_ov026_021dedec[];
extern const Struct_ov026_021de6a0 data_ov026_021de6a0;
extern char data_02108760[];

// USA: func_ov026_021db5a4
extern "C" ARM void func_ov026_021db5a4(Struct_ov000_02160da0* arg0) {
    GameResources* var0 = GetGameResources();

    if (arg0->unknown_7712_ == 0) {
        if (func_ov000_021759f4(arg0->unknown_3760_)) {
            arg0->unknown_774c_.Reset();
            func_0207df50(&arg0->unknown_7760_);
            arg0->unknown_7714_ = arg0->unknown_771e_ = arg0->unknown_7720_ = -1;
            SetBrightness(var0, -0x10, 0xf);
            arg0->unknown_7714_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov026_021dee0c, &arg0->unknown_774c_);
            arg0->unknown_771e_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov026_021dee23, &arg0->unknown_774c_);
            arg0->unknown_7720_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov026_021dee3a, &arg0->unknown_774c_);
            arg0->unknown_7712_ = 1;
            arg0->unknown_7749_ = 1;
        }
    } else if (arg0->unknown_7712_ == 1) {
        BackgroundLoader* var1 = BackgroundLoader::GetInstance();
        if (var1->GetTaskStatus(arg0->unknown_771e_) && var1->GetTaskStatus(arg0->unknown_7720_) &&
            var1->GetTaskStatus(arg0->unknown_7714_) && !IsBrightnessTransitionActive(var0)) {
            short* var2;
            unsigned char* var3;
            int var4;
            short var5[3] = {arg0->unknown_7714_, arg0->unknown_771e_, arg0->unknown_7720_};
            Struct_ov026_021db5a4 var6 = data_ov026_021de6a0.unknown_a_;
            var3 = var6.unknown_0_;
            var2 = var5;
            for (var4 = 0; var4 < 3; var4++) {
                void* var7;
                unsigned int var8;
                var1->GetLoadedFileByID(*var2, &var7, &var8);
                func_02057e6c(func_02057924(), *var3, &arg0->unknown_774c_, var7, var8, &arg0->unknown_7760_);
                var1->RemoveTask(*var2);
                var3++;
                var2++;
            }
            arg0->unknown_7714_ = arg0->unknown_771e_ = arg0->unknown_7720_ = -1;
            func_ov000_021626a0(arg0, 0x26, 1);
            func_ov000_021626a0(arg0, 0x27, 0);
            func_ov000_02167e6c((unsigned char*)arg0);
            arg0->unknown_7712_ = 2;
        }
    } else if (arg0->unknown_7712_ == 2) {
        Struct_02078398_2 var9;
        func_0205eb54(data_02108760, 0x1b3, 0x1b3);
        func_0205eb90(data_02108760, 1, 0);
        arg0->unknown_7711_ = 1;
        func_ov000_021626a0(arg0, 0x26, 0);
        func_ov000_021626a0(arg0, 0x27, 0);
        SetFlags04((GameResources*)var0, 0x100000);
        func_02078484(&var9);
        var9.unknown_11_0_ = 1;
        var9.unknown_10_ = 1;
        var9.unknown_44_.x = 0x800;
        var9.unknown_44_.y = 0x800;
        var9.unknown_44_.z = 0x800;
        var9.unknown_2c_.x = 0;
        var9.unknown_2c_.z = 0;
        var9.unknown_2c_.y = -0xa000;
        arg0->unknown_7722_ = func_02057fb4(func_02057924(), 0x1d, &var9);
        arg0->unknown_7724_ = func_02057fb4(func_02057924(), 0x1e, &var9);
        arg0->unknown_7726_ = 0;
        SetMainBrightness(var0, 0, 0xf);
        arg0->unknown_7712_ = 3;
    } else if (arg0->unknown_7712_ == 3) {
        int var10 = 0;
        GameObject* var11 = GameState::GetInstance()->GetGameObjectByIndex(arg0->unknown_7722_);
        if (var11 != NULL) {
            int var12 = var11->obj3D_.normalizedAnimationTime_ - var11->obj3D_.prevFrameNormalizedAnimationTime_;
            if (var12 > 0) {
                int var13 = fix32_Divide(var11->obj3D_.animationTime_ - var11->obj3D_.prevFrameAnimationTime_, var12);
                int var14 = (int)(((long long)var13 * (0x1000 - var11->obj3D_.normalizedAnimationTime_) + 0x800) >> 12);
                if (var14 <= 0x1e000) {
                    var10 = 1;
                }
            }
        }
        if (var11 == NULL || var10) {
            arg0->unknown_7726_ = 0;
            SetMainBrightness(var0, -0x10, 0xf);
            arg0->unknown_7712_ = 4;
        }
    } else if (arg0->unknown_7712_ == 4) {
        if (!IsBrightnessTransitionActive(var0)) {
            SetMainBrightness(var0, -0x10, 0);
            func_02057f00(func_02057924(), 0x1d);
            func_02057f00(func_02057924(), 0x1e);
            arg0->unknown_7722_ = arg0->unknown_7724_ = -1;
            func_ov000_021626a0(arg0, 0x26, 1);
            ClearFlags04((GameResources*)var0, 0x100000);
            arg0->unknown_7712_ = 5;
        }
    } else if (arg0->unknown_7712_ == 5) {
        Struct_02078398_2 var15;
        func_0205eb80(data_02108760);
        arg0->unknown_7711_ = 0;
        SetMainBrightness(var0, -0x10, 0);
        GameState* var16 = GameState::GetInstance();
        func_02078484(&var15);
        for (int var17 = 0; var17 < 4; var17++) {
            GameObject* var18 = var16->GetCombatantByIndex(var17);
            if (var18 != NULL) {
                func_02049f50((Struct_02049f50*)var18, 0x1f, 0);
            }
            var15.unknown_14_ = var17;
            var15.unknown_10_ = 0;
            arg0->unknown_7716_[var17] = func_02057fb4(func_02057924(), 0x12, &var15);
        }
        func_ov000_02175808(arg0->unknown_3760_);
        arg0->unknown_54d2_ |= 0x200;
        func_ov000_021637c8(arg0);
        func_ov026_021dc440(&arg0->unknown_774c_, arg0, arg0->unknown_29c_, arg0->unknown_2a0_, data_ov026_021dedec);
        func_ov000_02163894(arg0);
        func_ov000_021636ac(arg0);
        arg0->unknown_7712_ = 6;
        func_0205eb54(data_02108760, 0x1b3, 0x1b3);
        func_0205eb90(data_02108760, 2, 0);
        arg0->unknown_7711_ = 1;
    } else if (arg0->unknown_7712_ == 6) {
        func_ov000_02163928(arg0);
        if (func_ov026_021dc040(&arg0->unknown_30_, arg0, arg0->unknown_29c_, arg0->unknown_2a0_)) {
            func_ov000_02163710(arg0, 0);
            arg0->unknown_7712_ = -1;
        }
    } else if (arg0->unknown_7712_ == -1) {
        func_ov000_02163928(arg0);
    }
}
