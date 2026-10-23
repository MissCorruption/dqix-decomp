#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_020397c0(void* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern int data_02114e20;

struct Struct_020727d8;
extern "C" void func_020727ec(struct Struct_020727d8* arg0);

// USA: func_ov017_021bf398
extern "C" ARM void func_ov017_021bf398(char* arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1 = func_020100f8((char*)var0);
	GameObject* var2 = var0->GetUnknownGameObject();
	func_020a27ac((void*)var1);
	func_020397c0(var2);
	SafeAllocator* var3 = (SafeAllocator*)(arg0 + 0x14);
	void* var4 = var3->GetSignedAllocator();
	if (var4) {
		var3->Reset();
		var3->Destroy();
		func_020727ec((struct Struct_020727d8*)(arg0 + 0xc));
		func_02012da4((AllocatorUnion*)&data_02114e20, var4);
	}
	arg0[1] = 1;
}
