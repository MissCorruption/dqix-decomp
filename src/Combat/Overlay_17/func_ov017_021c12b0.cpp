#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov017_021d2738(unsigned char arg0, unsigned char arg1);

// USA: func_ov017_021c12b0
extern "C" ARM void func_ov017_021c12b0(unsigned char arg0) {
	void* var0 = GetGameResources();
	int* var1 = *(int**)((char*)var0 + 0x3000
#if defined(jpn)
        + 0x50c
#else
        + 0x71c
#endif
);
	short var2 = *(short*)((char*)var1 + 0x22);
	GameState* var3 = GameState::GetInstance();
	GameObject* var4 = var3->GetPartyMemberByIndex(var2);
	if (var4 == NULL) {
		var4 = var3->GetProtagonist();
	}
	short var5 = var4->obj3D_.unknown_4_;
	func_ov017_021d2738((unsigned char)(var5 & 0xff), arg0);
}
