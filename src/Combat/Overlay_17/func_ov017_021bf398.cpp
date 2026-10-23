#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_020397c0(void* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern int data_02114e20;

struct List020727d8;
extern "C" void func_020727ec(struct List020727d8* list);

// USA: func_ov017_021bf398
extern "C" ARM void func_ov017_021bf398(char* self) {
	GameState* battle = GameState::GetInstance();
	int flagResult = func_020100f8((char*)battle);
	GameObject* combatant = battle->GetUnknownGameObject();
	func_020a27ac((void*)flagResult);
	func_020397c0(combatant);
	SafeAllocator* allocator = (SafeAllocator*)(self + 0x14);
	void* p = allocator->GetSignedAllocator();
	if (p) {
		allocator->Reset();
		allocator->Destroy();
		func_020727ec((struct List020727d8*)(self + 0xc));
		func_02012da4((AllocatorUnion*)&data_02114e20, p);
	}
	self[1] = 1;
}
