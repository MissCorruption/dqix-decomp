#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern void* (*data_ov031_0224c994)(unsigned int);
extern int (*data_ov031_0224c9c0)(void*);

extern "C" void func_ov031_02209158(void* arg0, void* arg1, int arg2);
extern "C" void func_ov031_02209234(void* arg0, void* arg1, int arg2);
extern "C" void func_ov031_022098ac(void* arg0, int arg1, int arg2);
extern "C" void* func_ov031_0220963c(void* arg0, void* arg1);
extern "C" void func_ov031_022037a8(void* arg0, void* arg1, int arg2, int arg3, void* arg4);

// USA: func_ov031_02209e98
extern "C" ARM int func_ov031_02209e98(void* arg0) {
	void* var0 = *(void**)((char*)arg0 + 0xc);
	unsigned char* var1 = (unsigned char*)data_ov031_0224c994(0x83);
	if (var1 == NULL) {
		*(unsigned char*)((char*)var0 + 0x455) = 9;
		return 9;
	}

	var1[0] = 0x14;
	var1[1] = 0x3;
	var1[2] = 0;
	var1[3] = 0;
	var1[4] = 1;
	var1[5] = 1;
	VectorizedMemset((char*)var0 + 0x1cc, 0, 8);
	var1[6] = 0x16;
	var1[7] = 0x3;
	var1[8] = 0;
	var1[9] = 0;
	var1[0xa] = 0x28;
	var1[0xb] = 0x14;
	var1[0xc] = 0;
	var1[0xd] = 0;
	var1[0xe] = 0x24;
	VectorizedInvertedMemcpy((char*)var0 + 0x3a4, (char*)var0 + 0x3fc, 0x58);

	func_ov031_02209158(var0, var1 + 0xf, 0);
	VectorizedInvertedMemcpy((char*)var0 + 0x3fc, (char*)var0 + 0x3a4, 0x58);
	VectorizedInvertedMemcpy((char*)var0 + 0x2ec, (char*)var0 + 0x348, 0x5c);

	func_ov031_02209234(var0, var1 + 0x1f, 0);
	VectorizedInvertedMemcpy((char*)var0 + 0x348, (char*)var0 + 0x2ec, 0x5c);

	func_ov031_022098ac(var0, (int)(var1 + 0xb), 0x28);

	void* var2 = func_ov031_0220963c(var0, var1 + 0x6);
	func_ov031_022037a8(var1, (char*)var2 + 0x6, 0, 0, arg0);

	return data_ov031_0224c9c0(var1);
}
