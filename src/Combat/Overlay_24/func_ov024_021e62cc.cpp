#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov000_021584e8;
struct Struct_ov000_0215440c { char unknown_0_[9]; unsigned char unknown_9_; };
struct Struct_ov024_021e62cc {
    char unknown_0_[0x14];
    unsigned char unknown_14_[3];
    unsigned char unknown_17_;
    unsigned char unknown_18_;
};
struct Struct_ov024_021e62cc_2 { char unknown_0_[0xc]; short unknown_c_; };
struct Struct_ov024_021e62cc_3 {
    char unknown_0_[4];
    short unknown_4_;
};
struct Struct_ov024_021e62cc_4 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    unsigned char* unknown_150_;
};
struct Struct_ov024_021e62cc_5 { char unknown_0_[0x10]; int unknown_10_; };
struct Struct_ov024_021e62cc_6 {
    char unknown_0_[4];
    struct Struct_ov000_0215440c* unknown_4_;
    void* unknown_8_;
    char unknown_c_[4];
    void* unknown_10_;
};
struct Struct_ov024_021e62cc_7 { int unknown_0_; int unknown_4_; };

extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_0215fc60(char*);
extern "C" int func_ov000_0215ffa0(struct Struct_ov024_021e62cc* arg0);
extern "C" struct Struct_ov024_021e62cc* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" struct Struct_ov024_021e62cc_2* func_ov000_0215fff4(void* arg0, int arg1, int arg2);
extern "C" int func_ov024_021e6798(GameObject* arg0);
extern "C" int func_ov024_021e67b0(GameObject* arg0);
extern "C" int func_02085400(unsigned char* arg0);
extern "C" int func_ov000_02156068(void* arg0, int arg1, int arg2, int arg3);
extern "C" short func_ov000_0215a004(void* arg0, int arg1, int arg2, int arg3, unsigned long long* arg4, struct Struct_ov024_021e62cc_5* arg5, int arg6, int arg7);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" int func_ov000_02159f18(void* arg0, unsigned long long arg1, int arg2);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                            short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);

static inline short inline_ov024_021e57e0(ModifiableCombatStats* arg0) {
    return arg0->primaryStats.currMP;
}

// USA: func_ov024_021e62cc
extern "C" ARM void func_ov024_021e62cc(struct Struct_ov024_021e62cc_6* arg0, int arg1, struct Struct_ov024_021e62cc_5* arg2) {
    GameState* var0 = GameState::GetInstance();
    if (func_ov000_0215fc60((char*)arg0->unknown_10_) != 0) return;
    if (!(arg2->unknown_10_ & 0x80)) return;
    GameObject* var1 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var1) return;
    if (func_02010088((struct Struct_02010088*)var1)) return;

    int var2 = 0;
    struct Struct_ov024_021e62cc_7 var3[8];
    memset(var3, var2, sizeof(var3));
    for (int var4 = 0; var4 < arg0->unknown_4_->unknown_9_; var4++) {
        struct Struct_ov024_021e62cc* var5 = func_ov000_021600f8(arg0->unknown_4_, var4);
        if (!var5) continue;
        int var6 = 0;
        for (int var7 = 1; var7 < var5->unknown_17_; var7++) {
            if (var5->unknown_14_[var7] == 3) var6 = 1;
        }
        if (var6) continue;
        int var8 = func_ov000_0215ffa0(var5);
        if (arg1 == var8) continue;
        int var9 = 0;
        for (int var10 = 0; var10 < var2; var10++) {
            if (var8 == var3[var10].unknown_0_) {
                var9 = 1;
                for (int var11 = 0; var11 < var5->unknown_18_; var11++) {
                    struct Struct_ov024_021e62cc_2* var12 = func_ov000_0215fff4(var5, var11, 0);
                    if (var12) var3[var10].unknown_4_ += var12->unknown_c_;
                }
            }
        }
        if (var9) continue;
        var3[var2].unknown_0_ = var8;
        for (int var13 = 0; var13 < var5->unknown_18_; var13++) {
            struct Struct_ov024_021e62cc_2* var14 = func_ov000_0215fff4(var5, var13, 0);
            if (var14) var3[var2].unknown_4_ += var14->unknown_c_;
        }
        var2++;
    }

    for (int var15 = 0; var15 < var2; var15++) {
        GameObject* var16 = GetCombatantByID((int)arg0->unknown_10_, (short)var3[var15].unknown_0_);
        if (!var16) continue;
        if (func_02010088((struct Struct_02010088*)var16)) continue;
        if (func_ov024_021e6798(var16)) continue;
        if (var3[var15].unknown_4_ <= 0) continue;
        float var17 = 0.25f;
        int var18 = 0;
        if (var3[var15].unknown_0_ >= 0 && var3[var15].unknown_0_ <= 3) var18 = 1;
        if (var18) {
            GameObject* var19 = func_0200ff1c(var0, var3[var15].unknown_0_);
            if (!var19) continue;
            struct Random* var20 = (struct Random*)arg0->unknown_10_;
            int var21 = 0;
            if (func_ov024_021e67b0(var19)) {
                var17 = 0.25f;
                var21 = 1;
            } else if (func_02085400(((struct Struct_ov024_021e62cc_4*)var19)->unknown_150_)) {
                if (NextRandomMax(var20, 100) < 50) {
                    var17 = 0.2f;
                    var21 = 1;
                }
            }
            if (!var21) continue;
        } else {
            if (!func_ov024_021e67b0(var16)) continue;
        }
        int var22 = var17 * var3[var15].unknown_4_;
        if (func_ov000_02156068(arg0->unknown_10_, arg1, 0, 1)) {
            var22 = NextRandomMax((struct Random*)arg0->unknown_10_, 2);
        }
        if (var22 <= 0) continue;
        unsigned long long var23 = 0;
        short var24 = func_ov000_0215a004(arg0->unknown_10_, ((struct Struct_ov024_021e62cc_3*)var16)->unknown_4_, arg1, var22, &var23, arg2, 0, 0);
        struct Struct_ov000_021584e8* var25 = func_ov000_0215e958(arg0->unknown_10_);
        if (!var25) return;
        func_ov000_0215a88c(arg0->unknown_10_, var25, func_ov024_021da644(arg1, 0x1b4, 0x22b));
        func_ov000_0215ccbc((int)arg0->unknown_10_, var25, var1, var22, var24, inline_ov024_021e57e0(var1->currentStats_), var23, 0);
        func_ov000_0215fe84(arg0->unknown_8_, var25, 4);
        ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
        if (func_ov000_02159f18(arg0->unknown_10_, var23, 2)) {
            var25 = func_ov000_0215e958(arg0->unknown_10_);
            if (!var25) return;
            func_ov000_0215a88c(arg0->unknown_10_, var25, func_ov024_021da644(arg1, 0x1b3, 0x22a));
            func_ov000_0215ccbc((int)arg0->unknown_10_, var25, var1, 0, var24, inline_ov024_021e57e0(var1->currentStats_), 0, 0);
            func_ov000_0215fe84(arg0->unknown_8_, var25, 4);
            ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
        }
        if (func_ov000_02159f18(arg0->unknown_10_, var23, 2)) return;
    }
}
