#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_02164080
extern "C" ARM int func_ov001_02164080(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    GameState* var1 = GameState::GetInstance();
    if (var0 != 0)
        var1->SetDayTimerRunning(0);
    else
        var1->SetDayTimerRunning(1);
    return 1;
}
