#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
int GetGlobalField0x1c020421a0();

// USA: func_ov017_021acce4
ARM void RunBattleTeardownSequence_021acce4(void*, void*) {
	GameState::GetInstance();
	func_0202ae18();
	GetGameResources();
	GetGlobalField0x1c020421a0();
}
