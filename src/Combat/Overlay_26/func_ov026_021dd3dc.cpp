#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02161e30;
struct Struct_ov000_0217e870_2;
struct Struct_ov026_021d8ba0_4;
struct Struct_0202b2f0;
struct Struct_02010088;
struct Struct_ov026_021dc8fc_4;

struct Struct_ov026_021d8ba0_6 {
    char unknown_0_[0x1c];
    signed char unknown_1c_;
};

struct Struct_ov026_021dd3dc_2 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
};

struct Struct_ov017_021af66c_5 {
    char unknown_0_[0x138];
    Struct_ov026_021dd3dc_2* unknown_138_;
};

struct Struct_ov026_021de6cc {
    short unknown_0_[4];
};

struct Struct_ov026_021dd3dc {
    char unknown_0_[0x48];
};

struct Struct_ov000_021643d4_3 {
    char unknown_0_[0x68];
    Struct_ov026_021dd3dc unknown_68_;
};

extern "C" const Struct_ov026_021de6cc data_ov026_021de6cc;
extern "C" const Struct_ov026_021de6cc data_ov026_021de6d4;

extern "C" Struct_0202b2f0* func_0202ae18();
extern "C" int func_ov000_0215fc60(char*);
extern "C" int func_0202b7d8(int*);
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" Struct_ov026_021d8ba0_6* func_ov026_021dae60(Struct_ov026_021d8ba0_4*, int);
extern "C" int func_0202c1c0(Struct_0202b2f0*, int);
extern "C" int func_020546a8(void*);
extern "C" int func_02010088(Struct_02010088*);
extern "C" int func_ov026_021dce1c(Struct_ov026_021dc8fc_4*);
extern "C" int func_020882f8(unsigned char*);
extern "C" int func_ov000_0215f7a8(Struct_ov000_02161e30*, short*, unsigned char);
extern "C" int func_ov000_0215e9fc(Struct_ov000_02161e30*, short*, int, int);
extern "C" void func_020ac4c0(void*);
extern "C" void func_020a0780(struct Struct_020a0780*, unsigned int);
extern "C" void func_020a0068(struct Struct_020a0068*, unsigned int);
extern "C" void func_020a07b0(struct Struct_020a07b0*, unsigned int);
extern "C" void func_020a00a4(struct Struct_020a00a4*, unsigned int);
extern "C" void func_020ac494(void*);

// USA: func_ov026_021dd3dc
extern "C" ARM int func_ov026_021dd3dc(Struct_ov000_02161e30* arg0, Struct_ov000_0217e870_2* arg1, Struct_ov026_021d8ba0_4* arg2) {
    Struct_ov026_021de6cc var0;
    Struct_ov026_021de6cc var1;
    short var2[4];
    int var3[4];
    Struct_ov000_021643d4_3 var4;
    GameState* var5 = GameState::GetInstance();
    Struct_0202b2f0* var6 = func_0202ae18();
    int var7;
    int var8;
    int var9 = 0;
    if (func_ov000_0215fc60((char*)arg0) != 0) {
        return 1;
    }
    if (func_0202b7d8((int*)var6) == 0 || func_020a35e0((unsigned char*)arg1, var9)) {
        var8 = 0;
        for (var7 = 0; var7 < 4; var7++) {
            if (!func_020a35e0((unsigned char*)arg1, var7)) continue;
            if (var7 != 0 && !func_0200ff58(var5, var7)) continue;
            Struct_ov026_021d8ba0_6* var10 = func_ov026_021dae60(arg2, var7);
            if (!var10) continue;
            if (var10->unknown_1c_ == 6) {
                var8 = 1;
                break;
            }
        }
        if (var8 == 0) {
            for (var7 = 0; var7 < 4; var7++) {
                if (!func_020a35e0((unsigned char*)arg1, var7)) continue;
                if (var7 != 0 && !func_0200ff58(var5, var7)) continue;
                GameObject* var11 = var5->GetCombatantByIndex(var7);
                if (!var11) continue;
                if ((((Struct_ov017_021af66c_5*)var11)->unknown_138_->unknown_14_ & 0x80019) == 0) {
                    var8 = 2;
                    break;
                }
            }
        }
        var3[var9] = var8;
        var9++;
    }
    if (func_0202b7d8((int*)var6)) {
        for (var7 = 1; var7 < 4; var7++) {
            if (!func_020a35e0((unsigned char*)arg1, var7)) continue;
            if (func_0200ff58(var5, var7)) continue;
            GameObject* var12 = var5->GetCombatantByIndex(var7);
            if (!var12) continue;
            Struct_ov026_021d8ba0_6* var13 = func_ov026_021dae60(arg2, var7);
            if (!var13) continue;
            int var14 = 0;
            if (var13->unknown_1c_ == 6) {
                var14 = 1;
            } else if ((((Struct_ov017_021af66c_5*)var12)->unknown_138_->unknown_14_ & 0x80019) == 0) {
                var14 = 2;
            }
            var3[var9] = var14;
            var9++;
        }
    }
    int var15 = 0;
    for (int var16 = 0; var16 < var9; var16++) {
        if (var3[var16] == 1) var15 = 1;
    }
    if (var15) {
        for (int var17 = 0; var17 < var9; var17++) {
            if (var3[var17] == 2) return 4;
        }
    }
    var8 = 1;
    for (int var18 = 0; var18 < var9; var18++) {
        if (var3[var18] == 1) {
            var0 = data_ov026_021de6cc;
            int var19 = 0;
            int var20;
            for (var20 = 0; var20 < 4; var20++) {
                if (!func_020a35e0((unsigned char*)arg1, var20)) continue;
                if (func_0202c1c0(var6, var20)) {
                    var0.unknown_0_[var19] = var20;
                    var19++;
                }
            }
            for (var20 = 0; var20 < 4; var20++) {
                if (!func_020a35e0((unsigned char*)arg1, var20)) continue;
                GameObject* var21 = func_0200ff58(var5, var20);
                if (!var21) continue;
                if (func_0202c1c0(var6, func_020546a8(var21))) {
                    var0.unknown_0_[var19] = var20;
                    var19++;
                }
            }
            var1 = data_ov026_021de6d4;
            int var22;
            int var23 = 0;
            for (var22 = 0; var22 < var19; var22++) {
                short var24 = var0.unknown_0_[var22];
                GameObject* var25 = var5->GetCombatantByIndex(var24);
                if (!var25) continue;
                if (func_02010088((Struct_02010088*)var25)) continue;
                if (func_ov026_021dce1c((Struct_ov026_021dc8fc_4*)var25)) continue;
                if (func_020882f8((unsigned char*)((Struct_ov017_021af66c_5*)var25)->unknown_138_)) continue;
                if ((((Struct_ov017_021af66c_5*)var25)->unknown_138_->unknown_14_ & 0x80000) == 0) {
                    var1.unknown_0_[var23] = var24;
                    var23++;
                }
            }
            if (func_ov000_0215f7a8(arg0, var1.unknown_0_, var23)) {
                var8 = 2;
            } else {
                var8 = 3;
            }
            break;
        }
    }
    if (var8 != 1) {
        func_020ac4c0(&var4);
        Struct_ov026_021dd3dc* var26 = &var4.unknown_68_;
        func_020a0780((Struct_020a0780*)&var4, 1);
        func_020a0068((Struct_020a0068*)var26, 1);
        if (var8 == 2) {
            int var27 = func_ov000_0215e9fc(arg0, var2, 4, 0);
            int var28 = 0;
            for (int var29 = 0; var29 < var27; var29++) {
                GameObject* var30 = var5->GetCombatantByIndex(var2[var29]);
                if (!var30) continue;
                if (func_02010088((Struct_02010088*)var30)) {
                    var28 = 1;
                    break;
                }
            }
            if (!var28) {
                func_020a07b0((Struct_020a07b0*)&var4, 1);
                func_020a00a4((Struct_020a00a4*)var26, 1);
            }
        }
        func_020ac494(&var4);
    }
    return var8;
}
