#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
struct Struct_ov024_021f1330;
extern "C" int func_ov024_021f1440(struct Struct_ov024_021f1330* arg0);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);

struct Struct_ov024_021f1578 { int unknown_0_; };
struct Struct_ov024_021fef5c { short unknown_0_[8]; };
extern struct Struct_ov024_021fef5c data_ov024_021fef5c;

struct Struct_ov024_021f1578_2 {
    signed int unknown_0_0_ : 3;
    signed int unknown_0_3_ : 3;
    signed int unknown_0_6_ : 3;
    signed int unknown_1_1_ : 3;
    signed int unknown_1_4_ : 3;
    signed int unknown_1_7_ : 3;
    signed int unknown_2_2_ : 3;
    signed int unknown_2_5_ : 3;
};

// USA: func_ov024_021f1578
extern "C" ARM int func_ov024_021f1578(struct Struct_ov024_021f1578* arg0, short arg1, int arg2, int* arg3, void* arg4) {
	GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	if (!func_ov024_021f1440((struct Struct_ov024_021f1330*)var0)) return 0;

	struct Struct_ov024_021fef5c var1 = data_ov024_021fef5c;
	int var2 = func_ov000_0215eb1c(arg0->unknown_0_, var1.unknown_0_, 8, 1);
	if (var2 <= 0) return 0;

	int var3 = 0;
	for (int var4 = 0; var4 < var2; var4++) {
		GameObject* var5 = GetCombatantByID(arg0->unknown_0_, var1.unknown_0_[var4]);
		if (!var5) continue;
		struct Struct_ov024_021f1578_2* var6 = (struct Struct_ov024_021f1578_2*)((char*)var5->currentStats_ + 0x58);
		if (var6->unknown_2_5_ < 2) {
			var3 = 1;
			break;
		}
	}
	if (!var3) return 0;

	*arg3 = var2;
	memcpy(arg4, var1.unknown_0_, 0x10);
	return 1;
}
