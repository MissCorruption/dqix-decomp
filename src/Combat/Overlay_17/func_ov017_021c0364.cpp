#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Obj020979c0;
extern "C" void func_020979f4(Obj020979c0* p);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);

extern int data_02114e20;

// USA: func_ov017_021c0364
extern "C" ARM void func_ov017_021c0364(char* self) {
	Obj020979c0* p = *(Obj020979c0**)(self + 0x1c);
	if (p != NULL) {
		func_020979f4(p);
	}
	void* signedAlloc = ((SafeAllocator*)(self + 0x8))->GetSignedAllocator();
	((SafeAllocator*)(self + 0x8))->Destroy();
	func_02012da4((AllocatorUnion*)&data_02114e20, signedAlloc);
}
