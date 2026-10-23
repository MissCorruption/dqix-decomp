#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: func_020a08d8
extern "C" ARM int func_020a08d8(BattleRecordSnapshot* record) {
    unsigned int v = record->unknown14_18;
    unsigned int pct = v * 100 / 944;
    if (pct != 0) {
        return pct;
    }
    if (v != 0) {
        return 1;
    }
    return pct;
}
