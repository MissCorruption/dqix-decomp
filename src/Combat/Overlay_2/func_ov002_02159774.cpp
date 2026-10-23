#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/CombatantRecovery.h"

extern "C" int func_020dc920(int arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov017_0218b628(signed char arg0);
extern int data_020fdcb0[][8];

struct Struct_ov002_02159774 {
#if defined(jpn)
    unsigned char unknown_0_[0x10];
#else
    unsigned char unknown1_0_[0x34];
#endif
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned char unknown_38_[4];
};

// USA: func_ov002_02159774
extern "C" ARM int func_ov002_02159774(char *arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
#if defined(jpn)
    enum { Enum_ov002_02159774_7206 = 0x1aee, Enum_ov002_02159774_9340 = 0x22ac, Enum_ov002_02159774_7096 = 0x1a80, Enum_ov002_02159774_6832 = 0x1a08 };
#else
    enum { Enum_ov002_02159774_7206 = 0x1c26, Enum_ov002_02159774_9340 = 0x247c, Enum_ov002_02159774_7096 = 0x1bb8, Enum_ov002_02159774_6832 = 0x1ab0 };
#endif
    GameObject *var0;
    float var1, var2, var3;
    int var4;
    var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == 0) return 3;
    if (arg2) {
        int var5 = 0;
        if (*(short *) (arg0 + Enum_ov002_02159774_7206) == 0xd1) var5 = 1;
        if (func_020dc920(arg1 & 0xff, arg3, arg4, var5) == 0) return 3;
    }
    int *var6 = data_020fdcb0[var0->obj3D_.unknown_4_];
    var1    = (float) var6[0];
    var2    = (float) var6[2];
    if ((*(int *) (arg0 + Enum_ov002_02159774_9340) & 1) || *(int *) (arg0 + Enum_ov002_02159774_7096) == 4) {
        if (func_ov017_0218b628(arg1)) {
            var1 = (float) (int) var0->unknown_ac_.unknown_84_->unknown_4_;
            var2 = (float) (int) var0->baseStats_->primaryStats.maxHP;
        } else {
            Struct_ov002_02159774 *var7 = &((Struct_ov002_02159774 *) (arg0 + Enum_ov002_02159774_6832))[var0->obj3D_.unknown_4_];
            var1             = (float) (unsigned int) var7->unknown_34_;
            var2             = (float) (unsigned int) var7->unknown_36_;
        }
    }
    var3 = 0.0f;
    if (var1 > 0.0f && var2 > 0.0f) var3 = var1 / var2;
    var4 = 0xf;
    if (var3 <= 0.0f)
        var4 = 9;
    else if (var3 <= 0.08f)
        var4 = 0xb;
    else if (var3 <= 0.25f)
        var4 = 0xd;
    return var4;
}
