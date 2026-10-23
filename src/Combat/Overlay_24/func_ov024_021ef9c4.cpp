#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215ec80(int arg0, short* arg1, int arg2, int arg3, int arg4);

struct Struct_ov024_021ef9c4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
};

struct Struct_ov024_021ef9c4_2 {
    struct Random unknown_0_;
    char unknown_20_[0x81b0 - sizeof(struct Random)];
    struct Struct_ov024_021ef9c4 unknown_81b0_;
};

struct Struct_ov024_021ef9c4_3 {
    struct Struct_ov024_021ef9c4_2* unknown_0_;
};

static inline struct Struct_ov024_021ef9c4* inline_ov024_021ef9c4(struct Struct_ov024_021ef9c4_2* arg0) {
    return &arg0->unknown_81b0_;
}

struct Struct_ov024_021fea1c_4 { short unknown_0_[3]; };
struct Struct_ov024_021fed6c { short unknown_0_[8]; };

extern struct Struct_ov024_021fea1c_4 data_ov024_021fea1c[];
extern struct Struct_ov024_021fed6c data_ov024_021fed6c;

// USA: func_ov024_021ef9c4
extern "C" ARM int func_ov024_021ef9c4(struct Struct_ov024_021ef9c4_3* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021ef9c4* var0 = inline_ov024_021ef9c4(arg0->unknown_0_);
    if (var0 == 0) return 0;
    struct Struct_ov024_021fea1c_4 var1 = data_ov024_021fea1c[0];
    short var2 = 0;
    for (int var3 = 0; var3 < var0->unknown_1_4_; var3++) {
        struct Struct_ov024_021fed6c var4 = data_ov024_021fed6c;
        int var5 = func_ov000_0215ec80((int)arg0->unknown_0_, var4.unknown_0_, 8, var3 & 0xff, 1);
        if (var5 <= 0) continue;
        short var6 = 0;
        for (int var7 = 0; var7 < var5; var7++) {
            GameObject* var8 = GetCombatantByID((int)arg0->unknown_0_, var4.unknown_0_[var7]);
            if (var8 == 0) continue;
            ModifiableCombatStats* var9 = var8->currentStats_;
            if (var9->primaryStats.agility >= 999) continue;
            if (var9->agilityBuff < 2) var6++;
        }
        if (var6 > 0) var1.unknown_0_[var2++] = var3;
    }
    if (var2 <= 0) return 0;
    int var10 = NextRandomMax(&arg0->unknown_0_->unknown_0_, var2);
    *arg3 = func_ov000_0215ec80((int)arg0->unknown_0_, arg4, 8, var1.unknown_0_[var10] & 0xff, 1);
    return 1;
}
