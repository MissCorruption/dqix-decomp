#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" int func_ov000_02156038(GameObject* arg0);
extern "C" int func_020882f8(unsigned char* arg0);
extern "C" int func_ov000_02156050(GameObject* arg0);
extern "C" int func_ov000_021543f4(GameObject* arg0);

// USA: func_ov000_02155f9c
extern "C" ARM int func_ov000_02155f9c(void* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg1);
    if (var1 == 0) {
        return 1;
    }
    if (func_02010088((struct Struct_02010088*)var1) ||
        func_ov000_02153c0c(var1) ||
        func_ov000_02156038(var1) ||
        func_020882f8((unsigned char*)var1->currentStats_) ||
        func_ov000_02156050(var1)) {
        return 1;
    }
    if (arg2 != 0 && func_ov000_021543f4(var1)) {
        return 1;
    }
    return 0;
}
