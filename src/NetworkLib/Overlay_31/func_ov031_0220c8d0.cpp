#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov031_0220c8d0
extern "C" ARM void func_ov031_0220c8d0(unsigned short* arg0, unsigned char* arg1, int arg2, int arg3) {
	VectorizedMemset(arg0, 0, arg3 * 2);
	arg1 = arg1 + (arg2 - 1);
	if (arg2 > 1) {
		do {
			unsigned char var0 = *arg1;
			unsigned char var1 = *(arg1 - 1);
			arg2 -= 2;
			*arg0++ = var0 + (var1 << 8);
			arg1 -= 2;
		} while (arg2 > 1);
	}
	if (arg2 > 0) {
		*arg0 = *arg1;
	}
}
