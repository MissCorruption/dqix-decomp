#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

// USA: func_ov000_021536f8
extern "C" ARM GameObject* func_ov000_021536f8(int arg0, int arg1) {
	return func_0200fea4(GameState::GetInstance(), arg1);
}
