#include <globaldefs.h>

int AllocateVRAMStagingMemory(unsigned int);

struct Struct_ov017_02199684 { unsigned char unknown_0_[0x14]; int unknown_14_; unsigned char unknown_18_[0x20 - 0x18]; };

// USA: func_ov017_02199684
extern "C" ARM void func_ov017_02199684(Struct_ov017_02199684* arg0, int arg1, int arg2) {
	for (int var0 = 0; var0 < arg1; var0++) {
		arg0[var0].unknown_14_ = AllocateVRAMStagingMemory(arg2);
	}
}
