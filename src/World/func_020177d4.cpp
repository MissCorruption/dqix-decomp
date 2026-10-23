#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "World/ZoneResourceTree.h"
#include <globaldefs.h>
#include "Resource/GameResources.h"

// USA: func_020177d4
extern "C" ARM void func_020177d4(Zone3D *arg0, void *arg1, SafeAllocator *arg2) {
    Struct_020177d4_2 *var0 = static_cast<Struct_020177d4_2 *>(arg1);
    GameState::GetInstance();
    LightingManager *var1 = LightingManager::GetInstance();
    Struct_020177d4 *var2    = reinterpret_cast<Struct_020177d4 *>(&var0->unknown_0_.unknown_4_);
    int var3                 = var2->unknown_10_;
    var0->unknown_44_ = static_cast<Struct_02015554 *>(arg2->Allocate(var3 * sizeof(Struct_02015554)));
    if (var0->unknown_44_ == NULL) return;

    for (int var4 = 0; var4 < var3; var4++) {
        Struct_020177d4_4 *var5 = reinterpret_cast<Struct_020177d4_4 *>(func_0201f2a4(var2, var4));
        Struct_02015554 *var6  = &var0->unknown_44_[var4];
        func_02013018(reinterpret_cast<Struct_02013018 *>(var6));
        var6->unknown_0_ = var5->unknown_0_;
    }

    for (int var7 = 0; var7 < var3; var7++) {
        Struct_020177d4_4 *var8 = reinterpret_cast<Struct_020177d4_4 *>(func_0201f2a4(var2, var7));
        Struct_02015554 *var9  = &var0->unknown_44_[var7];
        int var10                  = var8->unknown_4_;
        if (var10 > -1) {
            for (int var11 = 0; var11 < var3; var11++) {
                Struct_02015554 *var12 = &var0->unknown_44_[var11];
                if (var8->unknown_4_ == var12->unknown_0_) {
                    var9->unknown_28_ = var12;
                    func_020130b0(reinterpret_cast<Struct_020130b0 *>(var12), reinterpret_cast<Struct_020130b0 *>(var9));
                    break;
                }
            }
        } else if (var7 != 0) {
            func_020130e0(reinterpret_cast<Struct_020130e0 *>(var0->unknown_44_), reinterpret_cast<Struct_020130e0 *>(var9));
        }
    }

    int var13        = var1->timeOfDayIndex_;
    void *var14 = GetGameResources()->unknown_ptr_3718;
    if (var14 != NULL && func_ov017_021b8b54(var14)) {
        unsigned char *var15 = static_cast<unsigned char *>(func_ov017_021b8478(var14));
        var13                   = var15[5];
    }

    for (int var16 = 0; var16 < var3; var16++) {
        Struct_020177d4_4 *var17 = reinterpret_cast<Struct_020177d4_4 *>(func_0201f2a4(var2, var16));
        Struct_02015554 *var18  = &var0->unknown_44_[var16];
        var18->unknown_20_                   = var17;
        var18->unknown_3a_                = 0;
        Vector3i var19              = var17->unknown_8_;
        if (var18->unknown_28_ == NULL) Vector3fix_Add(&var19, &var0->unknown_48_, &var19);

        if (var17->unknown_6_ & 0x10)
            var18->unknown_2_ |= 4;
        else if (var17->unknown_6_ & (1 << var13))
            var18->unknown_2_ &= ~4;
        else
            var18->unknown_2_ |= 4;

        if (var17->unknown_2_ < 0) {
            var18->unknown_24_ = &var0->unknown_0_.unknown_40_[var17->unknown_0_];
        } else {
            int var20 =
                func_0201f1b0(reinterpret_cast<Struct_020177d4_3 *>(&var0->unknown_0_.unknown_4_), var17->unknown_2_);
            if (var20 >= 0) var18->unknown_24_ = &var0->unknown_0_.unknown_40_[var20];
        }

        Struct_02012ff0 *var21 = var18->unknown_24_;
        if (var21 != NULL) {
            if (var21->unknown_0_ == 0 && var21->unknown_4_ == 0) var18->unknown_24_ = NULL;
            if (var21->unknown_0_ == 1 && var21->unknown_4_ == 0) var18->unknown_24_ = NULL;
            if (var21->unknown_0_ == 2 && var21->unknown_4_ == 0) var18->unknown_24_ = NULL;
            if (var21->unknown_0_ == 2 && var18->unknown_24_ != NULL) {
                var18->unknown_54_ = static_cast<Object3D *>(arg2->Allocate(sizeof(Object3D)));
                if (var18->unknown_54_ == NULL) {
                    var18->unknown_24_ = NULL;
                } else {
                    var18->unknown_54_->Initialize();
                    var21->unknown_4_->ShallowCloneTo(var18->unknown_54_);
                }
            }
        }
    }
    func_0201310c(var0->unknown_44_);
}
