#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
struct Struct_020885b4;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);
struct Struct_ov024_021df454_2;
extern "C" int func_ov024_021df6ec(struct Struct_ov024_021df454_2* arg0);
struct Struct_ov024_021dced0_2;
extern "C" int func_ov024_021dd010(struct Struct_ov024_021dced0_2* arg0);

struct Struct_ov024_021f3564 {
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

struct Struct_ov024_021f3564_2 { int unknown_0_; };

// USA: func_ov024_021f3564
extern "C" ARM int func_ov024_021f3564(struct Struct_ov024_021f3564_2* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	int var1 = 0;
	if (func_020885b4((struct Struct_020885b4*)var0->currentStats_)) var1++;
	if (func_02088514((struct Struct_02088514*)var0->currentStats_)) var1++;
	if (func_ov024_021df6ec((struct Struct_ov024_021df454_2*)var0)) var1++;
	if (func_ov024_021dd010((struct Struct_ov024_021dced0_2*)var0)) var1++;
	struct Struct_ov024_021f3564* var2 = (struct Struct_ov024_021f3564*)((char*)var0->currentStats_ + 0x58);
	if (var2->unknown_0_0_ < 0) var1++;
	if (var2->unknown_0_3_ < 0) var1++;
	if (var2->unknown_0_6_ < 0) var1++;
	if (var2->unknown_1_1_ < 0) var1++;
	if (var2->unknown_1_4_ < 0) var1++;
	if (var2->unknown_1_7_ < 0) var1++;
	if (var2->unknown_2_2_ < 0) var1++;
	if (var2->unknown_2_5_ < 0) var1++;
	if (var2->unknown_3_3_ < 0) var1++;
	if (var2->unknown_3_0_ < 0) var1++;
	int var3;
	if (var1 <= 0) {
		var3 = 0;
	} else {
		var3 = 1;
		*arg3 = var3;
		*arg4 = (short)arg1;
	}
	return var3;
}
