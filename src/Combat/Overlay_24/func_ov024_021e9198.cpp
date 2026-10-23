#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

struct Struct_ov024_021df6ec { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021df454_2 { char unknown_0_[0x138]; struct Struct_ov024_021df6ec* unknown_138_; };
extern "C" int func_ov024_021df6ec(struct Struct_ov024_021df454_2* arg0);

struct Struct_ov024_021e9198 { char unknown_0_[0x10]; void* unknown_10_; };
struct Struct_ov024_021e9198_2 { unsigned short unknown_0_0_ : 6; unsigned short unknown_0_6_ : 3; unsigned short unknown_1_1_ : 7; };

// USA: func_ov024_021e9198
extern "C" ARM int func_ov024_021e9198(struct Struct_ov024_021e9198* arg0, int arg1, int arg2, int arg3) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
	if (!var0) return 0;
	if (arg3 != 0) {
		if (!func_ov024_021df6ec((struct Struct_ov024_021df454_2*)var0)) goto ret0;
		struct Struct_ov024_021e9198_2* var1 = (struct Struct_ov024_021e9198_2*)((char*)var0->currentStats_ + 0x22);
		if (var1->unknown_0_6_ != arg2) goto ret0;
		switch (arg2) {
			case 1: return 0x26;
			case 2: return 0x140;
			case 3: return 0x126;
			case 4: return 0x13d;
			default: goto ret0;
		}
	}
	if (!func_ov024_021df6ec((struct Struct_ov024_021df454_2*)var0)) goto ret0;
	{
		struct Struct_ov024_021e9198_2* var2 = (struct Struct_ov024_021e9198_2*)((char*)var0->currentStats_ + 0x22);
		if (var2->unknown_0_6_ != arg2) goto ret0;
		switch (arg2) {
			case 1: return 0x27;
			case 2: return 0x141;
			case 3: return 0x137;
			case 4: return 0x13f;
			default: goto ret0;
		}
	}
ret0:
	return 0;
}
