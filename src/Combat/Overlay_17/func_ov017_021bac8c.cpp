#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_020a1e54(int flag);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);

extern int data_02114e20;

struct Obj021bac8c {
	char pad0[0xc];
	SafeAllocator allocator;
	void* field20;
};

// USA: func_ov017_021bac8c
extern "C" ARM void func_ov017_021bac8c(struct Obj021bac8c* self) {
	if (self->field20 != NULL) {
		func_020a1e54(1);
		self->field20 = NULL;
	}

	void* p = self->allocator.GetSignedAllocator();
	self->allocator.Destroy();
	func_02012da4((AllocatorUnion*)&data_02114e20, p);
}
