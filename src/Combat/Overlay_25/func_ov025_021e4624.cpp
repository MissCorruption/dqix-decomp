#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "std_library_functions.h"

struct Struct_02078398_2 {
    char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    short unknown_12_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    short unknown_1e_;
    Vector3fix unknown_20_;
    Vector3fix unknown_2c_;
    Vector3fix unknown_38_;
    Vector3fix unknown_44_;
};

struct Struct_ov000_0215440c_2;
struct Struct_ov000_0215440c;

struct Struct_ov000_0215440c_4 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

struct Struct_ov000_0215440c_5 {
    char unknown_0_[0xe];
    short unknown_e_;
};

struct Struct_ov025_021ef9a8 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; int unknown_14_; };

struct Struct_ov025_021ef988_11 {
    char unknown_0_[0x20];
    int unknown_20_;
    int unknown_24_;
};

struct Struct_ov025_021e4624 {
    char unknown_0_[8];
    const char* unknown_8_;
    unsigned short unknown_c_;
    short unknown_e_;
};

extern "C" Struct_ov000_0215440c_4* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" Struct_ov000_0215440c_5* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);
extern "C" void func_ov025_021e3158(struct Struct_ov025_021ef9a8* arg0);
extern "C" void func_02078484(struct Struct_02078398_2* arg0);
extern "C" int func_02057fb4(void*, int, void*);
extern "C" void func_02057db8(void*, int);
extern "C" void* func_02057924(void);

extern struct Struct_ov025_021ef9a8 data_ov025_021ef9a8;
extern struct Struct_ov025_021ef988_11 data_ov025_021ef988;

// USA: func_ov025_021e4624
extern "C" ARM int func_ov025_021e4624(struct Struct_ov025_021e4624* arg0, void* arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02057924();
    Struct_ov000_0215440c_4* var2 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
    Struct_ov000_0215440c_5* var3 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
    int var4 = var2->unknown_20_;
    int var5 = var3->unknown_e_;
    GameObject* var6 = var0->GetGameObjectByIndex(var4);
    GameObject* var7 = var0->GetGameObjectByIndex(var5);
    if (var6 == NULL || var7 == NULL) {
        func_ov025_021e3158(&data_ov025_021ef9a8);
        return 1;
    }

    if (data_ov025_021ef988.unknown_20_ == 0) {
        struct Struct_02078398_2 var8;
        func_02078484(&var8);
        Vector3fix var9 = var6->obj3D_.position_;
        Vector3fix var10 = var7->obj3D_.position_;
        Vector3fix var11;
        Vector3fix_Subtract(&var10, &var9, &var11);
        var11.y = 0;
        Vector3fix_Normalize(&var11, &var11);
        Vector3fixMultiplyScalar(&var11, arg0->unknown_e_, &var8.unknown_20_);
        var8.unknown_2c_ = var6->obj3D_.position_;
        var8.unknown_38_ = var6->obj3D_.rotation_;
        var8.unknown_44_ = var6->obj3D_.GetScale();
        var8.unknown_2c_.y += var6->obj3D_.GetHeight() / 2;
        if (arg0->unknown_8_ != NULL) {
            strcpy(var8.unknown_0_, arg0->unknown_8_);
        }
        data_ov025_021ef988.unknown_24_ = func_02057fb4(var1, arg0->unknown_c_, &var8);
        data_ov025_021ef988.unknown_20_++;
        return 0;
    }

    if (data_ov025_021ef988.unknown_20_ == 1) {
        GameObject* var12 = var0->GetGameObjectByIndex(data_ov025_021ef988.unknown_24_);
        if (var12 == NULL) {
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
        Vector3fix var13 = var7->obj3D_.position_;
        Vector3fix var14 = var12->obj3D_.position_;
        fix32_t var15 = Vector3fix_Distance(&var13, &var14);
        fix32_t var16 = (var6->obj3D_.GetHeight() + var7->obj3D_.GetHeight()) / 2;
        if (var16 < arg0->unknown_e_ * 2) {
            var16 = arg0->unknown_e_ * 2;
        }
        if (var15 >= var16) {
            return 0;
        }
        func_02057db8(var1, data_ov025_021ef988.unknown_24_);
        func_ov025_021e3158(&data_ov025_021ef9a8);
        return 1;
    }

    func_ov025_021e3158(&data_ov025_021ef9a8);
    return 1;
}
