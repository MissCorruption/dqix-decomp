#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
struct Struct_0205faf4_11;
extern "C" int func_02061bd8(struct Struct_0205faf4_11* arg0);

extern "C" void func_ov017_021919c8(int arg0, int arg1, short arg2);
extern "C" void func_ov017_0218fd34(int arg0, int arg1, unsigned short arg2);
extern "C" void func_ov017_0218f968(int arg0, int arg1, unsigned short arg2);

// USA: func_ov017_02191e5c
extern "C" ARM void func_ov017_02191e5c(int arg0, int arg1, short arg2, unsigned char arg3, unsigned short arg4) {
	GameState* var0 = GameState::GetInstance();
	int var1 = (arg1 >= 0 && arg1 <= 3);
	if (var1) {
		if (!var0->GetPartyMemberByIndex(arg1)) return;
	}
	GameObject* var2 = var0->GetCombatantByIndex(arg1);
	if (!var2) return;
	func_ov017_021919c8(arg0, arg1, arg2);
	var2->obj3D_.unknown_9c_ = arg4;
	((Object3D*)((unsigned char*)var2))->SetField9e(arg3);
	int var3 = (arg1 >= 0 && arg1 <= 3);
	if (var3) {
		GameObject* var4 = func_0200ff1c(var0, arg1);
		if (!var4) return;
		if (!func_02061bd8((struct Struct_0205faf4_11*)var4)) {
			func_ov017_0218fd34(arg0, arg1, arg4);
			return;
		}
	}
	func_ov017_0218f968(arg0, arg1, arg4);
}
