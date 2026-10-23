#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" int func_020100a8(GameState*);

struct Combatant020A36A8 {
    char pad[0x2a];
    signed char field2a;
};

// USA: func_020a36a8
extern "C" ARM int func_020a36a8(struct Combatant020A36A8* obj) {
    return obj->field2a == func_020100a8((GameState*)(GameState::GetInstance()));
}
