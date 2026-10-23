#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" void func_ov031_0220da1c(int);
extern "C" void func_ov031_0220e694(void*);
extern "C" int func_020d5cc8(int arg0);
extern void* data_ov031_0224e53c;

// USA: func_ov031_0220d214
extern "C" ARM int func_ov031_0220d214(void) {
	int var0 = DisableIRQInterrupts();
	if (data_ov031_0224e53c == 0) {
		SetIRQInterruptState(var0);
		return 1;
	}
	int var1 = *(int*)((char*)data_ov031_0224e53c + 0x2000 + 0x260);
	if (var1 == 3) goto ret0;
	if (var1 == 9) goto case9;
	if (var1 != 0xa) goto ret1;
	SetIRQInterruptState(var0);
	return 2;
ret0:
	SetIRQInterruptState(var0);
	return 0;
ret1:
	SetIRQInterruptState(var0);
	return 1;
case9:
	if (*(unsigned char*)((char*)data_ov031_0224e53c + 0x2000 + 0x26b) == 1) {
		func_ov031_0220da1c(0xa);
		*(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x80) = 6;
		goto ret3;
	}
	{
		int var2 = func_020d5cc8((int)func_ov031_0220e694);
		switch (var2) {
		case 2:
			func_ov031_0220da1c(0xa);
			*(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x80) = 6;
			goto ret3;
		case 8:
			SetIRQInterruptState(var0);
			return 4;
		case 3:
		default:
			func_ov031_0220da1c(0xb);
			SetIRQInterruptState(var0);
			return 7;
		}
	}
ret3:
	SetIRQInterruptState(var0);
	return 3;
}
