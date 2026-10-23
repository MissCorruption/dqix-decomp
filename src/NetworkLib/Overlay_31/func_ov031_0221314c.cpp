#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void* func_ov031_022133f8(unsigned int arg0);

// USA: func_ov031_0221314c
extern "C" ARM void func_ov031_0221314c(unsigned char* arg0, void* arg1, int arg2) {
	unsigned char* var0 = (unsigned char*)func_ov031_022133f8(0x10);

	var0[0xd0c] = (var0[0xd0c] & ~0xf) | 1;
	VectorizedMemset(var0, 0, 0xf0);

	for (int var1 = 0; var1 < 0x20; var1++) {
		if (arg0[var1] == 0) break;
		var0[0x40 + var1] = arg0[var1];
	}

	if (arg1 == 0 || arg2 == 0) {
		var0[0xe6] = var0[0xe6] & ~3;
		return;
	}

	int var2;
	if (arg2 == 1) {
		var2 = 5;
	} else if (arg2 == 2) {
		var2 = 0xd;
	} else {
		var2 = 0x10;
	}
	VectorizedInvertedMemcpy(arg1, var0 + 0x80, var2);
	var0[0xe6] = (var0[0xe6] & ~3) | ((unsigned char)arg2 & 3);
}
