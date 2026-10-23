#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_020882f8(unsigned char* arg0);
extern "C" float func_02074968(int arg0);
extern "C" int func_ov000_021543f4(GameObject* arg0);
extern "C" float func_02074978(int arg0);
extern "C" void func_02088390(void* arg0);
extern "C" void func_020883fc(void* arg0);

struct Struct_ov000_02157288 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
};

struct Struct_ov000_02157288_2 {
    char unknown_0_[0x3b];
    unsigned char unknown_3b_0_ : 1;
};

static inline bool inline_ov000_02156cc4_2(int arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// USA: func_ov000_02157288
extern "C" ARM int func_ov000_02157288(struct Random* arg0, int arg1, struct Struct_ov000_02157288* arg2) {
    float var0;
    signed char var1;
    int var2;
    int var3;
    GameObject* var4;

    if (!(arg2->unknown_10_ & 0x800)) {
        return 0;
    }

    var0 = 0;
    var4 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var4 == NULL) {
        return 0;
    }

    var1 = inline_ov000_02156cc4_2(arg1);
    if (func_020882f8((unsigned char*)var4->currentStats_)) {
        var0 = func_02074968(var1);
    } else if (func_ov000_021543f4(var4)) {
        var0 = func_02074978(var1);
    }

    var0 *= 100.0f;
    var2 = NextRandomMax(arg0, 100);
    if (var2 < (int)var0) {
        var3 = 0x40;
        if (func_ov000_021543f4(var4)) {
            var3 = 0x173;
        }
        func_02088390(var4->currentStats_);
        func_020883fc(var4->currentStats_);
        ((struct Struct_ov000_02157288_2*)var4->currentStats_)->unknown_3b_0_ = 1;
        return var3;
    }
    return 0;
}
