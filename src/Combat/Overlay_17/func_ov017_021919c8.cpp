#include <globaldefs.h>
#include "GameState/GameState.h"

extern int data_ov017_021d6298[14];

// USA: func_ov017_021919c8
extern "C" ARM void func_ov017_021919c8(int arg0, int arg1, short arg2) {
	int var0[14];
	struct Struct_ov017_021919c8 { int unknown_0_[14]; };
	*(struct Struct_ov017_021919c8*)var0 = *(struct Struct_ov017_021919c8*)data_ov017_021d6298;
	int var1 = arg1 * 12;
	var0[0] = arg1;
	var0[1] = var1 + 0x13;
	var0[2] = var1 + 0x14;
	var0[3] = var1 + 0x15;
	var0[4] = var1 + 0x16;
	var0[5] = var1 + 0x17;
	var0[6] = var1 + 0x18;
	var0[7] = var1 + 0x19;
	var0[8] = var1 + 0x1a;
	var0[9] = var1 + 0x1b;
	var0[10] = var1 + 0x1c;
	var0[11] = var1 + 0x1d;
	GameState* var2 = GameState::GetInstance();
	for (int var3 = 0; var0[var3] > -1; var3++) {
		GameObject* var4 = var2->GetGameObjectByIndex(var0[var3]);
		if (var4) {
			((Object3D*)((unsigned char*)var4))->SetAlphaScaleFactor(arg2);
		}
	}
}
