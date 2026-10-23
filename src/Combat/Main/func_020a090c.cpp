#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: func_020a090c
extern "C" ARM int func_020a090c(BattleRecordSnapshot* record) {
    unsigned int v = record->unknown10_23;
    unsigned int pct = v * 100 / 448;
    if (pct != 0) {
        return pct;
    }
    if (v != 0) {
        return 1;
    }
    return pct;
}
