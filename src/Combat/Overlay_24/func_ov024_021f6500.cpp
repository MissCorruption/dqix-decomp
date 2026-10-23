#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

extern unsigned short data_ov024_021fedbc;

struct Struct_ov024_021f6500 { int unknown_0_; };

// USA: func_ov024_021f6500
extern "C" ARM int func_ov024_021f6500(struct Struct_ov024_021f6500* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	short var0[8];
	unsigned short* var1 = (unsigned short*)var0;
	unsigned short* var2 = &data_ov024_021fedbc;
	int var3 = 8;
	do {
		unsigned short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov000_0215eb1c(arg0->unknown_0_, var0, 8, 1);
	if (var5 <= 0) return 0;

	*arg3 = 0;
	for (int var6 = 0; var6 < var5; var6++) {
		GameObject* var7 = func_ov000_021536f8(arg0->unknown_0_, var0[var6]);
		if (!var7) continue;
		if (var7->obj3D_.unknown_2_ != 0x13a) continue;
		if (*(short*)((char*)var7->currentStats_ + 0x2c) > 0) continue;
		arg4[*arg3] = var0[var6];
		*arg3 = *arg3 + 1;
	}

	if (*arg3 <= 0) return 0;
	func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
	return 1;
}
