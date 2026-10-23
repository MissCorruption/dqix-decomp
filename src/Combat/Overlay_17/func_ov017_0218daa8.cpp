#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" int func_ov017_0218db14(void* arg0, int* arg1, int arg2, int arg3, unsigned char arg4);

// USA: func_ov017_0218daa8
extern "C" ARM int func_ov017_0218daa8(void* arg0, struct Struct_ov009_0218aa28* arg1, int arg2, int arg3, unsigned char arg4) {
	struct Struct_ov009_0218aa28 var0;
	GameObject* var1 = GameState::GetInstance()->GetUnknownGameObject();
	if (!arg1) return 0;
	if (!var1) return 0;
	Vector3fix_Subtract((const Vector3fix*)((struct Struct_ov009_0218aa28*)((char*)var1 + 0x44)), (const Vector3fix*)arg1, (Vector3fix*)&var0);
	return func_ov017_0218db14(arg0, (int*)&var0, arg2, arg3, arg4);
}
