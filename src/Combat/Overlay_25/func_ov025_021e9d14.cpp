#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02108760;
struct Struct_0203a48c_3;
struct Struct_0203a588_2;
struct Struct_ov000_021537b8_6;

struct Struct_02078398_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xf];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
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

struct Struct_ov025_021e9d14_4 {
    char unknown_0_[0xc];
    short unknown_c_;
};

struct Struct_ov025_021e9d14_5 {
    char unknown_0_[0x14];
    struct Struct_ov025_021e9d14_4* unknown_14_;
    char unknown_18_[0x1c - 0x18];
    short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned short unknown_20_;
    char unknown_22_[0x24 - 0x22];
    unsigned short unknown_24_;
    char unknown_26_[0x30 - 0x26];
    struct Struct_ov025_021e9d14_5* unknown_30_;
};

struct Struct_ov025_021e9d14_6 {
    char unknown_0_[0x10];
    struct Struct_ov025_021e9d14_5* unknown_10_;
};

struct Struct_ov025_021e9d14 {
    char unknown_0_[6];
    unsigned short unknown_6_;
};

struct Struct_ov025_021e9d14_2 {
    char unknown_0_[0x130];
    struct Struct_ov025_021e9d14* unknown_130_;
};

struct Struct_ov025_021e9d14_3 {
    char unknown_0_[0xe];
    unsigned short unknown_e_;
};

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" int func_ov025_021def24(void* arg0);
extern "C" void* func_ov000_02160f08(void* arg0);
extern "C" void* func_ov000_0215feb4(char* arg0, int arg1, int arg2);
extern "C" struct Struct_ov025_021e9d14_3* func_ov025_021dafd0(char* arg0, int arg1);
extern "C" struct Struct_0203a588_2* func_02039e70(void);
struct Struct_0203a48c_2;
extern "C" void func_0203a48c(Struct_0203a48c_3*, int, Struct_0203a48c_2*, int, int, int);
extern "C" void* func_02057924(void);
extern "C" void func_02078484(struct Struct_02078398_2* arg0);
extern "C" void func_02057fb4(void* arg0, int arg1, void* arg2);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_ov000_02176150(struct Struct_ov000_021537b8_6* arg0, unsigned short arg1);

extern struct Struct_02108760 data_02108760;

// USA: func_ov025_021e9d14
extern "C" ARM void func_ov025_021e9d14(void) {
    void* var0 = func_ov000_02160130();
    struct Struct_ov025_021e9d14_6* var1 = (struct Struct_ov025_021e9d14_6*)func_ov000_02160f20(var0);
    if (func_ov025_021def24(var0) != 0) {
        return;
    }
    GameState* var2 = GameState::GetInstance();
    char* var3 = (char*)func_ov000_02160f08(func_ov000_02160130());
    struct Struct_ov025_021e9d14_5* var4 = var1->unknown_10_;
    if (func_ov000_0215feb4((char*)var4, 0, 5) != NULL) {
        return;
    }
    for (; var4 != NULL; var4 = var4->unknown_30_) {
        int var5 = var4->unknown_20_;
        unsigned short var6 = var4->unknown_24_;
        struct Struct_ov025_021e9d14_3* var7 = func_ov025_021dafd0(var3, var5);
        GameObject* var8 = var2->GetCombatantByIndex(var5);
        if (var8 == NULL) {
            continue;
        }
        if (var4->unknown_14_ != NULL) {
            int var9 = -var4->unknown_14_->unknown_c_;
            if (var9 > 0) {
                struct Struct_0203a48c_3* var10 = (struct Struct_0203a48c_3*)func_02039e70();
                Vector3fix var11 = var8->obj3D_.position_;
                var11.y += var8->obj3D_.GetHeight();
                func_0203a48c(var10, var9, (Struct_0203a48c_2*)&var11, 3, 0, 0);
                void* var12 = func_02057924();
                struct Struct_02078398_2 var13;
                func_02078484(&var13);
                var13.unknown_2c_.y += var8->obj3D_.GetHeight() / 2;
                var13.unknown_14_ = var5;
                func_02057fb4(var12, 0x10, &var13);
                func_0205eaa0(&data_02108760, 0x65, 0);
            }
        }
        int var14 = (var5 >= 0 && var5 <= 3) ? 1 : 0;
        if (!var14 && var4->unknown_14_ != NULL) {
            var6 = var4->unknown_1e_;
            var7 = func_ov025_021dafd0(var3, var4->unknown_1c_);
            var8 = var2->GetCombatantByIndex(var4->unknown_1c_);
        }
        if (var7 != NULL && var8 != NULL) {
            func_ov000_02176150((struct Struct_ov000_021537b8_6*)var7, var6);
            var7->unknown_e_ = var6;
            ((struct Struct_ov025_021e9d14_2*)var8)->unknown_130_->unknown_6_ = var6;
        }
    }
}
