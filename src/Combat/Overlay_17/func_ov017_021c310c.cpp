#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02057924(void* obj);
extern "C" void func_0205ebec(void* obj);
extern "C" void func_02057f00(void* self, int code);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);

extern int data_02108760;
extern int data_02114e20;

struct Obj021c310c {
	char pad[0x8];
	SafeAllocator allocator;
	char pad2[0x90 - 0x8 - sizeof(SafeAllocator)];
	void* f90;
};

// USA: func_ov017_021c310c
extern "C" ARM void func_ov017_021c310c(struct Obj021c310c* self) {
	if (self->f90 != NULL) {
		void* obj = func_02057924(self->f90);
		func_0205ebec((void*)&data_02108760);
		func_02057f00(obj, 0x11);
	}

	void* p = self->allocator.GetSignedAllocator();
	if (p != NULL) {
		self->allocator.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, p);
	}
}
