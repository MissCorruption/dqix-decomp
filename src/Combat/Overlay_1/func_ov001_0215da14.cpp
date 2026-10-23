#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" void func_ov017_021d6148(void* node, float v);

struct Triple { int x[3]; };

// USA: func_ov001_0215da14
extern "C" ARM int func_ov001_0215da14(char* obj) {
    int result;
    GameState* battle = GameState::GetInstance();
    void* field = func_020100bc(battle);
    if (field == NULL) {
        result = 0;
    } else {
        struct Triple local = *(struct Triple*)((char*)field + 4);
        func_ov017_021d6148(obj, (float)local.x[0] / 4096.0f);
        func_ov017_021d6148(obj + 8, (float)local.x[1] / 4096.0f);
        func_ov017_021d6148(obj + 0x10, (float)local.x[2] / 4096.0f);
        result = 1;
    }
    return result;
}
