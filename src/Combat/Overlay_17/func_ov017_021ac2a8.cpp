#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02057924(void* arg0);
extern "C" void func_02057f00(void* arg0, int arg1);
extern "C" void func_020a0c0c(void);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021ac2a8 {
	char unknown_0_[0x10];
	SafeAllocator unknown_10_;
};

// USA: func_ov017_021ac2a8
extern "C" ARM void func_ov017_021ac2a8(struct Struct_ov017_021ac2a8* arg0) {
	func_02057f00(func_02057924(arg0), 5);

	void* var0 = arg0->unknown_10_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_10_.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var0);
	}

	func_020a0c0c();
}
