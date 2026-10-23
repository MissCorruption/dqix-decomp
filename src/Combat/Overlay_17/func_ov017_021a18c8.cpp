#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_ov023_021e2f38(void* arg0);
extern "C" void func_020a1e54(int arg0);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021a18c8 {
	char unknown_0_[0x8];
	SafeAllocator unknown_8_;
};

// USA: func_ov017_021a18c8
extern "C" ARM void func_ov017_021a18c8(struct Struct_ov017_021a18c8* arg0) {
	int var0 = *(int*)((char*)arg0 + 0x1c);
	if (var0 != 0) {
		func_ov023_021e2f38((void*)var0);
		*(int*)((char*)arg0 + 0x1c) = 0;
		func_020a1e54(1);
		func_020a1f4c(1);
	}

	void* var1 = arg0->unknown_8_.GetSignedAllocator();
	if (var1 != NULL) {
		arg0->unknown_8_.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var1);
	}
}
