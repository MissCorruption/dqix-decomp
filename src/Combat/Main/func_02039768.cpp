#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" void* func_02010828(GameState*);
#include "std_library_functions.h"
struct GameObject;

// USA: func_02039768
extern "C" ARM void func_02039768(GameObject* arg0, void* arg1) {
    GameState* var0 = GameState::GetInstance();
    memcpy((char*)func_02010828(var0) + 0x2c8d, arg1, 7);
}
