#include <globaldefs.h>
#include "GameState/GameState.h"


extern int data_020fdcb0[][8];
extern int data_020fdcb8[][8];

// USA: func_02027bd0
extern "C" ARM int func_02027bd0(int id) {
    int a, b;
    GameState* battle;
    GameObject* combatant;
    float ratio;
    int inRange;

    inRange = (id >= 0) && (id <= 3);
    if (!inRange) {
        return 1;
    }

    a = data_020fdcb0[id][0];
    b = data_020fdcb8[id][0];
    if (a < 0) {
        return 1;
    }
    if (b <= 0) {
        return 1;
    }

    battle = GameState::GetInstance();
    combatant = battle->GetPartyMemberByIndex(id);
    if (combatant == NULL) {
        return 1;
    }

    ratio = (float)a / (float)b;
    if (ratio <= 0.0f) {
        return 2;
    }
    if (ratio <= 0.08f) {
        return 3;
    }
    if (ratio <= 0.25f) {
        return 4;
    }
    return 1;
}
