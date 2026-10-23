#include <globaldefs.h>
#include "Combat/ActionDisplay.h"
#include "Combat/CombatantRecovery.h"
#include "Combat/MapDisplay.h"
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_020236dc_5 : Struct_020236dc_2 {
    unsigned char unknown_190_[0x1b2 - 0x190];
    unsigned short unknown_1b2_;
};
struct Struct_02021f88 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short* unknown_4_;
    int unknown_8_;
    int unknown_c_;
    Struct_02021f88* unknown_10_;
};
struct Struct_02021394_2;
struct Struct_020236dc_6 {
    unsigned char unknown_0_[0x8c];
    unsigned char unknown_8c_[1];
};
struct Struct_02012de8;
struct Struct_020236dc_7;
extern "C" void* func_02012fe4();
extern "C" void* func_0202ae18();
extern "C" void* func_0205ec34();
extern "C" void* func_020d6c00();
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" int func_02046708(Struct_02012de8*, unsigned int);
extern "C" void func_02053f58(Struct_020236dc_7*, int*, int*);
extern "C" unsigned char func_02053f74(void*);
extern "C" int func_020100a8(GameState*);
extern "C" int func_02039874(void*);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" int func_02021394(Struct_02021394_2*, int, int, short*, short*);
#if defined(jpn)
#define data_020e704c data_020e78e8
#endif
extern unsigned short data_020e704c[];

struct Struct_020236dc_4 {
    Struct_020236dc* unknown_0_;
    int unknown_4_;
};

// USA: func_020236dc
extern "C" ARM int func_020236dc(Struct_020236dc* arg0, unsigned char* arg1, Vector3i* arg2) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    GameObject* var2 = var0->GetProtagonist();
    Zone3D* var3 = (Zone3D*)func_02012fe4();
    func_0202ae18();
    Struct_020236dc_6* var4 = (Struct_020236dc_6*)func_0205ec34();
    Struct_02012de8* var5 = (Struct_02012de8*)func_020d6c00();
    Struct_02021394_2* var6 = (Struct_02021394_2*)var1->unknown_ptr_36d0;
    Struct_020236dc_4 var7;
    var7.unknown_0_ = arg0;
    var7.unknown_4_ = 0;
    for (int var8 = 0; var8 < 4; ++var8) {
        Struct_020236dc_5* var9 = (Struct_020236dc_5*)func_0200ff1c(var0, var8);
        if (!var9 || !(var9->unknown_18c_ & 8)) continue;
        if (func_0200ff58(var0, var8)) {
            unsigned char var10 = 0;
            unsigned short var11 = var3->unknown_4_;
            int var12 = 0;
            for (; data_020e704c[var10]; ++var10) {
                if (var11 == data_020e704c[var10]) {
                    var12 = 1;
                    break;
                }
            }
            if (var12) continue;
        }
        Struct_020236dc* var13 = &var7.unknown_0_[var7.unknown_4_];
        var13->unknown_14_ = var8;
        ++var7.unknown_4_;
        var13->unknown_11_ = var9->unknown_1b2_ && !func_02046708(var5, 0x80000) ? 1 : 0;
        var13->unknown_12_ = var2 ? var2->obj3D_.GetField06() == var9->obj3D_.GetField06() : 0;
        if (var9->unknown_18c_ & 0x10) {
            func_02053f58((Struct_020236dc_7*)var9, &var13->unknown_0_.x, &var13->unknown_0_.z);
            var13->unknown_10_ = func_02053f74(var9);
            var13->unknown_f_ = arg1[var13->unknown_10_];
            ++arg1[var13->unknown_10_];
            if (var8 == func_020100a8(var0)) {
                arg2->x = var13->unknown_0_.x;
                arg2->z = var13->unknown_0_.z;
            }
        } else {
            Vector3i var14 = var9->obj3D_.position_;
            var13->unknown_0_.x = var14.x;
            var13->unknown_0_.y = var14.y;
            var13->unknown_0_.z = var14.z;
            var13->unknown_f_ = -1;
        }
        var13->unknown_c_ = 5;
        var13->unknown_d_ = var9->obj3D_.unknown_4_ + 4;
        GameObject* var15 = var0->GetPartyMemberByIndex(var8);
        GameObject* var16 = func_0200ff58(var0, var8);
        if (var15 && (var9->obj3D_.unknown_4_ == 0 || var16)) var13->unknown_e_ = func_02039874(var15) + 0x58;
        else var13->unknown_e_ = var9->obj3D_.unknown_4_ + 0x5b;
        if (var15) var13->unknown_13_ = func_02039874(var15);
        if (var9->unknown_ac_.unknown_84_->unknown_0_ & 1) {
            var13->unknown_c_ = 6;
            var13->unknown_d_ = 6;
        }
    }
    int var17 = 0;
    Struct_02020554* var18 = GetGameResources()->unknown_ptr_36d0;
    if (var18) {
        for (Struct_02021f88* var19 = var18->unknown_754_; var19; var19 = var19->unknown_10_) {
            for (int var20 = 0; var20 < var19->unknown_2_; ++var20) {
                int var21 = (unsigned short)var19->unknown_4_[var20];
                int var22 = var3->unknown_2774_.unknown_12_;
                if (var21 == var22) {
                    var17 = 1;
                    break;
                }
            }
        }
    }
    if (var17 && func_0206dfb0((int)var4, var4->unknown_8c_, 0x2b)) {
        short var23 = 0;
        short var24 = 0;
        if (func_02021394(var6, var3->unknown_2774_.unknown_12_, (unsigned char)var3->unknown_2774_.unknown_10_, &var23, &var24)) {
            Struct_020236dc* var25 = &var7.unknown_0_[var7.unknown_4_];
            ++var7.unknown_4_;
            VectorizedMemset(var25, 0, sizeof(*var25));
            var25->unknown_f_ = -1;
            var25->unknown_14_ = 0xff;
            var25->unknown_0_.x = var23 << 12;
            var25->unknown_0_.z = var24 << 12;
            var25->unknown_c_ = 0x1b;
            var25->unknown_d_ = 7;
            var25->unknown_e_ = 0x74;
        }
    }
    return var7.unknown_4_;
}
