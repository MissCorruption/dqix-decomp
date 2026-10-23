#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02057924(void* arg0);
extern "C" void func_02057f00(void* arg0, int arg1);
extern "C" void func_020a0c0c(void);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021beb48 {
	char unknown_0_[0x24];
	SafeAllocator unknown_24_;
};

// USA: func_ov017_021beb48
extern "C" ARM void func_ov017_021beb48(struct Struct_ov017_021beb48* arg0) {
	func_02057f00(func_02057924(arg0), 5);

	void* var0 = arg0->unknown_24_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_24_.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var0);
	}

	func_020a0c0c();
}
