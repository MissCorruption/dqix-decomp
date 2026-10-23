#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_ov000_02153e78(int arg0, short* arg1, int arg2, int arg3, int arg4);
extern "C" int func_02010088(struct Struct_02010088* arg0);

struct Struct_ov024_021eecc8 {
	unsigned char unknown_0_;
	unsigned char unknown_1_0_ : 4;
	unsigned char unknown_1_4_ : 2;
	unsigned char unknown_1_6_ : 2;
	char unknown_2_[4];
	unsigned char unknown_6_[8];
	unsigned char unknown_e_0_ : 4;
	unsigned char unknown_e_4_ : 4;
	char unknown_f_[0x18 - 0xf];
};
struct Struct_ov024_021eecc8_2 { char unknown_0_[0x18]; unsigned int unknown_18_; };
struct Struct_ov024_021eecc8_3 { int unknown_0_; };
struct Struct_ov024_021fecec { short unknown_0_[8]; };
extern struct Struct_ov024_021fecec data_ov024_021fecec;

// USA: func_ov024_021eecc8
extern "C" ARM int func_ov024_021eecc8(struct Struct_ov024_021eecc8_3* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	struct Struct_ov024_021eecc8* var0 = (struct Struct_ov024_021eecc8*)((char*)arg0->unknown_0_ + 0x81b0);
	if (!var0) return 0;
	int var1 = 0;
	int var2 = 0;
	for (int var3 = 0; var3 < var0->unknown_1_4_; var3++) {
		var1 += var0[var3].unknown_e_4_;
		struct Struct_ov024_021fecec var4 = data_ov024_021fecec;
		var2 += func_ov000_02153e78(arg0->unknown_0_, var4.unknown_0_, 8, var3, 0);
	}
	if (var1 >= 5) return 0;
	if (var2 > 5) var2 = 5;
	if (var2 < var1 * 2) return 0;
	*arg3 = 0;
	int var5 = var2 - var1;
	for (int var6 = 0; var6 < var0->unknown_1_4_; var6++) {
		struct Struct_ov024_021eecc8* var7 = &var0[var6];
		for (int var8 = 0; var8 < var7->unknown_e_0_; var8++) {
			int var9 = var7->unknown_6_[var8] + 0xc0;
			GameObject* var10 = GetCombatantByID(arg0->unknown_0_, (short)var9);
			if (!var10) continue;
			if (((struct Struct_ov024_021eecc8_2*)var10->currentStats_)->unknown_18_ & 0x2000) continue;
			if (func_02010088((struct Struct_02010088*)var10)) {
				if (var5 > 0) {
					var5--;
					arg4[(*arg3)++] = var9;
				}
			} else {
				arg4[(*arg3)++] = var9;
			}
			if (*arg3 >= 5) break;
		}
	}
	return 1;
}
