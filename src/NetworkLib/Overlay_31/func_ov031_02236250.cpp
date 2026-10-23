#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov031_02236174(void);

struct Struct_ov031_02290cfc_4 { void* unknown_0_; };
extern Struct_ov031_02290cfc_4 data_ov031_02290cfc;

struct Struct_ov031_02236250 { unsigned char unknown_0_0_ : 2; unsigned char unknown_0_2_ : 6; };

// USA: func_ov031_02236250
extern "C" ARM void func_ov031_02236250(unsigned char* arg0) {
	unsigned char* var0 = (unsigned char*)data_ov031_02290cfc.unknown_0_;

	VectorizedMemset(var0 + 0x400, 0, 0xef);
	VectorizedInvertedMemcpy(arg0, var0 + 0x440, 0x20);

	int var1;
	switch (*(int*)(arg0 + 0x20)) {
	case 1:
		((Struct_ov031_02236250*)(var0 + 0x4e6))->unknown_0_0_ = 1;
		var1 = 5;
		break;
	case 2:
		((Struct_ov031_02236250*)(var0 + 0x4e6))->unknown_0_0_ = 2;
		var1 = 0xd;
		break;
	case 3:
		((Struct_ov031_02236250*)(var0 + 0x4e6))->unknown_0_0_ = 3;
		var1 = 0x10;
		break;
	default:
		((Struct_ov031_02236250*)(var0 + 0x4e6))->unknown_0_0_ = 0;
		var1 = 0;
		break;
	}
	((Struct_ov031_02236250*)(var0 + 0x4e6))->unknown_0_2_ = 0;

	int var2 = 0;
	unsigned char* var3 = var0 + 0x480;
	unsigned char* var4 = arg0 + 0x28;
	do {
		VectorizedInvertedMemcpy(var4, var3, var1);
		var2++;
		var3 += 0x10;
		var4 += 0x20;
	} while (var2 < 4);

	var0[0x4e7] = 2;
	VectorizedMemset(var0 + 0x4f0, 0, 4);
	var0[0x4f5] = 1;
	var0[0x4f6] = 1;
	func_ov031_02236174();
}
