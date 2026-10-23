#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_020882f8(unsigned char* arg0);
struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);
struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);
struct Struct_ov024_021da670_8;
extern "C" int func_ov024_021da9c8(struct Struct_ov024_021da670_8* arg0);
struct Struct_020885b4;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);
struct Struct_ov024_021df454_2;
extern "C" int func_ov024_021df6ec(struct Struct_ov024_021df454_2* arg0);
struct Struct_ov024_021dced0_2;
extern "C" int func_ov024_021dd010(struct Struct_ov024_021dced0_2* arg0);

struct Struct_ov024_021edcc8_2 {
	char unknown_0_[0x58];
	signed int unknown_58_0_ : 3;
	signed int unknown_58_3_ : 3;
	signed int unknown_58_6_ : 3;
	signed int unknown_59_1_ : 3;
	signed int unknown_59_4_ : 3;
	signed int unknown_59_7_ : 3;
	signed int unknown_5a_2_ : 3;
	signed int unknown_5a_5_ : 3;
	signed int unknown_5b_0_ : 3;
	signed int unknown_5b_3_ : 3;
};

struct Struct_ov024_021edcc8 { int unknown_0_; };

// USA: func_ov024_021edcc8
extern "C" ARM int func_ov024_021edcc8(struct Struct_ov024_021edcc8* arg0, int arg1) {
	GameObject* var0 = GetCombatantByID(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	if (func_020882f8((unsigned char*)var0->currentStats_)) return 1;
	if (func_ov024_021de25c((struct Struct_ov024_021de124*)var0)) return 1;
	if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var0)) return 1;
	if (func_ov024_021da9c8((struct Struct_ov024_021da670_8*)var0)) return 1;
	if (func_020885b4((struct Struct_020885b4*)var0->currentStats_)) return 1;
	if (func_02088514((struct Struct_02088514*)var0->currentStats_)) return 1;
	if (func_ov024_021df6ec((struct Struct_ov024_021df454_2*)var0)) return 1;
	if (func_ov024_021dd010((struct Struct_ov024_021dced0_2*)var0)) return 1;
	struct Struct_ov024_021edcc8_2* var1 = (struct Struct_ov024_021edcc8_2*)var0->currentStats_;
	if (var1->unknown_58_0_ < 0) return 1;
	if (var1->unknown_58_3_ < 0) return 1;
	if (var1->unknown_58_6_ < 0) return 1;
	if (var1->unknown_59_1_ < 0) return 1;
	if (var1->unknown_59_4_ < 0) return 1;
	if (var1->unknown_59_7_ < 0) return 1;
	if (var1->unknown_5a_2_ < 0) return 1;
	if (var1->unknown_5a_5_ < 0) return 1;
	if (var1->unknown_5b_3_ < 0) return 1;
	return var1->unknown_5b_0_ < 0;
}
