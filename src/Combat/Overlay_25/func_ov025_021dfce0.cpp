#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov025_021dfce0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    GameObject* unknown_8_;
};
struct Struct_ov023_021edc08 {
#if defined(jpn)
    char unknown_0_[0x218];
    void* unknown_29c_;
    char unknown_21c_[0x57c8-0x21c];
#else
    char unknown1_0_[0x29c];
    void* unknown_29c_;
    char unknown_2a0_[0x55d8-0x2a0];
#endif
    int unknown_55d8_;
};
struct Struct_02048c90;
extern "C" void func_02048c90(Struct_02048c90*);
extern "C" int func_02049468(unsigned char*);
extern "C" int func_0204948c(unsigned char*);
extern "C" int func_02049ee8(unsigned char*);
extern "C" void func_02049458(unsigned char*, unsigned char);
extern "C" void func_0204947c(unsigned char*, unsigned char);
extern "C" int func_ov000_02162864(void*, int);
extern "C" int func_ov000_02162908(void*, int, int*);
extern "C" int func_ov025_021e1048(void*, Struct_ov025_021dfce0*);

inline int inline_ov025_021dfce0_2(int arg0) { return arg0 >= 0 && arg0 <= 3; }
inline int inline_ov025_021dfce0(int arg0) { return arg0 >= 0xc0 && arg0 <= 0xc7; }

// USA: func_ov025_021dfce0
extern "C" ARM void func_ov025_021dfce0(Struct_ov023_021edc08* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov025_021dfce0 var1[12];
    int var2 = func_ov025_021e1048(arg0->unknown_29c_, var1);
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var1[var3].unknown_8_;
        func_02048c90((Struct_02048c90*)var4);
        if (func_02049468((unsigned char*)var4) != 0xff) {
            GameObject* var5 = var0->GetCombatantByIndex(func_02049468((unsigned char*)var4));
            if (!var5) func_02049458((unsigned char*)var4, 0xff);
            else if (!func_02049ee8((unsigned char*)var5)) func_02049458((unsigned char*)var4, 0xff);
        }
        if (func_0204948c((unsigned char*)var4) != 0xff) {
            GameObject* var6 = var0->GetCombatantByIndex(func_0204948c((unsigned char*)var4));
            if (!var6) func_0204947c((unsigned char*)var4, 0xff);
            else if (!func_02049ee8((unsigned char*)var6)) func_0204947c((unsigned char*)var4, 0xff);
        }
    }
    for (int var7 = 0; var7 < var2; var7++) {
        GameObject* var8 = var1[var7].unknown_8_;
        int var9 = func_02049468((unsigned char*)var8);
        if (var9 != 0xff) continue;
        int var10[12];
        if (arg0->unknown_55d8_ <= func_ov000_02162864(arg0, var1[var7].unknown_0_)) {
            if (func_ov000_02162908(arg0, func_ov000_02162864(arg0, var1[var7].unknown_0_), var10) > 0) {
                var9 = var10[0];
                func_02049458((unsigned char*)var8, var9);
            }
        }
        if (var9 != 0xff) continue;
        Vector3i var11 = var8->obj3D_.position_;
        var9 = 0xff;
        int var12 = 0x400000;
        for (int var13 = 0; var13 < var2; var13++) {
            if (!func_02049ee8((unsigned char*)var1[var13].unknown_8_)) continue;
            int var14 = var1[var13].unknown_0_;
            int var15 = var1[var7].unknown_0_;
            int var16;
            if (inline_ov025_021dfce0_2(var15) && inline_ov025_021dfce0_2(var14)) var16 = 1;
            else if (inline_ov025_021dfce0(var15) && inline_ov025_021dfce0(var14)) var16 = 1;
            else var16 = 0;
            if (var16) continue;
            Vector3i var17 = var1[var13].unknown_8_->obj3D_.position_;
            int var18 = Vector3fix_Distance(&var11, &var17);
            if (var18 < var12) {
                var9 = var1[var13].unknown_0_;
                var12 = var18;
            }
        }
        func_0204947c((unsigned char*)var8, var9);
    }
}
