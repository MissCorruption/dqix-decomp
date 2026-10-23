#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_020421a0();

// USA: func_ov017_021acce4
extern "C" ARM void func_ov017_021acce4(void*, void*) {
	GameState::GetInstance();
	func_0202ae18();
	GetGameResources();
	func_020421a0();
}
