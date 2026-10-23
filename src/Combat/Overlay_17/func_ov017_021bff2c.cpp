#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_020397c0(void* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);

struct ShortField02033e2c;
extern "C" void func_02033e2c(struct ShortField02033e2c* obj);
struct Foo02033b58;
extern "C" void func_02033b58(struct Foo02033b58* p, unsigned char v);

// USA: func_ov017_021bff2c
extern "C" ARM void func_ov017_021bff2c(void) {
	GameState* battle = GameState::GetInstance();
	GameObject* c = battle->GetUnknownGameObject();
	func_020397c0(c);
	func_02033e2c((struct ShortField02033e2c*)c);
	func_02033b58((struct Foo02033b58*)c, 0);

	void* ov = GetGameResources();

	int flagResult = func_020100f8((char*)battle);
	if (flagResult != 0) {
		func_020a27ac((void*)flagResult);
	}

	if (ov != NULL) {
		ClearFlags04((GameResources*)ov, 0x80);
	}
}
