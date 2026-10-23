#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov027_021dc864(unsigned int arg0, unsigned int arg1, int arg2);

struct Struct_ov027_021e33e0_7 {
	unsigned char unknown_0_[8];
	unsigned char *unknown_8_;
};

extern Struct_ov027_021e33e0_7 data_ov027_021e33e0;

// USA: func_ov027_021dc8d4
extern "C" ARM int func_ov027_021dc8d4(int arg0, int arg1) {
	int var0 = DisableIRQInterrupts();
	if (data_ov027_021e33e0.unknown_8_[0x50d] != 0) {
		SetIRQInterruptState(var0);
		return 0;
	}
	if (!func_ov027_021dc864(arg0, 8, arg1)) {
		SetIRQInterruptState(var0);
		return 0;
	}
	*(unsigned short *)(data_ov027_021e33e0.unknown_8_ + 0x10) = (unsigned short)arg1;
	*(unsigned short *)(data_ov027_021e33e0.unknown_8_ + 0x500) = (unsigned short)arg0;
	*(unsigned short *)(data_ov027_021e33e0.unknown_8_ + 0x502) = 8;
	SetIRQInterruptState(var0);
	return 1;
}
