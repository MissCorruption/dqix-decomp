#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern void* data_ov031_0224e5d8;
extern "C" int func_ov031_022161b0(int arg0, void* arg1);

// USA: func_ov031_0221624c
extern "C" ARM int func_ov031_0221624c(char* arg0) {
	if (*(int*)((char*)data_ov031_0224e5d8 + 0x1000 + 0xa90) != 2) return -1;

	VectorizedMemset(arg0, 0, 0x780);

	int var0 = 0;
	char* var1 = arg0;
	do {
		*(int*)var1 = 0;
		var1 += 0x78;
		var0++;
	} while (var0 < 0x10);

	int var2 = *(int*)((char*)data_ov031_0224e5d8 + 0x1000 + 0xa88);
	if (var2 <= 0) goto ret0;

	{
		int var3 = 0;
		char* var4 = arg0;
		do {
			int var5 = func_ov031_022161b0(var3, var4);
			if (var5 == -1) goto ret0;
			var3++;
			var4 += 0x78;
			var2 = *(int*)((char*)data_ov031_0224e5d8 + 0x1000 + 0xa88);
		} while (var3 < var2);
	}

ret0:
	return 0;
}
