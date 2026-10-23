#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

extern "C" int func_020d6ad4(int arg0, int arg1, int arg2, int arg3, unsigned short arg4);
extern "C" void func_ov031_0220da1c(int);
extern "C" int func_ov031_0220d570(int);
extern "C" void func_ov031_0220dc40(void);
extern int data_ov031_0224e53c;

// USA: func_ov031_0220d010
extern "C" ARM int func_ov031_0220d010(void* arg0, unsigned char* arg1, int arg2) {
	int var0 = DisableIRQInterrupts();
	if (data_ov031_0224e53c == 0) {
		SetIRQInterruptState(var0);
		return 1;
	}
	int var1 = *(int*)((char*)data_ov031_0224e53c + 0x2260);
	switch (var1) {
	case 3: {
		if (arg0 == 0) {
			SetIRQInterruptState(var0);
			return 1;
		}
		if (*(unsigned short*)((char*)arg0 + 0x3c) != 0) {
			SetIRQInterruptState(var0);
			return 1;
		}
		if (arg1 != 0) {
			if (!(arg1[0] < 4 && arg1[1] < 4)) {
				SetIRQInterruptState(var0);
				return 1;
			}
			*(unsigned char*)((char*)data_ov031_0224e53c + 0x2250) = arg1[0];
			*(unsigned char*)((char*)data_ov031_0224e53c + 0x2251) = arg1[1];
			if (*(unsigned char*)((char*)data_ov031_0224e53c + 0x2250) == 0) {
				VectorizedMemset((char*)data_ov031_0224e53c + 0x2200, 0, 0x50);
			} else {
				VectorizedInvertedMemcpy(arg1 + 2, (char*)data_ov031_0224e53c + 0x2200, 0x50);
			}
		} else {
			VectorizedMemset((char*)data_ov031_0224e53c + 0x2200, 0, 0x52);
		}

		VectorizedInvertedMemcpy(arg0, (char*)data_ov031_0224e53c + 0x2140, 0xc0);
		*(unsigned short*)((char*)data_ov031_0224e53c + 0x2170) = *(unsigned short*)((char*)data_ov031_0224e53c + 0x216e) | 3;
		func_ov031_0220d570(arg2);
		break;
	}
	case 8:
		SetIRQInterruptState(var0);
		return 2;
	case 9:
		SetIRQInterruptState(var0);
		return 0;
	default:
		SetIRQInterruptState(var0);
		return 1;
	}

	int var2 = func_020d6ad4((int)func_ov031_0220dc40, 0xffff, 0x50, 0xffff, 0xffff);
	switch (var2) {
	case 2:
		func_ov031_0220da1c(8);
		*(unsigned short*)((char*)data_ov031_0224e53c + 0x2280) = 5;
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
ret3:
	SetIRQInterruptState(var0);
	return 3;
}
