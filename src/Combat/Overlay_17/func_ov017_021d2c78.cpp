#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02037d88_8;
extern "C" void func_02039d48(unsigned char* arg0);

struct Struct_ov017_021d2c78 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_;
};

// USA: func_ov017_021d2c78
extern "C" ARM void func_ov017_021d2c78(void* arg0, Struct_ov017_021d2c78* arg1) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = var0->GetPartyMemberByIndex(arg1->unknown_4_);
	if (var1 == NULL) return;

	((Object3D*)((struct Struct_02037d88_8*)var1))->SetInheritedAlpha(arg1->unknown_5_);
	if (arg1->unknown_5_ != 0) return;
	if (arg1->unknown_6_ == 0) return;

	func_02039d48((unsigned char*)var1);
}
