#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov024_021db358
extern "C" ARM float func_ov024_021db358(GameObject* arg0) {
	unsigned short var0 = arg0->currentStats_->primaryStats.currHP;
	if ((float)var0 == 0.0f) return 0.0f;
	unsigned short var1 = arg0->currentStats_->primaryStats.maxHP;
	return (float)var0 / (float)var1;
}
