#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215ec80(int arg0, short* arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov024_021eda60(GameObject* arg0);

struct Struct_ov024_021ef1f8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
};
struct Struct_ov024_021ef1f8_2 { int unknown_0_; };
struct Struct_ov024_021fea1c_3 { short unknown_0_[3]; };
struct Struct_ov024_021fed2c { short unknown_0_[8]; };
extern struct Struct_ov024_021fea1c_3 data_ov024_021fea1c[4];
extern struct Struct_ov024_021fed2c data_ov024_021fed2c;

// USA: func_ov024_021ef1f8
extern "C" ARM int func_ov024_021ef1f8(struct Struct_ov024_021ef1f8_2* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021ef1f8* var0 = (struct Struct_ov024_021ef1f8*)(arg0->unknown_0_ + 0x81b0);
    if (!var0) return 0;

    struct Struct_ov024_021fea1c_3 var1 = data_ov024_021fea1c[3];
    short var2 = 0;
    for (int var3 = 0; var3 < var0->unknown_1_4_; var3++) {
        struct Struct_ov024_021fed2c var4 = data_ov024_021fed2c;
        int var5 = func_ov000_0215ec80(arg0->unknown_0_, var4.unknown_0_, 8, var3 & 0xff, 1);
        if (var5 <= 0) continue;
        short var6 = 0;
        for (int var7 = 0; var7 < var5; var7++) {
            GameObject* var8 = GetCombatantByID(arg0->unknown_0_, var4.unknown_0_[var7]);
            if (!var8) continue;
            if (var8->currentStats_->primaryStats.defense >= 0xffff) continue;
            if (var8->currentStats_->defenseBuff >= 2) continue;
            if (!func_ov024_021eda60(var8)) var6++;
        }
        if (var6 > 0) var1.unknown_0_[var2++] = var3;
    }
    if (var2 <= 0) return 0;

    int var9 = NextRandomMax((struct Random*)arg0->unknown_0_, var2);
    *arg3 = func_ov000_0215ec80(arg0->unknown_0_, arg4, 8, var1.unknown_0_[var9] & 0xff, 1);
    return 1;
}
