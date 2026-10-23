#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" ARM unsigned short* func_02012fe4(void);
extern "C" ARM int func_020100f8(char* obj);
extern "C" ARM void func_020a27ac(void* obj);
extern "C" ARM int func_0201b5d8(int x);
extern "C" ARM void func_020e1154(void* obj);

// USA: func_ov017_021a9fa0
extern "C" ARM void func_ov017_021a9fa0(void* obj) {
	GameState* battle = GameState::GetInstance();
	((int)GetGameResources());
	unsigned short* w = func_02012fe4();
	func_020a27ac((void*)func_020100f8((char*)battle));
	if (func_0201b5d8(*w))
		func_020e1154((void*)0x3e8);
	((unsigned char*)obj)[1] = 1;
}
