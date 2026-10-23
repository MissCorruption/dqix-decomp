#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_0218d5c8(unsigned char* obj);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern "C" void func_020397c0(void* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a2794(void* obj);

extern int data_02114e20;

struct Obj021b5a30 {
	char pad0[0x40];
	SafeAllocator allocator1;
	unsigned char field0x54;
	char pad1[0x58 - 0x55];
	SafeAllocator allocator2;
};

// USA: func_ov017_021b5a30
extern "C" ARM void func_ov017_021b5a30(struct Obj021b5a30* self) {
	int base = ((int)GetGameResources());
	if (self->field0x54 != 0 && base != 0) {
		func_ov017_0218d5c8((unsigned char*)base);
		self->field0x54 = 0;
	}

	void* p1 = self->allocator1.GetSignedAllocator();
	if (p1 != NULL) {
		self->allocator1.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, p1);
	}

	void* p2 = self->allocator2.GetSignedAllocator();
	if (p2 != NULL) {
		self->allocator2.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, p2);
	}

	GameState* battle = GameState::GetInstance();
	GameObject* c = battle->GetUnknownGameObject();
	if (c != NULL) {
		func_020397c0(c);
	}

	int flagField = func_020100f8((char*)battle);
	if (flagField != 0) {
		func_020a2794((void*)flagField);
	}

	if (base != 0) {
		ClearFlags04((GameResources*)base, 0x80);
	}
}
