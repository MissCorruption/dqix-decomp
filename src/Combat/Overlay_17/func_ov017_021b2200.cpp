#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_ov011_02184770(void);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_020a1e54(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021d83f0_2 {
	unsigned int unknown_0_;
	int unknown_4_;
};
extern struct Struct_ov017_021d83f0_2 data_ov017_021d83f0;

struct Struct_ov017_021a3ef0_12 {
	char unknown_0_[0xc];
	int unknown_c_;
	char unknown_10_[0x10 - 0x10];
	SafeAllocator unknown1_10_;
};

// USA: func_ov017_021b2200
extern "C" ARM void func_ov017_021b2200(struct Struct_ov017_021a3ef0_12* arg0) {
	if (arg0->unknown_c_ > -1) {
		int var0 = (int)BackgroundLoader::GetInstance();
		int var1 = arg0->unknown_c_;
		((BackgroundLoader*)(var0))->RemoveTask((int)(var1));
		arg0->unknown_c_ = -1;
	}

	if (data_ov017_021d83f0.unknown_4_ != 0) {
		func_ov011_02184770();
		data_ov017_021d83f0.unknown_4_ = 0;
		func_020a1f4c(1);
		func_020a1e54(1);
	}

	void* var2 = arg0->unknown1_10_.GetSignedAllocator();
	if (var2 != NULL) {
		arg0->unknown1_10_.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var2);
	}
}
