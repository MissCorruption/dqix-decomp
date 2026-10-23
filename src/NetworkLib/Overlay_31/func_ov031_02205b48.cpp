#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

struct Struct_ov031_02205b48_2 {
	unsigned char unknown_0_[0xf8];
	int unknown_f8_;
	unsigned char unknown_fc_[2];
	signed char unknown_fe_;
};

struct Struct_ov031_02205b48 {
	unsigned char unknown_0_[0x64];
	struct Struct_ov031_02205b48_2* unknown_64_;
	unsigned char unknown_68_[8];
	short unknown_70_;
	unsigned char unknown_72_;
	signed char unknown_73_;
	unsigned short unknown_74_;
};

extern "C" void* func_ov031_02205c50(struct Struct_ov031_02205b48* arg0, int* arg1,
	unsigned short* arg2, unsigned short* arg3, unsigned int* arg4);

// USA: func_ov031_02205b48
extern "C" ARM int func_ov031_02205b48(struct Struct_ov031_02205b48* arg0, void* arg1,
	int arg2, unsigned short* arg3, unsigned int* arg4) {
	unsigned short var0;
	unsigned short var1;
	int var2;
	unsigned int var3;
	int var4;
	int var5 = DisableIRQInterrupts();
	void* var6 = func_ov031_02205c50(arg0, &var2, &var0, &var1, &var3);

	if (var6 != NULL) {
		int var7 = var2;
		if (var7 == 0) {
			var4 = -6;
		} else {
			signed char var8 = arg0->unknown_73_;
			int var9 = 1;
			if (arg2 > var7) {
				arg2 = var7;
			}
			if (var8 != 0 && var8 != 4) {
				var9 = 0;
			}
			if (var9) {
				var7 = arg2;
			}
			VectorizedInvertedMemcpy(var6, arg1, arg2);
			struct Struct_ov031_02205b48_2* var10 = arg0->unknown_64_;
			if (var10->unknown_fe_ == 0) {
				var10->unknown_f8_ = var10->unknown_f8_ + var7;
			}
			var4 = var7;
		}
	} else {
		var4 = (var2 == 0) ? 0 : -28;
		arg0->unknown_70_ = arg0->unknown_70_ & ~6;
	}

	if (var4 >= 0) {
		if (arg3 != NULL && arg4 != NULL) {
			*arg3 = var1;
			*arg4 = var3;
		}
		if (arg0->unknown_74_ == 0) {
			arg0->unknown_74_ = var0;
		}
	}
	SetIRQInterruptState(var5);
	return var4;
}
