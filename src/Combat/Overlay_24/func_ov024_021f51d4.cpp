#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

struct Struct_ov024_021f51d4 {
	signed int unknown_0_0_ : 3;
	signed int unknown_0_3_ : 3;
	signed int unknown_0_6_ : 3;
	signed int unknown_1_1_ : 3;
	signed int unknown_1_4_ : 3;
	signed int unknown_1_7_ : 3;
	signed int unknown_2_2_ : 3;
	signed int unknown_2_5_ : 3;
	signed int unknown_3_0_ : 3;
	signed int unknown_3_3_ : 3;
};

// USA: func_ov024_021f51d4
extern "C" ARM int func_ov024_021f51d4(int* arg0, short arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	struct Struct_ov024_021f51d4* var1 = (struct Struct_ov024_021f51d4*)((char*)var0->currentStats_ + 0x58);
	if (var1->unknown_3_3_ >= 2) {
		return 0;
	} else {
		*arg3 = 1;
		*arg4 = arg1;
		return 1;
	}
}
