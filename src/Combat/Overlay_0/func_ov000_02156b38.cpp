#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020886b0;
struct Struct_020886f8;
struct Struct_02088740;
struct Struct_02088788;
struct Struct_020887d0;

struct Struct_02000c9c_28 {
    char unknown_0_[0x3e];
    unsigned char unknown_3e_[21];
};

extern "C" int func_ov000_02156c94(GameObject* arg0);
extern "C" int func_ov000_02156cac(GameObject* arg0);
extern "C" int func_020886b0(struct Struct_020886b0* arg0);
extern "C" int func_020886f8(struct Struct_020886f8* arg0);
extern "C" int func_02088740(struct Struct_02088740* arg0);
extern "C" int func_02088788(struct Struct_02088788* arg0);
extern "C" int func_020887d0(struct Struct_020887d0* arg0);

static inline unsigned char* inline_ov000_02156b38(ModifiableCombatStats* arg0) {
    return ((struct Struct_02000c9c_28*)arg0)->unknown_3e_;
}

// USA: func_ov000_02156b38
extern "C" ARM float func_ov000_02156b38(void* arg0, int arg1, int arg2) {
    float var0, var1, var2, var3, var4;
    float var5;
    GameObject* var6 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var6 == NULL) {
        return 1.0f;
    }

    var5 = 0.0f;
    if (func_ov000_02156c94(var6)) {
        var5 = -25.0f;
    } else if (func_ov000_02156cac(var6)) {
        var5 = 25.0f;
    }

    var0 = 0.0f;
    if (func_020886b0((struct Struct_020886b0*)var6->currentStats_)) {
        var0 = -50.0f;
    }
    var1 = 0.0f;
    if (func_020886f8((struct Struct_020886f8*)var6->currentStats_)) {
        var1 = -50.0f;
    }
    var2 = 0.0f;
    if (func_02088740((struct Struct_02088740*)var6->currentStats_)) {
        var2 = -50.0f;
    }
    var3 = 0.0f;
    if (func_02088788((struct Struct_02088788*)var6->currentStats_)) {
        var3 = -50.0f;
    }
    var4 = 0.0f;
    if (func_020887d0((struct Struct_020887d0*)var6->currentStats_)) {
        var4 = -50.0f;
    }

    unsigned char var7 = arg2 - 1;
    if (arg2 < 1 || arg2 > 21) {
        return 1.0f;
    }
    if (arg2 == 8) {
        var5 = 0.0f;
    } else if (arg2 >= 1 && arg2 <= 7) {
        float var8[7] = {var0, var1, var2, var2, var3, var3, var4};
        var5 = var8[var7];
    }

    float var9 = inline_ov000_02156b38(var6->currentStats_)[var7];
    var9 += var5;
    if (var9 < 0.0f) {
        var9 = 0.0f;
    }
    return var9 / 100.0f;
}
