#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021ccaf8 {
	unsigned short unknown_0_[6];
	unsigned short unknown_c_;
	unsigned char unknown_e_;
};

// USA: func_ov017_021ccaf8
extern "C" ARM void func_ov017_021ccaf8(int arg0, char* arg1, GameState* arg2) {
	struct Struct_ov017_021ccaf8* var0 = (struct Struct_ov017_021ccaf8*)(arg1 + 4);

	GameObject* var1 = func_0200ff1c(arg2, var0->unknown_c_);
	if (!var1) return;

	int var2 = func_02053c6c((unsigned char*)var1);
	if (!var2) return;

	unsigned char var3 = var0->unknown_e_;
	for (unsigned char var4 = 0; var4 < 6; var4++) {
		unsigned short var5 = var0->unknown_0_[var4];
		short* var6 = (short*)((char*)var2 + (var4 + var3) * 2 + 0x100 + 0x6c);
		*var6 = var5;
	}
}
