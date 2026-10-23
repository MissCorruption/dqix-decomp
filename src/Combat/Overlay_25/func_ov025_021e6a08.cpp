#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_0215440c;
struct Struct_ov000_02160094 { char unknown_0_[0x20]; unsigned short unknown_20_; };
struct Struct_ov000_021600f8 { char unknown_0_[0xe]; short unknown_e_; };
struct Struct_ov025_021ef9a8 { int unknown_0_[6]; };
struct Struct_ov025_021ef988_24 { char unknown_0_[0x20]; int unknown_20_; };
struct Struct_ov025_021e6a08 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_02048c90;
struct Struct_02010604 { Object3D unknown_0_; char unknown_ac_[0x14]; unsigned char unknown_c0_; };
struct Struct_ov023_021f2a48 { char unknown_0_[0x14]; unsigned int unknown_14_; };
extern "C" Struct_ov000_02160094* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" void func_ov025_021e3158(Struct_ov025_021ef9a8*);
extern "C" void func_02049ae4(unsigned char*);
extern "C" int func_02048c10(unsigned char*);
extern "C" int func_020882f8(unsigned char*);
extern "C" void func_02033920(GameObject*, int, int);
extern "C" int func_02033b88(Struct_02010604*, int);
extern "C" void func_02048c90(Struct_02048c90*);
extern Struct_ov025_021ef9a8 data_ov025_021ef9a8;
extern Struct_ov025_021ef988_24 data_ov025_021ef988;

// USA: func_ov025_021e6a08
extern "C" ARM int func_ov025_021e6a08(Struct_ov025_021e6a08* arg0, Struct_ov000_0215440c_2* arg1) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov000_02160094* var1 = func_ov000_02160094(arg1, 0);
    Struct_ov000_021600f8* var2 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
    if (!var1 || !var2) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
    GameObject* var3 = var0->GetCombatantByIndex(var1->unknown_20_);
    GameObject* var4 = var0->GetCombatantByIndex(var2->unknown_e_);
    if (!var3 || !var4) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
    int var5 = 0;
    if (data_ov025_021ef988.unknown_20_ == 0) {
        func_02049ae4((unsigned char*)var3);
        var5 = 1;
        if (!func_02048c10((unsigned char*)var4) && !(((Struct_ov023_021f2a48*)var4->currentStats_)->unknown_14_ & 8) && !func_020882f8((unsigned char*)var4->currentStats_)) {
            func_02033920(var4, var1->unknown_20_, var5);
        }
        data_ov025_021ef988.unknown_20_ = 1;
    }
    if (data_ov025_021ef988.unknown_20_ == 1) {
        Vector3i var6 = var3->obj3D_.position_;
        Vector3i var7 = var4->obj3D_.position_;
        int var8 = var3->obj3D_.GetRadius() + var4->obj3D_.GetRadius();
        int var9 = arg0->unknown_8_ + var8 / 2;
        int var10 = Vector3fix_Distance(&var6, &var7);
        if (!var10) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
        if (var10 < var9) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
        Vector3i var11;
        Vector3fix_Subtract(&var7, &var6, &var11);
        var9 = var10 - var9;
        Vector3i var12;
        Vector3fixMultiplyScalar(&var11, fix32_Divide(var9, var10), &var12);
        Vector3i var13;
        Vector3fix_Add(&var6, &var12, &var13);
        Vector3i var14;
        Vector3fix_Subtract(&var13, &var6, &var14);
        Vector3fixMultiplyScalar(&var14, fix32_Divide(0x1000, 0x4000), &var14);
        int var15 = Vector3fix_Length(&var14);
        if (var15 > 0x333) Vector3fixMultiplyScalar(&var14, fix32_Divide(0x333, var15), &var14);
        else if (((Struct_02010604*)var3)->unknown_c0_ != 6) func_02033b88((Struct_02010604*)var3, 0);
        Vector3i var16;
        Vector3fix_Add(&var6, &var14, &var16);
        var3->obj3D_.position_ = var16;
        if (var9 < 0x28 || (!var5 && ((Struct_02010604*)var3)->unknown_c0_ == 0)) {
            func_02033b88((Struct_02010604*)var3, 0);
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
    }
    if (var5) {
        func_02048c90((Struct_02048c90*)var3);
        if (((Struct_02010604*)var3)->unknown_c0_ != 6) func_02033b88((Struct_02010604*)var3, 1);
    }
    return 0;
}
