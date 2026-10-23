#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_02203500(unsigned int* arg0, void* arg1);
extern "C" void func_ov031_022035e0(int arg0, void* arg1);

// USA: func_ov031_02209840
extern "C" ARM int func_ov031_02209840(void* arg0, int arg1, void* arg2) {
	unsigned int var0;
	do {
		int var1 = func_ov031_02203500(&var0, arg2);
		if (var0 == 0) {
			return -1;
		}
		if (var0 > arg1) {
			var0 = arg1;
		}
		VectorizedInvertedMemcpy((const void*)var1, arg0, var0);
		func_ov031_022035e0(var0, arg2);
		arg1 -= var0;
		arg0 = (char*)arg0 + var0;
	} while (arg1 > 0);

	return 0;
}
