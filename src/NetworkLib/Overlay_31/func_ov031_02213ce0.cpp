#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" unsigned char func_ov031_02213f14(void* arg0);
extern "C" bool func_ov031_022140e8(void* arg0, int arg1, void* arg2);

// USA: func_ov031_02213ce0
extern "C" ARM int func_ov031_02213ce0(void* arg0) {
	unsigned char* var0 = (unsigned char*)arg0;
	unsigned char var1 = var0[0xd13];
	unsigned char* var2 = var0 + 0x470 + var1 * 0xc0;

	var0[0xd0d] = func_ov031_02213f14(arg0);

	VectorizedMemset(var0 + 0xb8 + 0xc00, 0, 0x52);

	bool var3 = func_ov031_022140e8(arg0, var0[0xd0d], var0 + 0xb8 + 0xc00);

	if (var3) {
		var0[0xd0b] = (var0[0xd0b] & ~0xc) | 4;
		int var4 = *(unsigned short*)(var2 + 0x2c) >> 4;
		if (!(var4 & 1)) {
			unsigned char* var5 = var0 + var0[0xd13] * 4;
			var5[0x444] = 3;
			return 9;
		} else {
			if (var0[0xd0d] == 6 && var2[0x15] == 0) {
				unsigned char* var6 = var0 + var0[0xd13] * 4;
				var6[0x444] = 3;
				return 9;
			}
		}
	} else {
		var0[0xd0b] = var0[0xd0b] & ~0xc;
		int var7 = *(unsigned short*)(var2 + 0x2c) >> 4;
		unsigned int var8 = var7 & 1;
		if (var8 == 1) {
			unsigned char* var9 = var0 + var0[0xd13] * 4;
			var9[0x444] = 3;
			return 9;
		}
	}

	var0[0xd15] = 0;
	var0[0xd14] = 0;
	return 8;
}
