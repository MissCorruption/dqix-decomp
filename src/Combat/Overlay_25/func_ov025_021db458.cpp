#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "World/Object3D.h"
#include "World/ZoneFeatures.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_0215440c;
struct Struct_ov025_021db458 { char unknown_0_[0x20]; unsigned short unknown_20_; char unknown_22_[0xe]; Struct_ov025_021db458* unknown_30_; };
struct Struct_ov025_021db458_2 { char unknown_0_[0xe]; short unknown_e_[4]; char unknown_16_; unsigned char unknown_17_; char unknown_18_[8]; Struct_ov025_021db458_2* unknown_20_; };
struct Struct_ov025_021db458_3 { char unknown_0_[4]; short unknown_4_; char unknown_6_[0x3e]; Struct_02014900 unknown_44_; };

struct Struct_ov025_021db458_4 {
#if defined(jpn)
    char unknown_0_[0x218];
    void* unknown_29c_;
    char unknown_21c_[0xe10 - 0x21c];
    void* unknown_e94_;
    char unknown_e14_[0x5b41 - 0xe14];
#else
    char unknown1_0_[0x29c];
    void* unknown_29c_;
    char unknown_2a0_[0xe94 - 0x2a0];
    void* unknown_e94_;
    char unknown_e98_[0x5951 - 0xe98];
#endif
    unsigned char unknown_5951_0_ : 2;
    unsigned char unknown_5951_2_ : 6;
};

extern "C" void* func_ov000_02160f20(void*);
extern "C" int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215ec1c(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_02049afc(unsigned char* arg0);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" Struct_ov025_021db458* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" Struct_ov025_021db458_2* func_ov000_021600f8(Struct_ov000_0215440c*, int);

// USA: func_ov025_021db458
extern "C" ARM void func_ov025_021db458(Struct_ov025_021db458_4* arg0) {
    int var0;
    int var1;
    func_ov000_02160f20(arg0);
    GameState* var2 = GameState::GetInstance();
    if (arg0->unknown_5951_0_ != 2) return;
    void* var3;
    short var4[16];
    int var5 = 0;
    var5 = var5 + func_ov000_0215e9fc(arg0->unknown_29c_, var4, 0x10, var5);
    var5 = var5 + func_ov000_0215ec1c(arg0->unknown_29c_, var4 + var5, 0x10 - var5, 0);
    for (int var6 = 0; var6 < var5; var6++) {
        GameObject* var7 = var2->GetCombatantByIndex(var4[var6]);
        if (!var7) continue;
        if (!func_02049afc((unsigned char*)var7) || (var3 = arg0->unknown_e94_) == 0) continue;
        Struct_02014900 var8;
        Struct_02014900 var9;
        Struct_02014900 var10;
        Struct_02014900 var11;
        Struct_ov025_021db458* var12;
        GameState* var13 = GameState::GetInstance();
        __clear(&var11.unknown1_0_, sizeof(var11));
        Struct_ov025_021db458_3* var14 = (Struct_ov025_021db458_3*)var7;
        int var15;
        short* var16 = var4;
        var10 = var14->unknown_44_;
        var10.unknown1_0_.y = 0xcc;
        var12 = func_ov000_02160094((Struct_ov000_0215440c_2*)var3, 0);
        Struct_ov025_021db458_2* var17 = func_ov000_021600f8((Struct_ov000_0215440c*)var3, 0);
        Struct_ov025_021db458* var18 = var12;
        int var19 = var14->unknown_4_;
        for (; var18; var18 = var18->unknown_30_) {
            if (var18->unknown_20_ == var14->unknown_4_) goto next;
        }
        for (Struct_ov025_021db458_2* var20 = var17; var20; var20 = var20->unknown_20_) {
            short* var21 = var20->unknown_e_;
            for (var1 = 0; var1 < var20->unknown_17_; var1++, var21++) {
                if (*var21 == var19) goto next;
            }
        }
        for (var15 = 0; var15 < (short)var5; var16++, var15++) {
            Struct_ov025_021db458* var22;
            int var23 = 1;
            for (var22 = var12; var22; var22 = var22->unknown_30_) {
                if (var22->unknown_20_ == *var16) { var23 = 0; break; }
            }
            if (!var23 || *var16 == var14->unknown_4_) continue;
            GameObject* var24 = var13->GetGameObjectByIndex(*var16);
            if (!var24) continue;
            var0 = var7->obj3D_.GetRadius();
            var0 += var24->obj3D_.GetRadius();
            var9 = ((Struct_ov025_021db458_3*)var24)->unknown_44_;
            var9.unknown1_0_.y = 0xcc;
            int var25 = Vector3fix_Distance(&var10.unknown1_0_, &var9.unknown1_0_);
            if (var25 <= 0 || var25 >= (var0 >> 1)) continue;
            Vector3fix_Subtract(&var10.unknown1_0_, &var9.unknown1_0_, &var8.unknown1_0_);
            Vector3fixMultiplyScalar(&var8.unknown1_0_, fix32_Divide(((var0 >> 1) - var25) >> 2, var25), &var8.unknown1_0_);
            Vector3fix_Add(&var11.unknown1_0_, &var8.unknown1_0_, &var11.unknown1_0_);
        }
        Vector3fix_Add(&var10.unknown1_0_, &var11.unknown1_0_, &var10.unknown1_0_);
        var14->unknown_44_.unknown1_0_ = var10.unknown1_0_;
    next:;
    }
}
