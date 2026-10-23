#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ede2c(int* arg0);

extern unsigned short data_ov024_021feaa4;

// USA: func_ov024_021f639c
extern "C" ARM int func_ov024_021f639c(int* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	unsigned short var0[4];
	unsigned short* var1 = var0;
	unsigned short* var2 = &data_ov024_021feaa4;
	int var3 = 4;
	do {
		unsigned short* var4 = var1++;
		*var4 = *var2++;
	} while (--var3);

	int var5 = func_ov000_0215e9fc(*arg0, var0, 4, 1);
	if (var5 <= 0) return 0;
	if (!func_ov024_021ede2c(arg0)) return 0;

	*arg3 = var5;
	memcpy(arg4, var0, 8);
	return 1;
}
