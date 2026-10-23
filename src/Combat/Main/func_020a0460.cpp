#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

// USA: func_020a0460
extern "C" ARM void func_020a0460(BattleRecordSnapshot* record, unsigned int amount) {
    unsigned int v = record->unknown14_0 + amount;
    if (v > 500) {
        v = 500;
    }
    record->unknown14_0 = v;
}
