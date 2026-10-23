#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov004_0215f74c
extern "C" ARM int func_ov004_0215f74c(int arg0, int arg1) {
	return func_0200ff1c(GameState::GetInstance(), arg1) != NULL;
}
