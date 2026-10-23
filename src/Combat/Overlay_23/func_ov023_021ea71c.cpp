#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov023_021e8f28(int);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ea71c
extern "C" ARM int func_ov023_021ea71c(void *arg0) {
	GameState::GetInstance();
	void *var0 = (void*)func_ov023_021e8f28(func_ov017_021d60f4(arg0));
	if (!var0) return 0;
	void *var1 = *(void**)((char*)var0 + 0x130);
	int var2 = 0;
	if (*(int*)var1 & 0x2) var2 = 1;
	if (var2) {
		func_ov017_021d6134((char*)arg0 + 8, 1);
	} else {
		func_ov017_021d6134((char*)arg0 + 8, 0);
	}
	return 1;
}
