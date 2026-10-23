#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" ARM int func_ov031_0220bb24(unsigned short* arg0, int arg1);

// USA: func_ov031_0220bee4
extern "C" ARM void func_ov031_0220bee4(unsigned short* arg0, unsigned short* arg1, int arg2, int arg3) {
	int var0 = func_ov031_0220bb24(arg1, arg3);
	int var1 = 0;
	int var2 = 0;
	if (var0 > 0) {
		do {
			int var3 = arg2 * arg1[var2] + var1;
			arg0[var2] = (unsigned short)var3;
			var2++;
			var1 = (unsigned int)var3 >> 16;
		} while (var2 < var0);
	}
	if (var2 < arg3) {
		arg0[var2] = (unsigned short)var1;
		var2++;
	}
	VectorizedMemset(arg0 + var2, 0, (arg3 - var2) * 2);
}
