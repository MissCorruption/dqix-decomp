#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern "C" void* func_020de824(void* arg0);
extern "C" void func_0207cbe8(char* arg0);
extern "C" int func_ov004_02167908(void* arg0, int arg1);
extern "C" void func_0207d300(void* arg0, void* arg1, int arg2, int arg3);

// USA: func_ov004_02167a6c
extern "C" ARM int func_ov004_02167a6c(void* arg0, void* arg1) {
	func_02010828(GameState::GetInstance());
	void* var0 = (void*)func_ov004_02167908(arg0, 5);
	if (var0 != NULL) {
		char var1[0x38];
		((SafeAllocator*)var1)->ResetAllocatorPointer();
		func_020de824(var1 + 0x14);
		func_0207cbe8(var1);
		func_0207cbe8(var1);
		*(void**)(var1 + 0x2c) = var0;
		func_0207d300(var1, arg1, 1, 0);
	}
	return 0;
}
