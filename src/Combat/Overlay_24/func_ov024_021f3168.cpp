#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov000_0215e9fc(int arg0, unsigned short* arg1, int arg2, int arg3);
struct Struct_ov024_021ed9dc;
extern "C" int func_ov024_021ed9dc(struct Struct_ov024_021ed9dc* arg0, int arg1);

extern unsigned short data_ov024_021fed8c;

struct Struct_ov024_021f3168 {
	signed int unknown_0_0_ : 3;
	signed int unknown_0_3_ : 3;
	signed int unknown_0_6_ : 3;
	signed int unknown_1_1_ : 3;
	signed int unknown_1_4_ : 3;
	signed int unknown_1_7_ : 3;
	signed int unknown_2_2_ : 3;
	signed int unknown_2_5_ : 3;
};

// USA: func_ov024_021f3168
extern "C" ARM int func_ov024_021f3168(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (((struct Struct_ov024_021f3168*)((char*)var0->currentStats_ + 0x58))->unknown_2_2_ >= 2) return 0;

	unsigned short var1[8];
	unsigned short* var2 = var1;
	unsigned short* var3 = &data_ov024_021fed8c;
	int var4 = 8;
	do {
		unsigned short* var5 = var2++;
		*var5 = *var3++;
	} while (--var4);

	int var6 = func_ov000_0215e9fc(*arg0, var1, 4, 1);
	if (var6 <= 0) return 0;

	int var7 = 0;
	for (int var8 = 0; var8 < var6; var8++) {
		if (func_ov024_021ed9dc((struct Struct_ov024_021ed9dc*)arg0, *(short*)&var1[var8])) {
			var7 = 1;
			break;
		}
	}
	if (!var7) return 0;
	*arg3 = 1;
	*arg4 = (short)arg1;
	return 1;
}
