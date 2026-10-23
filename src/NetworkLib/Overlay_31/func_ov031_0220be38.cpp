#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb24(unsigned short* arg0, int arg1);
extern "C" void func_ov031_0220be04(unsigned short* arg0, int arg1, int arg2, int arg3);

// USA: func_ov031_0220be38
extern "C" ARM void func_ov031_0220be38(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3) {
	VectorizedMemset(arg0, 0, arg3 * 2);
	int var0;
	int var1 = func_ov031_0220bb24(arg1, arg3);
	var0 = func_ov031_0220bb24(arg2, arg3);
	int var2 = 0;
	if (var0 <= 0) return;
	do {
		int var3;
		int var4 = arg3 - var2;
		for (var3 = 0; var3 < var1 && var3 < var4; var3++) {
			int var5 = arg1[var3] * arg2[var2];
			func_ov031_0220be04(arg0, var5, var2 + var3, arg3);
		}
		var2++;
	} while (var2 < var0);
}
