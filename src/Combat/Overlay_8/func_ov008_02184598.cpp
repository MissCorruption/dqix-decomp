#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

// USA: func_ov008_02184598
extern "C" ARM void func_ov008_02184598(BattleRecordPlayClock* clock) {
    clock->hours = 0;
    clock->minutes = 0;
    clock->seconds = 0;
}
