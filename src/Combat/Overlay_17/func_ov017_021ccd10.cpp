#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021ccd10 {
	unsigned char unknown_0_0_ : 3;
	unsigned char unknown_0_3_ : 1;
	unsigned char unknown_0_4_ : 4;
	unsigned char unknown_1_[15];
};

// USA: func_ov017_021ccd10
extern "C" ARM void func_ov017_021ccd10(int arg0, char* arg1, GameState* arg2) {
	struct Struct_ov017_021ccd10* var0 = (struct Struct_ov017_021ccd10*)(arg1 + 4);
	GameObject* var1 = func_0200ff1c(arg2, var0->unknown_0_0_);
	if (!var1) return;

	unsigned char* var2 = (unsigned char*)func_02053c6c((unsigned char*)var1);
	if (!var2) return;

	if (!var0->unknown_0_3_) {
		for (int var3 = 0; var3 < 15; var3++) {
			unsigned char* var4 = var2 + var3;
			var4[0x464] = var0->unknown_1_[var3];
		}
	} else {
		if (var0->unknown_0_3_ == 1) {
			for (int var5 = 0; var5 < 12; var5++) {
				int var6 = var5 + 0xf;
				unsigned char* var7 = var2 + var6;
				var7[0x464] = var0->unknown_1_[var5];
			}
		}
	}
}
