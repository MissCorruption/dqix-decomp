#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);

// USA: func_ov000_02153cc0
extern "C" ARM void func_ov000_02153cc0(int arg0, int arg1, int* arg2) {
    short var0 = (short)(*(int*)arg2);
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetCombatantByIndex(var0);
    if (var2 != NULL && func_02010088((struct Struct_02010088*)var2) == 0 && func_ov000_02153c0c(var2) == 0) return;
    *arg2 = arg1;
}
