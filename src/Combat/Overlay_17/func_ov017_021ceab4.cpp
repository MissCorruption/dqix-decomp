#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202b2f0;

extern "C" void func_02039dd8(unsigned char* arg0);
extern "C" void func_0202c660(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_ov017_021ceab4
extern "C" ARM void func_ov017_021ceab4(int arg0, int arg1, int arg2, int arg3, struct Struct_0202b2f0* arg4) {
	GameObject* var0 = GameState::GetInstance()->GetPartyMemberByIndex(arg0);
	if (var0 != NULL) {
		func_02039dd8((unsigned char*)var0);
	}
	func_0202c660(arg4, arg0);
}
