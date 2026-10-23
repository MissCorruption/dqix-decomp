#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_020a1e54(int arg0);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021c1a24 {
	char unknown_0_[8];
	SafeAllocator unknown_8_;
	unsigned char unknown_1c_;
	unsigned char unknown_1d_;
	unsigned char unknown_1e_[2];
	int unknown_20_;
};

// USA: func_ov017_021c1a24
extern "C" ARM void func_ov017_021c1a24(struct Struct_ov017_021c1a24* arg0) {
	if (arg0->unknown_20_ != 0) {
		arg0->unknown_20_ = 0;
		#if !defined(jpn)
		if (arg0->unknown_1d_ != 0) {
			func_020a1e54(1);
		}
		#endif
		func_020a1f4c(1);
	}

	void* var0 = arg0->unknown_8_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_8_.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var0);
	}

	arg0->unknown_8_.ResetAllocatorPointer();
	arg0->unknown_1c_ = 0;
}
