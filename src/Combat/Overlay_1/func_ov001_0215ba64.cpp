#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ad2c(int arg0);
extern SafeAllocator* data_ov001_021658b8[8];
extern "C" void func_0200fd38(GameState* arg0, int arg1, GameObject* arg2);
struct Struct_0203d028_18;

// USA: func_ov001_0215ba64
extern "C" ARM int func_ov001_0215ba64(char* arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	(int)BackgroundLoader::GetInstance();

	int var1 = func_ov001_0215ad2c(func_ov017_021d60f4(arg0));
	int var2 = func_ov001_0215ad2c(func_ov017_021d60f4(arg0 + 0x8));

	int var3 = 0;
	if (arg1 >= 3) {
		var3 = func_ov017_021d60f4(arg0 + 0x10);
	}

	SafeAllocator* var4 = data_ov001_021658b8[var3];

	GameObject* var5 = var0->GetGameObjectByIndex(var1);
	if (var5 == NULL) return 0;

	void* var6 = var4->Allocate(0xac);
	if (var6 == NULL) return 0;

	((Object3D*)var6)->Initialize();
	var5->obj3D_.ShallowCloneTo((Object3D*)var6);
	func_0200fd38(var0, var2, (GameObject*)var6);
	((Object3D*)((struct Struct_0203d028_18*)var6))->SetScale(0x10a, 0x10a, 0x10a);
	((Object3D*)var6)->MaybeSetBCFGAnimation(0, 0);
	return 1;
}
