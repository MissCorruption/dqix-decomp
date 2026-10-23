#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov000_0215ec80(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_020882f8(unsigned char* arg0);

struct Struct_ov024_021fee1c { unsigned short unknown_0_[8]; };
extern struct Struct_ov024_021fee1c data_ov024_021fee1c;

struct Struct_ov024_021f5db0 {
	int unknown_0_;
	struct Struct_ov024_021fee1c unknown_4_;
};

// USA: func_ov024_021f5db0
extern "C" ARM int func_ov024_021f5db0(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	int var1 = *((unsigned char*)var0 + 0x17c);
	if (var1 >= 3) return 0;

	struct Struct_ov024_021f5db0 var2;
	var2.unknown_4_ = data_ov024_021fee1c;
	var2.unknown_0_ = 1;

	int var3 = func_ov000_0215ec80(*arg0, var2.unknown_4_.unknown_0_, 8, var1 & 0xff);
	int var4 = 0;
	for (int var5 = 0; var5 < var3; var5++) {
		GameObject* var6 = GetCombatantByID(*arg0, *(short*)&var2.unknown_4_.unknown_0_[var5]);
		if (var6 && !func_020882f8((unsigned char*)var6->currentStats_)) {
			var4++;
		}
	}
	if (var4 != 3) return 0;
	*arg3 = 1;
	*arg4 = (short)arg1;
	return 1;
}
