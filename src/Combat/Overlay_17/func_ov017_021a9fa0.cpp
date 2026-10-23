#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" ARM unsigned short* func_02012fe4(void);
extern "C" ARM int func_020100f8(char* arg0);
extern "C" ARM void func_020a27ac(void* arg0);
extern "C" ARM int func_0201b5d8(int arg0);
extern "C" ARM void func_020e1154(void* arg0);

// USA: func_ov017_021a9fa0
extern "C" ARM void func_ov017_021a9fa0(void* arg0) {
	GameState* var0 = GameState::GetInstance();
	((int)GetGameResources());
	unsigned short* var1 = func_02012fe4();
	func_020a27ac((void*)func_020100f8((char*)var0));
	if (func_0201b5d8(*var1))
		func_020e1154((void*)0x3e8);
	((unsigned char*)arg0)[1] = 1;
}
