#include <globaldefs.h>
#include "GameState/GameState.h"

struct Vector3i;

// USA: func_ov017_021bd440
extern "C" ARM void func_ov017_021bd440(void* arg0, int arg1) {
	unsigned char* var0 = (unsigned char*)arg0;
	unsigned char var1 = 1 << arg1;
	int var2 = 0;
#if defined(jpn)
	if (var0[0x170] & var1) var2 = 1;
	var0[0x170] &= ~var1;
	var0[0x171] |= var1;
#else
	if (var0[0x174] & var1) var2 = 1;
	var0[0x174] &= ~var1;
	var0[0x175] |= var1;
#endif
	if (!var2) return;
	GameObject* var3 = GameState::GetInstance()->GetPartyMemberByIndex(arg1);
	if (!var3) return;
#if defined(jpn)
	*(Vector3i*)(&var3->obj3D_.position_.x) = *(Vector3i const*)((int*)(var0 + 0x184 + arg1 * 0xc));
	int var4 = *(int*)(var0 + 0x1b4 + arg1 * 4);
#else
	*(Vector3i*)(&var3->obj3D_.position_.x) = *(Vector3i const*)((int*)(var0 + 0x188 + arg1 * 0xc));
	int var4 = *(int*)(var0 + 0x1b8 + arg1 * 4);
#endif
	var3->obj3D_.rotation_.x = 0;
	var3->obj3D_.rotation_.y = var4;
	var3->obj3D_.rotation_.z = 0;
}
