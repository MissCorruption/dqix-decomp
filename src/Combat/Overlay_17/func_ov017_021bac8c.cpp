#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_020a1e54(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021bac8c {
	char unknown_0_[0xc];
	SafeAllocator unknown_c_;
	void* unknown_20_;
};

// USA: func_ov017_021bac8c
extern "C" ARM void func_ov017_021bac8c(struct Struct_ov017_021bac8c* arg0) {
	if (arg0->unknown_20_ != NULL) {
		func_020a1e54(1);
		arg0->unknown_20_ = NULL;
	}

	void* var0 = arg0->unknown_c_.GetSignedAllocator();
	arg0->unknown_c_.Destroy();
	func_02012da4((AllocatorUnion*)&data_02114e20, var0);
}
