#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_0215440c;
struct Struct_020338d4;
struct Struct_ov009_0218aa28;

struct Struct_ov000_02160094 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

struct Struct_ov000_021600f8 {
    char unknown_0_[0xe];
    short unknown_e_;
};

struct Struct_ov025_021e6cf4 {
    char unknown_0_[8];
    unsigned char unknown_8_0_ : 7;
    unsigned char unknown_8_7_ : 1;
    unsigned char unknown_9_;
};

extern "C" unsigned char* func_ov000_02160130(void);
extern "C" void func_ov000_02167e6c(unsigned char* arg0);
extern "C" void func_ov000_02167dd8(unsigned char* arg0);
extern "C" void func_ov000_02167f10(unsigned char* arg0);
extern "C" void func_ov025_021def64(unsigned char* arg0, void* arg1, int arg2);
extern "C" Struct_ov000_02160094* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);
extern "C" void func_ov025_021e4448(int* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020338d4(Struct_020338d4* arg0, Struct_ov009_0218aa28* arg1);

// USA: func_ov025_021e6cf4
extern "C" ARM int func_ov025_021e6cf4(Struct_ov025_021e6cf4* arg0, void* arg1) {
    unsigned char* var0 = func_ov000_02160130();
    if (arg0->unknown_8_0_ == 0) {
        func_ov000_02167e6c(var0);
    } else if (arg0->unknown_8_0_ == 1) {
        func_ov000_02167dd8(var0);
    } else if (arg0->unknown_8_0_ == 2) {
        GameState* var1 = GameState::GetInstance();
        Struct_ov000_02160094* var2 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
        Struct_ov000_021600f8* var3 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
        if (var2 == NULL || var3 == NULL) {
            return 1;
        }
        GameObject* var4 = var1->GetCombatantByIndex(var2->unknown_20_);
        GameObject* var5 = var1->GetCombatantByIndex(var3->unknown_e_);
        if (var4 == NULL || var5 == NULL) {
            return 1;
        }
        Vector3fix var6;
        var6 = var4->obj3D_.position_;
        Vector3fix var7;
        var7 = var5->obj3D_.position_;
        var6.y = 0xcc;
        var7.y = 0xcc;
        Vector3fix var8;
        Vector3fix var9;
        if (Vector3fixSquaredDistance(&var6, &var7) > 0) {
            Vector3fix_Subtract(&var7, &var6, &var8);
            Vector3fix_Normalize(&var8, &var9);
        } else {
            func_ov025_021e4448(&var8.x, 0, 0, 0x1000);
            func_ov025_021e4448(&var9.x, 0, 0, 0x1000);
        }
        int var10 = var4->obj3D_.GetRadius() / 2 + 0x6000 + var5->obj3D_.GetRadius() / 2;
        Vector3fix var11;
        Vector3fix var12;
        Vector3fixMultiplyScalar(&var9, -var10 / 2, &var11);
        Vector3fixMultiplyScalar(&var9, var10 / 2, &var12);
        func_ov000_02167f10(var0);
        var11.y = 0xcc;
        var12.y = 0xcc;
        var4->obj3D_.position_ = var11;
        var5->obj3D_.position_ = var12;
        if (arg0->unknown_8_7_) {
            func_020338d4((Struct_020338d4*)var4, (Struct_ov009_0218aa28*)&var12);
            func_020338d4((Struct_020338d4*)var5, (Struct_ov009_0218aa28*)&var11);
        }
    } else if (arg0->unknown_8_0_ == 3) {
        func_ov000_02167f10(var0);
        func_ov025_021def64(var0, arg1, arg0->unknown_9_);
    }
    return 1;
}
