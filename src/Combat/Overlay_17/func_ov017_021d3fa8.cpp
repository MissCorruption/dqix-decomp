#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"

struct Struct_02033b68;
struct Struct_02010604;
struct Struct_ov017_021d3fa8 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_0_ : 4;
    unsigned char unknown_6_4_ : 4;
    unsigned char unknown_7_;
    int unknown_8_;
};
struct Struct_ov017_021d3fa8_2 {
    Object3D unknown_0_;
    unsigned char unknown_ac_[0xc1 - 0xac];
    unsigned char unknown_c1_0_ : 2;
    unsigned char unknown_c1_2_ : 6;
};
struct Struct_ov017_021d6cfc { signed char unknown_0_[4]; };
extern const Struct_ov017_021d6cfc data_ov017_021d6cfc, data_ov017_021d6d08;
extern const char data_ov017_021d82b1[], data_ov017_021d82bb[], data_ov017_021d82c6[];
extern "C" void func_020dc548(signed char, Struct_ov017_021d6cfc*, signed char*);
extern "C" void func_02039d48(unsigned char*);
extern "C" void func_02039d24(unsigned char*);
extern "C" int func_0202c540(void*);
extern "C" void func_ov017_021907dc(int, int, int, int, int);
extern "C" void func_02033b68(Struct_02033b68*, int);
extern "C" void func_02033b88(Struct_02010604*, int);

// USA: func_ov017_021d3fa8
extern "C" ARM void func_ov017_021d3fa8(int arg0, Struct_ov017_021d3fa8* arg1, GameState* arg2, void* arg3, void* arg4) {
    GameObject* var0 = arg2->GetUnknownGameObject();
    GameObject* var1 = arg2->GetPartyMemberByIndex(arg1->unknown_7_);
    Struct_02037d10* var2 = func_020399a8(var1);
    unsigned short var3 = arg1->unknown_6_0_;
    int var4 = arg1->unknown_6_4_;
    int var5 = arg1->unknown_4_;
    int var6 = arg1->unknown_8_;
    if (var1 != 0 && var4 != 0) {
        var1->obj3D_.DisableFlag(0x1010);
        func_02038508(var2);
        Struct_ov017_021d6cfc var7 = data_ov017_021d6cfc;
        signed char var8 = 0;
        func_020dc548((signed char)arg1->unknown_7_, &var7, &var8);
        for (int var9 = 0; var9 < var8; var9++) {
            if (var7.unknown_0_[var9] == arg1->unknown_7_) continue;
            GameObject* var10 = arg2->GetPartyMemberByIndex(var7.unknown_0_[var9]);
            if (var10 == 0) continue;
            unsigned int var11 = ((Struct_ov017_021d3fa8_2*)var10)->unknown_c1_0_;
            if (!(var11 & 2)) {
                var10->obj3D_.position_ = var1->obj3D_.position_;
                var10->obj3D_.SetInheritedAlpha(31);
                func_02039d48((unsigned char*)var10);
            }
            func_02039d24((unsigned char*)var10);
        }
        if (func_0202c540(arg4)) func_ov017_021907dc((int)arg3, 0, 1, 1, 1);
    }
    if (var1 == 0) return;
    unsigned int var12 = var1->obj3D_.GetField06();
    if (var12 != var0->obj3D_.GetField06()) return;
    if (var4 != 0 || (((Struct_ov017_021d3fa8_2*)var1)->unknown_c1_0_ & 2)) {
        func_02038508(var2);
        if (var4 != 0) {
            Struct_ov017_021d6cfc var13 = data_ov017_021d6d08;
            signed char var14 = 0;
            func_020dc548((signed char)arg1->unknown_7_, &var13, &var14);
            for (int var15 = 0; var15 < var14; var15++) {
                if (var13.unknown_0_[var15] == arg1->unknown_7_) continue;
                GameObject* var16 = arg2->GetPartyMemberByIndex(var13.unknown_0_[var15]);
                if (var16 == 0) continue;
                unsigned int var17 = ((Struct_ov017_021d3fa8_2*)var16)->unknown_c1_0_;
                if (!(var17 & 2)) {
                    var16->obj3D_.position_ = var1->obj3D_.position_;
                    var16->obj3D_.SetInheritedAlpha(31);
                    func_02033b68((Struct_02033b68*)var16, 0);
                    func_02039d48((unsigned char*)var16);
                }
                func_02039d24((unsigned char*)var16);
            }
            if (func_0202c540(arg4)) func_ov017_021907dc((int)arg3, 0, 1, 1, 1);
        }
    } else if (var5 == 0) {
        var1->obj3D_.DisableFlag(0x1000);
        var1->obj3D_.EnableFlag(0x10);
        var1->obj3D_.MaybeSetRegularAnimation(data_ov017_021d82b1, 1);
        var2->unknown_0_ = 1;
        var2->unknown_1_ = 0;
    } else if (var5 == 1) {
        var1->obj3D_.MaybeSetRegularAnimation(data_ov017_021d82b1, 1);
        var2->unknown_0_ = 1;
        var2->unknown_1_ = 1;
    } else if (var5 == 5) {
        var1->obj3D_.DisableFlag(0x1010);
        func_02033b88((Struct_02010604*)var1, 1);
        var2->unknown_0_ = 1;
        var2->unknown_1_ = 5;
    } else if (var5 == 4) {
        var1->obj3D_.DisableFlag(0x1010);
        var1->obj3D_.MaybeSetRegularAnimation(data_ov017_021d82bb, 1);
        var2->unknown_0_ = 1;
        var2->unknown_1_ = 4;
    } else if (var5 == 2) {
        if (var3 == 1) {
            var1->obj3D_.DisableFlag(0x1000);
            var1->obj3D_.EnableFlag(0x10);
            var1->obj3D_.MaybeSetRegularAnimation(data_ov017_021d82c6, 0);
            if (var6) var1->obj3D_.SetCurrentAnimationTime(var6);
            var2->unknown_0_ = 1;
        } else if (var3 == 2) {
            var1->obj3D_.DisableFlag(0x1000);
            var1->obj3D_.EnableFlag(0x10);
            var1->obj3D_.MaybeSetRegularAnimation(data_ov017_021d82c6, 4);
            if (var6) var1->obj3D_.SetCurrentAnimationTime(var6);
            var2->unknown_0_ = 1;
        } else {
            var1->obj3D_.EnableFlag(0x1010);
            var1->obj3D_.MaybeSetRegularAnimation(data_ov017_021d82c6, 0);
            if (var6) var1->obj3D_.SetCurrentAnimationTime(var6);
            var2->unknown_0_ = 1;
        }
    }
}
