#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Memory.h"

struct Struct_02018300_3;
struct Struct_02010834;
struct Struct_0203d028 { unsigned int unknown_0_[28]; };
struct Struct_ov017_021a6c2c_3 { char unknown_0_[0xc40]; Struct_0203d028 unknown_c40_; };
struct Struct_02108760_5 { unsigned char unknown_0_[0xd0]; };
struct Struct_ov017_021a6c2c_4 {
    unsigned short unknown_0_;
#if defined(jpn)
    char unknown_2_[0x64 - 2];
#else
    char unknown1_2_[0x44 - 2];
#endif
    int unknown_44_, unknown_48_;
#if defined(jpn)
    char unknown_6c_[0x27f4 - 0x6c];
#else
    char unknown_4c_[0x27b4 - 0x4c];
#endif
    short unknown_27b4_;
    char unknown_27b6_[0x12]; int unknown_27c8_, unknown_27cc_;
};
struct Struct_ov017_021a6c2c_5 {
    Object3D unknown_0_; char unknown_ac_[0xe0 - 0xac]; unsigned char unknown_e0_;
};
struct Struct_ov017_021a6c2c_6 {
    unsigned short unknown_0_; unsigned char unknown_2_, unknown_3_, unknown_4_, unknown_5_, unknown_6_, unknown_7_;
    unsigned char unknown_8_, unknown_9_, unknown_a_; signed char unknown_b_; unsigned char unknown_c_, unknown_d_[3];
    int unknown_10_, unknown_14_, unknown_18_; short unknown_1c_, unknown_1e_; int unknown_20_[4];
    char unknown_30_[0x3c]; short unknown_6c_; short unknown_6e_;
};
struct Struct_ov017_021a6c2c {
    unsigned char unknown_0_; char unknown_1_[15]; unsigned char unknown_10_;
    unsigned char unknown_11_0_:1, unknown_11_1_:1, unknown_11_2_:1, unknown_11_3_:1, unknown_11_4_:1, unknown_11_5_:1, unknown_11_6_:1, unknown_11_7_:1;
    unsigned short unknown_12_; short unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_, unknown_1e_;
    int unknown_20_[3]; Vector3fix unknown_2c_; int unknown_38_[3]; Vector3fix unknown_44_;
};
struct Struct_ov017_021a6c2c_2 {
    unsigned char unknown_0_, unknown_1_; char unknown_2_[6]; int unknown_8_, unknown_c_;
    unsigned char unknown_10_; char unknown_11_[0x1f]; SafeAllocator unknown_30_; int unknown_44_;
};
extern "C" void* func_02057924();
extern "C" void* func_0202ae18();
extern "C" void* func_020421a0();
extern "C" Struct_ov017_021a6c2c_4* func_02012fe4();
extern "C" void func_020a0cc4(unsigned int);
extern "C" void func_ov017_021d1cb8();
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_0207df50(Struct_0203d028*);
void CleanInvalidateCacheRange(const void*, unsigned int);
extern "C" void func_02057e6c(void*, int, SafeAllocator*, void*, unsigned int, Struct_0203d028*);
extern "C" void func_0205ebec(void*);
extern "C" void func_02010834(Struct_02010834*, int, int*, int*);
extern "C" void func_02057fb4(void*, int, void*);
extern "C" void func_0205ebc0(void*, int, int);
extern "C" void func_0205ebfc(void*, int, int);
extern "C" int func_02039d7c(char*);
extern "C" void* func_0200fd0c(GameState*);
#if defined(jpn)
#define func_ov017_021a7280 func_ov017_021a7c28
#define data_ov017_021d777c data_ov017_021d7bb8
#endif
extern "C" void func_ov017_021a7280(Struct_ov017_021a6c2c_2*);
extern char data_ov017_021d777c[];
extern AllocatorUnion data_02114e20;
extern Struct_02108760_5 data_02108760;
static inline Struct_ov017_021a6c2c_3* inline_ov017_021a6c2c(GameResources* arg0) {
    return (Struct_ov017_021a6c2c_3*)arg0->unknown_2cc_;
}

// USA: func_ov017_021a6c2c
extern "C" ARM void func_ov017_021a6c2c(Struct_ov017_021a6c2c_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    GameResources* var2 = GetGameResources();
    BackgroundLoader* var3 = BackgroundLoader::GetInstance();
    void* var4 = func_02057924();
    func_0202ae18();
    func_020421a0();
    Struct_ov017_021a6c2c_4* var5 = func_02012fe4();
    if (arg0->unknown_8_ == 0) {
        if (arg0->unknown_10_) {
            Vector3fix var6 = var0->GetUnknownGameObject()->obj3D_.position_;
            int var7 = var5->unknown_0_;
            if (var7 >= 0x4e20 && var7 <= 0x752f) {
                var5->unknown_27c8_ = var6.x + var5->unknown_44_;
                var5->unknown_27cc_ = var6.z + var5->unknown_48_;
            } else {
                var5->unknown_27c8_ = var5->unknown_44_;
                var5->unknown_27cc_ = var5->unknown_48_;
            }
        }
        func_020a0cc4(0x7000);
        if (var5->unknown_0_ != 0x4e27) {
            if (var5->unknown_0_ == 0x4e42) var5->unknown_27b4_ = 4;
        } else var5->unknown_27b4_ = 2;
        func_ov017_021d1cb8();
        func_020397cc((Struct_02018300_3*)var1, 1);
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 1) {
        arg0->unknown_44_ = var3->QueueLoadFile(data_ov017_021d777c, 0);
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 2) {
        if (!var3->GetTaskStatus(arg0->unknown_44_)) return;
        void* var8; unsigned int var9;
        var3->GetLoadedFileByID(arg0->unknown_44_, &var8, &var9);
        arg0->unknown_30_.CreateTypeA(func_02012d88(&data_02114e20, 0x7000), 0x7000);
        arg0->unknown_30_.Reset();
        Struct_0203d028* var10 = &inline_ov017_021a6c2c(var2)->unknown_c40_;
        func_0207df50(var10);
        void* var11 = arg0->unknown_30_.Allocate(var9);
        memcpy(var11, var8, var9);
        CleanInvalidateCacheRange(var11, var9);
        func_02057e6c(var4, 13, &arg0->unknown_30_, var11, var9, var10);
        var3->RemoveTask(arg0->unknown_44_);
        arg0->unknown_44_ = -1; arg0->unknown_c_ = 0; arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 3) {
        arg0->unknown_c_ += var0->GetTickCount();
        if (arg0->unknown_c_ <= 50) return;
        func_0205ebec(&data_02108760);
        int var12[4], var13;
        func_02010834((Struct_02010834*)var0, var1->obj3D_.unknown_4_, var12, &var13);
        Struct_ov017_021a6c2c var14[4];
        for (int var15 = 0; var15 < var13; var15++) {
            GameObject* var16 = var0->GetGameObjectByIndex(var12[var15]);
            if (!var16) continue;
            var14[var15].unknown_0_ = 0; var14[var15].unknown_10_ = 1; var14[var15].unknown_12_ = 0;
            var14[var15].unknown_14_ = -1; var14[var15].unknown_16_ = -1; var14[var15].unknown_18_ = -1; var14[var15].unknown_1a_ = -1;
            var14[var15].unknown_1c_ = -0x1000;
            var14[var15].unknown_20_[0] = 0; var14[var15].unknown_20_[1] = 0; var14[var15].unknown_20_[2] = 0;
            var14[var15].unknown_2c_.x = 0; var14[var15].unknown_2c_.y = 0; var14[var15].unknown_2c_.z = 0;
            var14[var15].unknown_38_[0] = 0; var14[var15].unknown_38_[1] = 0; var14[var15].unknown_38_[2] = 0;
            var14[var15].unknown_44_.x = 0x1000; var14[var15].unknown_44_.y = 0x1000; var14[var15].unknown_44_.z = 0x1000;
            Struct_ov017_021a6c2c* var17 = &var14[var15];
            Vector3fix* var18 = &var16->obj3D_.position_;
            var17->unknown_11_0_ = 0; var17->unknown_11_1_ = 0; var17->unknown_11_2_ = 1; var17->unknown_11_3_ = 0;
            var17->unknown_11_4_ = 0; var17->unknown_11_5_ = 0; var17->unknown_11_6_ = 0; var17->unknown_11_7_ = 0;
            var17->unknown_2c_ = *var18;
            var17->unknown_44_ = var16->obj3D_.GetScale();
            func_02057fb4(var4, 13, var17);
        }
        func_0205ebc0(&data_02108760, 0xa2, 0xa2);
        func_0205ebfc(&data_02108760, 2, 0);
        arg0->unknown_c_ = 0; arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 4) {
        arg0->unknown_c_ += var0->GetTickCount();
        if (arg0->unknown_c_ < 38) return;
        int var19[4], var20;
        func_02010834((Struct_02010834*)var0, var1->obj3D_.unknown_4_, var19, &var20);
        for (int var21 = 0; var21 < var20; var21++) {
            GameObject* var22 = var0->GetGameObjectByIndex(var19[var21]);
            if (var22) var22->obj3D_.MakeHidden();
        }
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 5) {
        arg0->unknown_c_ += var0->GetTickCount();
        if (arg0->unknown_c_ < 80) return;
        SetBrightness(var2, -16, 30);
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 6) {
        if (IsBrightnessTransitionActive(var2)) return;
        if (func_02039d7c((char*)var1)) {
            Struct_02037d10* var23 = func_020399a8(var1);
            func_02038508(var23);
            ((Struct_ov017_021a6c2c_5*)var1)->unknown_e0_ &= ~1;
            var1->obj3D_.DisableFlag(0x1180);
            func_ov017_021d3f00(var23, 0, 1);
        }
        Struct_ov017_021a6c2c_6* var24 = (Struct_ov017_021a6c2c_6*)func_0200fd0c(var0);
        VectorizedMemset(var24, 0, 0x70);
        var24->unknown_4_ = 1; var24->unknown_8_ = 1; var24->unknown_9_ = 1;
        var24->unknown_b_ = -1;
        var24->unknown_20_[0] = -1; var24->unknown_20_[1] = -1;
        var24->unknown_20_[2] = -1; var24->unknown_20_[3] = -1;
        var24->unknown_1e_ = -1; var24->unknown_c_ = 0; var24->unknown_6c_ = -1;
        var24->unknown_2_ = 1; var24->unknown_7_ = 1; var24->unknown_5_ = 1;
        if (arg0->unknown_10_) var24->unknown_0_ = 0x2774;
        else {
            var24->unknown_0_ = 0x1901; var24->unknown_10_ = 0x14cc;
            var24->unknown_14_ = 0x199; var24->unknown_18_ = -0x1000;
        }
        int var25[4], var26;
        func_02010834((Struct_02010834*)var0, var1->obj3D_.unknown_4_, var25, &var26);
        for (int var27 = 0; var27 < var26; var27++) {
            GameObject* var28 = var0->GetGameObjectByIndex(var25[var27]);
            if (var28) var28->obj3D_.MakeVisible();
        }
        func_ov017_021a7280(arg0); arg0->unknown_1_ = 1;
    }
}
