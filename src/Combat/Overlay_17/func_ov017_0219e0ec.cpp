#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_0219e0ec { unsigned short unknown_0_0_ : 2; unsigned short unknown_0_2_ : 1; unsigned short unknown_0_3_ : 13; };
struct Struct_02028bac { unsigned char unknown_0_[0x318]; };
extern "C" struct Struct_02028bac* func_02028bac(struct Struct_02028bac* arg0, int arg1);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" void func_02076a8c(void* arg0);

// USA: func_ov017_0219e0ec
extern "C" ARM void func_ov017_0219e0ec(void*) {
	int var0;
	GameState* var1;
	struct Struct_02028bac* var2;
	var1 = GameState::GetInstance();
	var2 = (struct Struct_02028bac*)func_02027ca4();
	for (int var3 = 0; var3 < 4; var3++) {
		struct Struct_02028bac* var4 = func_02028bac(var2, var3);
		if (!var4) continue;
		struct Struct_ov017_0219e0ec* var5 = (struct Struct_ov017_0219e0ec*)((unsigned char*)var4 + 2);
		if (var5->unknown_0_2_) continue;
		var0 = var3 * 0xc + 0x70;
		for (int var6 = 0; var6 < 0xc; var6++) {
			GameObject* var7 = var1->GetMaybeFieldMonsterByIndex(var6 + var0);
			if (var7) {
				func_02076a8c(var7);
				((Object3D*)((unsigned char*)var7))->MakeHidden();
			}
		}
	}
}
