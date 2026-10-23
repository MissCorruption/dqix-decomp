#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02033710;
struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);
struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };

// USA: func_ov017_021bf6fc
extern "C" ARM int func_ov017_021bf6fc(unsigned char* arg0) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = var0->GetUnknownGameObject();
	unsigned char* var2 = *(unsigned char**)(arg0 + 0xc);
	struct Struct_02028460_3 var3 = *(struct Struct_02028460_3*)((char*)var1 + 0x44);
	struct Struct_02028460_3 var4;
	var4.unknown_0_ = *(int*)(var2 + 0x8);
	var4.unknown_4_ = var3.unknown_4_;
	var4.unknown_8_ = *(int*)(var2 + 0x10);
	int var5 = Vector3fix_Distance((const Vector3fix*)&var3, (const Vector3fix*)&var4);
	*(short*)(arg0 + 0x14) -= 1;
	if (var5 < 0x199 || (*(short*)(arg0 + 0x14) < 0 && !((Object3D*)((struct Struct_02033710*)var1))->IsTransitioningAnimations())) {
		func_02033b68((struct Struct_02033b68*)var1, 0);
		*(short*)(arg0 + 0x14) = -1;
		return 2;
	}
	return 1;
}
