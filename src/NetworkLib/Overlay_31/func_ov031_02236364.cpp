#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov031_02236174(void);

struct Struct_ov031_02290cfc_5 { void* unknown_0_; };
extern Struct_ov031_02290cfc_5 data_ov031_02290cfc;

struct Struct_ov031_02236364 { unsigned char unknown_0_0_ : 2; unsigned char unknown_0_2_ : 6; };

// USA: func_ov031_02236364
extern "C" ARM void func_ov031_02236364(unsigned char* arg0) {
	unsigned char* var0 = (unsigned char*)data_ov031_02290cfc.unknown_0_ + 0x400;

	VectorizedMemset(var0, 0, 0xef);
	VectorizedInvertedMemcpy(arg0, var0 + 0xd1, 5);
	VectorizedInvertedMemcpy(arg0 + 0x6, var0 + 0xd6, 5);
	VectorizedInvertedMemcpy(arg0 + 0xc, var0 + 0xdb, 5);
	VectorizedInvertedMemcpy(arg0 + 0x12, var0 + 0xe0, 5);
	VectorizedInvertedMemcpy(arg0 + 0x18, var0 + 0x60, 0x20);
	VectorizedInvertedMemcpy(arg0 + 0x39, var0 + 0x80, 0xd);
	VectorizedInvertedMemcpy(arg0 + 0x47, var0 + 0x90, 0xd);
	VectorizedInvertedMemcpy(arg0 + 0x55, var0 + 0xa0, 0xd);
	VectorizedInvertedMemcpy(arg0 + 0x63, var0 + 0xb0, 0xd);
	VectorizedInvertedMemcpy(arg0 + 0x71, var0 + 0x40, 0x20);

	Struct_ov031_02236364* var1 = (Struct_ov031_02236364*)(var0 + 0xe6);
	var1->unknown_0_0_ = 2;
	var1->unknown_0_2_ = 0;
	var0[0xe7] = 1;

	VectorizedMemset(var0 + 0xf0, 0, 4);
	var0[0xf5] = 1;
	var0[0xf6] = 1;
	func_ov031_02236174();
}
