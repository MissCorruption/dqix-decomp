#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_ov025_021e41a0_4 {
    unsigned char unknown_0_[8];
    const char* unknown_8_;
    unsigned char unknown_c_;
    signed char unknown_d_;
    unsigned short unknown_e_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    short unknown_12_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    unsigned char unknown_1a_;
};
struct Struct_02078398_2 {
    char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_0_ : 1;
    unsigned char unknown_11_1_ : 1;
    unsigned char unknown_11_2_ : 1;
    unsigned char unknown_11_3_ : 5;
    short unknown_12_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    short unknown_1e_;
    Vector3i unknown_20_;
    Vector3i unknown_2c_;
    Vector3i unknown_38_;
    Vector3i unknown_44_;
};
struct Struct_ov000_0215440c_2;
struct Struct_ov025_021e41a0_2 { unsigned char unknown_0_[0x20]; unsigned short unknown_20_; };
struct Struct_ov025_021e41a0_3 { unsigned char unknown_0_[0xe]; short unknown_e_; };
struct Struct_ov000_0215440c { unsigned char unknown_0_[9]; unsigned char unknown_9_; };
#if defined(jpn)
struct Struct_ov025_021e41a0 { unsigned char unknown_0_[0x70f2]; unsigned short unknown_6f02_; };
#else
struct Struct_ov025_021e41a0 { unsigned char unknown_0_[0x6f02]; unsigned short unknown_6f02_; };
#endif
#if defined(jpn)
struct Struct_ov025_021ef988_10 { unsigned char unknown_0_[4]; char* unknown_c_; };
#else
struct Struct_ov025_021ef988_10 { unsigned char unknown_0_[0xc]; char* unknown_c_; };
#endif
extern Struct_ov025_021ef988_10 data_ov025_021ef988;
extern "C" void* func_02057924();
extern "C" Struct_ov025_021e41a0_2* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" Struct_ov025_021e41a0_3* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" void func_02078484(Struct_02078398_2*);
extern "C" Struct_ov025_021e41a0* func_ov000_02160130();
extern "C" void* func_02057fb4(void*, int, void*);
extern "C" void** func_ov025_021e8cf0(char*, int);

static inline void inline_ov025_021e41a0(Vector3i* arg0, int arg1) {
    arg0->x *= arg1;
    arg0->z *= arg1;
}

// USA: func_ov025_021e41a0
extern "C" ARM int func_ov025_021e41a0(Struct_ov025_021e41a0_4* arg0, Struct_ov000_0215440c* arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02057924();
    Struct_ov025_021e41a0_2* var2 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
    if (!var2) return 0;
    int var3 = var2->unknown_20_;
    GameObject* var4 = var0->GetGameObjectByIndex(var3);
    int var5 = var4->obj3D_.normalizedAnimationTime_;
    if (arg0->unknown_18_ > 0 && var5 < arg0->unknown_18_) return 0;
    Struct_02078398_2 var6;
    func_02078484(&var6);
    var6.unknown_11_2_ = 0;
    int var7 = 1;
    if (arg0->unknown_10_ & 1) {
        Vector3i var8 = {};
        for (int var9 = 0; var9 < arg1->unknown_9_; var9++) {
            Struct_ov025_021e41a0_3* var10 = func_ov000_021600f8(arg1, var9);
            if (var10) {
                GameObject* var11 = var0->GetGameObjectByIndex(var10->unknown_e_);
                if (var11) {
                    Vector3i var12 = var11->obj3D_.position_;
                    Vector3fix_Add(&var8, &var12, &var8);
                    var6.unknown_44_ = var11->obj3D_.GetScale();
                }
            }
        }
        if (arg1->unknown_9_) {
            int var13 = 4096.0f * (1.0f / (unsigned int)arg1->unknown_9_);
            Vector3fixMultiplyScalar(&var8, var13, &var8);
        }
        Struct_ov025_021e41a0_3* var14 = func_ov000_021600f8(arg1, 0);
        Vector3i var15 = {arg0->unknown_12_, arg0->unknown_14_, arg0->unknown_16_};
        int var16 = 0;
        int var17 = var14->unknown_e_;
        if (var17 >= 0 && var17 <= 3) var16 = 1;
        if (!var16) inline_ov025_021e41a0(&var15, -1);
        Vector3fix_Add(&var8, &var15, &var8);
        var6.unknown_2c_ = var8;
        int var18 = 0;
        int var19 = var14->unknown_e_;
        if (var19 >= 0 && var19 <= 3) var18 = 1;
        var6.unknown_38_.y = var18 ? 0x3244 : 0;
        var7 = 0;
    }
    if (var7) var6.unknown_14_ = var3;
    if (arg0->unknown_8_) strcpy(var6.unknown_0_, arg0->unknown_8_);
    var6.unknown_10_ = arg0->unknown_c_;
    var6.unknown_11_0_ = arg0->unknown_1a_;
    if (var6.unknown_11_0_) {
        var6.unknown_14_ = -1;
        var6.unknown_44_.x = 0x800;
        var6.unknown_44_.y = 0x800;
        var6.unknown_44_.z = 0x800;
    }
    Struct_ov025_021e41a0* var20 = func_ov000_02160130();
    var20->unknown_6f02_ = arg0->unknown_e_;
    void* var21 = func_02057fb4(var1, arg0->unknown_e_, &var6);
    void** var22 = func_ov025_021e8cf0(data_ov025_021ef988.unknown_c_, arg0->unknown_d_);
    if (var22) *var22 = var21;
    return 1;
}
