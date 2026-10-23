#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_ov017_021aeea8 {
	char unknown_0_[0x2c];
	SafeAllocator unknown_2c_;
};

// USA: func_ov017_021aeea8
extern "C" ARM void func_ov017_021aeea8(struct Struct_ov017_021aeea8* arg0) {
	void* var0 = arg0->unknown_2c_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_2c_.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var0);
	}
}
