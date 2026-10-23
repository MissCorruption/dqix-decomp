#include <globaldefs.h>
#include "GameState/GameState.h"

struct Vector3i;

// USA: func_ov017_021bd3d4
extern "C" ARM void func_ov017_021bd3d4(void* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_021bd3d4_372=0x170, Enum_ov017_021bd3d4_373=0x171, Enum_ov017_021bd3d4_392=0x184, Enum_ov017_021bd3d4_440=0x1b4};
#else
 enum {Enum_ov017_021bd3d4_372=0x174, Enum_ov017_021bd3d4_373=0x175, Enum_ov017_021bd3d4_392=0x188, Enum_ov017_021bd3d4_440=0x1b8};
#endif
	unsigned char* var0 = (unsigned char*)arg0;
	unsigned char var1 = 1 << arg1;
	var0[Enum_ov017_021bd3d4_372] |= var1;
	var0[Enum_ov017_021bd3d4_373] &= ~var1;
	GameObject* var2 = GameState::GetInstance()->GetPartyMemberByIndex(arg1);
	if (var2) {
		*(Vector3i*)((int*)(var0 + Enum_ov017_021bd3d4_392 + arg1 * 0xc)) = *(Vector3i const*)(&var2->obj3D_.position_.x);
		*(int*)(var0 + Enum_ov017_021bd3d4_440 + arg1 * 4) = var2->obj3D_.rotation_.y;
	}
}
