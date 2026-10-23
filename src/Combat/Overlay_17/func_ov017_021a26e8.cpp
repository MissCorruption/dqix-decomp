#include <globaldefs.h>
#include "GameState/GameState.h"
struct GameResources;

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void* func_02033fa0(void* arg0);
struct Struct_0204bd7c;
extern "C" unsigned short func_0204bd7c(struct Struct_0204bd7c* arg0);
extern "C" void* func_02011584(void* arg0);
struct Struct_02099a68;
extern "C" int func_02099a68(struct Struct_02099a68* arg0, unsigned short arg1);

// USA: func_ov017_021a26e8
extern "C" ARM int func_ov017_021a26e8(GameResources* arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = func_0200ff1c(var0, arg1);
	if (var1 == NULL) {
		return 0;
	}
	void* var2 = func_02033fa0(var1);
	if (var2 == NULL) {
		return 0;
	}
	unsigned short var3 = func_0204bd7c((struct Struct_0204bd7c*)var2);
	void* var4 = func_02011584(var0);
	return func_02099a68((struct Struct_02099a68*)var4, var3);
}
