#include <globaldefs.h>

int FreeVRAMStagingMemory(void const*);

struct Struct_ov017_02199684 { unsigned char unknown_0_[0x14]; int unknown_14_; unsigned char unknown_18_[0x20 - 0x18]; };

// USA: func_ov017_021996bc
extern "C" ARM void func_ov017_021996bc(Struct_ov017_02199684* arg0, int arg1) {
	for (int var0 = 0; var0 < arg1; var0++) {
		int var1 = arg0[var0].unknown_14_;
		arg0[var0].unknown_14_ = 0;
		if (var1 != 0) {
			FreeVRAMStagingMemory((void const*)var1);
		}
	}
}
