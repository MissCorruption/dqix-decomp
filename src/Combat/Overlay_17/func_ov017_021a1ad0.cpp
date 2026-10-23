#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 1;
    unsigned short unknown_2_3_ : 13;
};
struct Struct_02028bac;
struct Struct_02076a8c_2;
struct Struct_ov017_021a1ad0 {
    Object3D unknown_0_;
    char unknown_ac_[0x130 - 0xac];
    int unknown_130_;
    char unknown_134_[0x17d - 0x134];
    unsigned char unknown_17d_;
};
struct Struct_ov017_021a1ad0_2 {
    Vector3fix unknown_0_;
    Vector3fix unknown_c_;
};
union Struct_ov017_021a1ad0_3 {
    Vector3fix unknown_0_;
    unsigned int unknown1_0_[3];
};
struct Struct_ov017_021a1ad0_4 {
    Vector3fix unknown_0_;
    Struct_ov017_021a1ad0_3 unknown_c_;
    Struct_ov017_021a1ad0_2 unknown_18_;
    Struct_ov017_021a1ad0_3 unknown_30_;

    Struct_ov017_021a1ad0_4(const Vector3fix& arg0) : unknown_0_(arg0) {}
};
extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_020fdd44* func_02028bac(Struct_02028bac*, int);
extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44*, int);
extern "C" void func_02076b58(Struct_02076a8c_2*);
extern "C" int func_0201b5d8(int);
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov017_021c9544(int, int, int, int);
extern "C" int* func_0202ae18();
extern "C" unsigned short* func_02012fe4();
extern "C" int func_0202c508(int*);
extern "C" void func_02034104(Vector3fix*, GameObject*);
extern "C" int func_02031118(Vector3fix*, Struct_ov017_021a1ad0_2*);
extern "C" void func_02076a8c(Struct_ov017_021a1ad0*);

// USA: func_ov017_021a1ad0
extern "C" ARM void func_ov017_021a1ad0() {
    GameState* var0 = GameState::GetInstance();
    Struct_020fdd44* var1 = func_02027ca4();
    int* var2 = func_0202ae18();
    unsigned short* var3 = func_02012fe4();
    if (func_0202c508(var2)) {
        int var4;
        int var5;
        Struct_020fdd44* var6;
        for (var5 = 0; var5 < 4; var5++) {
            var6 = func_02028bac((Struct_02028bac*)var1, var5);
            if (!var6->unknown_2_2_) continue;
            var4 = var5 * 12 + 0x70;
            int var7 = -1;
            for (int var8 = 0; var8 < 12; var8++) {
                Struct_ov017_021a1ad0* var9 = (Struct_ov017_021a1ad0*)var0->GetMaybeFieldMonsterByIndex(var8 + var4);
                if (!var9 || !var9->unknown_0_.IsVisible()) continue;
                func_02076b58((Struct_02076a8c_2*)var9);
                int var10 = 1;
                if ((var9->unknown_17d_ & 2) || (var9->unknown_17d_ & 4) || func_0201b5d8(*var3)) var10 = 0;
                if (var9->unknown_17d_ & 8) var10 = 0;
                if (!var10) continue;
                int var11;
                {
                    GameObject* var12;
                    GameState* var13 = GameState::GetInstance();
                    var12 = var13->GetMaybeFieldMonsterByIndex(var8 + var4);
                    if (!var12) var11 = 0;
                    else {
                        Struct_ov017_021a1ad0_4 var14(var12->obj3D_.position_);
                        for (int var15 = 0; var15 < 4; var15++) {
                            GameObject* var16 = var13->GetMaybeWanderingMonsterByIndex(var15);
                            if (!var16) continue;
                            int var17 = var16->obj3D_.GetField06();
                            if (var17 != var12->obj3D_.GetField06()) continue;
                            func_02034104(&var14.unknown_30_.unknown_0_, var16);
                            var14.unknown_c_ = var14.unknown_30_;
                            var14.unknown_18_.unknown_0_ = var14.unknown_c_.unknown_0_;
                            var14.unknown_18_.unknown_0_.x += 0x19000;
                            var14.unknown_18_.unknown_0_.y += 0x19000;
                            var14.unknown_18_.unknown_0_.z += 0x19000;
                            var14.unknown_18_.unknown_c_ = var14.unknown_c_.unknown_0_;
                            var14.unknown_18_.unknown_c_.x -= 0x19000;
                            var14.unknown_18_.unknown_c_.y -= 0x19000;
                            var14.unknown_18_.unknown_c_.z -= 0x19000;
                            if (func_02031118(&var14.unknown_0_, &var14.unknown_18_)) {
                                var11 = 0;
                                goto collisionComplete;
                            }
                        }
                        var11 = 1;
                    }
                }
collisionComplete:
                if (var11 && var9->unknown_130_ != 8 && var9->unknown_130_ != 9) {
                    func_02076a8c(var9);
                    var9->unknown_0_.MakeHidden();
                    if (func_0202b7d8(var2) && var6) {
                        func_ov017_021c9544(var6->unknown_0_, var8, var9->unknown_0_.unknown_2_, var7);
                    }
                }
            }
        }
    } else {
        Struct_020fdd44* var18 = func_02028bd0(var1, *var3);
        if (!var18) return;
        for (int var19 = 0; var19 < 12; var19++) {
            Struct_ov017_021a1ad0* var20 = (Struct_ov017_021a1ad0*)var0->GetMaybeFieldMonsterByIndex(var18->unknown_2_0_ * 12 + 0x70 + var19);
            if (var20 && var20->unknown_0_.IsVisible()) func_02076b58((Struct_02076a8c_2*)var20);
        }
    }
}
