#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_ov000_02155f9c(struct Random* arg0, int arg1, int arg2);
extern "C" float func_ov000_02156270(struct Random* arg0, int arg1);
extern "C" int func_ov000_02156404(GameObject* arg0);

struct Struct_ov000_02156f98 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
};

// USA: func_ov000_02156f98
extern "C" ARM int func_ov000_02156f98(struct Random* arg0, int arg1, struct Struct_ov000_02156f98* arg2) {
    GameState::GetInstance();
    if (!(arg2->unknown_10_ & 0x20)) {
        return 0;
    }
    if (func_ov000_02155f9c(arg0, arg1, 0) != 0) {
        return 0;
    }
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg1);
    if (var1 == 0) {
        return 0;
    }
    if (func_ov000_02156404(var1)) {
        short var2 = *(short*)((char*)arg0 + 0x8e00 + 0x6e);
        return var2 < 0x32;
    }
    float var3 = func_ov000_02156270(arg0, arg1);
    int var4 = NextRandomMax(arg0, 100);
    return var4 < (int)var3;
}
