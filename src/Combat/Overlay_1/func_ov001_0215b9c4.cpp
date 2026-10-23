#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ad2c(int arg0);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void func_ov001_0215acb4(void* arg0);

struct Struct_ov001_02165880_9 { int unknown_0_; unsigned char* unknown_4_; };
extern Struct_ov001_02165880_9 data_ov001_02165880;

struct Struct_ov001_0215b9c4 { int unknown_0_; int unknown_4_; char unknown_8_[8]; };

// USA: func_ov001_0215b9c4
extern "C" ARM int func_ov001_0215b9c4(void* arg0) {
	GameState* var0 = GameState::GetInstance();
	if (var0 == 0) return 0;
	int var1 = func_ov001_0215ad2c(func_ov017_021d60f4(arg0));
	GameObject* var2 = var0->GetGameObjectByIndex(var1);
	if (var2 == 0) return 0;
	((Object3D*)((unsigned char*)var2))->Destroy();
	func_0200fd48(var0, var1);
	if (data_ov001_02165880.unknown_4_ != 0) {
		int var3;
		for (var3 = 0; var3 < 0x20; var3++) {
			unsigned char* var4 = data_ov001_02165880.unknown_4_;
			int var5 = *(int*)(var4 + var3 * 0x10);
			if (var5 == 1) {
				struct Struct_ov001_0215b9c4* var6 = (struct Struct_ov001_0215b9c4*)var4 + var3;
				if (var1 == var6->unknown_4_) {
					func_ov001_0215acb4((void*)var6);
				}
			}
		}
	}
	return 1;
}
