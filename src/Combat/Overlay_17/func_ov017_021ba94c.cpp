#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_020a1e54(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021ba94c {
	char unknown_0_[0x8];
	SafeAllocator unknown_8_;
	void* unknown_1c_;
};

// USA: func_ov017_021ba94c
extern "C" ARM void func_ov017_021ba94c(struct Struct_ov017_021ba94c* arg0) {
	if (arg0->unknown_1c_ != NULL) {
		func_020a1e54(1);
		arg0->unknown_1c_ = NULL;
	}

	void* var0 = arg0->unknown_8_.GetSignedAllocator();
	arg0->unknown_8_.Destroy();
	func_02012da4((AllocatorUnion*)&data_02114e20, var0);
}
