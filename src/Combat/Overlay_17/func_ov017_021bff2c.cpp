#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

void SetByteField0x253_020397c0(void* obj);
int GetFieldIfFlag4_020100f8(char* obj);
void SetField0x23cTrue_020a27ac(void* obj);

struct ShortField02033e2c;
void ClearField0xc602033e2c(struct ShortField02033e2c* obj);
struct Foo02033b58;
void SetByteSavingPrevious(struct Foo02033b58* p, unsigned char v);

// USA: func_ov017_021bff2c
extern "C" ARM void func_ov017_021bff2c(void) {
	GameState* battle = GameState::GetInstance();
	GameObject* c = battle->GetUnknownGameObject();
	SetByteField0x253_020397c0(c);
	ClearField0xc602033e2c((struct ShortField02033e2c*)c);
	SetByteSavingPrevious((struct Foo02033b58*)c, 0);

	void* ov = GetGameResources();

	int flagResult = GetFieldIfFlag4_020100f8((char*)battle);
	if (flagResult != 0) {
		SetField0x23cTrue_020a27ac((void*)flagResult);
	}

	if (ov != NULL) {
		ClearFlags04((GameResources*)ov, 0x80);
	}
}
