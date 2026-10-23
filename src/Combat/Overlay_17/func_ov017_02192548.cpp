#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff58(GameState* battleStruct, int combatantId);

struct CombatantSequenceView {
#if defined(jpn)
    unsigned char unknown000[0x2c6];
#else
    unsigned char unknown000[0x2d2];
#endif
    unsigned char sequence;
};

// USA: func_ov017_02192548
extern "C" ARM int func_ov017_02192548(void) {
    GameState* battle = GameState::GetInstance();
    int maximumSequence = 0;
    for (int partyIndex = 1; partyIndex < 4; ++partyIndex) {
        GameObject* member = func_0200ff58(battle, partyIndex);
        if (member != NULL) {
            unsigned char sequence = ((CombatantSequenceView*)member)->sequence;
            if (maximumSequence < sequence) maximumSequence = sequence;
        }
    }
    return maximumSequence + 1;
}
