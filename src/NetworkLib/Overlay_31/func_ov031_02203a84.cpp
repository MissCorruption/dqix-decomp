#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_ov031_022039b0(void* arg0, int arg1, void* arg2, int arg3);
extern "C" void* memmove(void*, const void*, unsigned int);

// USA: func_ov031_02203a84
extern "C" ARM int func_ov031_02203a84(void* arg0, int arg1) {
	void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (var0 == NULL) goto ret0;
	int var1 = *(int*)((char*)var0 + 0x60);
	if (var1 == 0) goto zero_case;
	var1 = func_ov031_022039b0(*(void**)((char*)var0 + 0x5c), var1, arg0, arg1);
	{
		int var2 = *(int*)((char*)var0 + 0x60);
		if ((unsigned int)var1 < (unsigned int)var2) {
			memmove(*(void**)((char*)var0 + 0x5c), (char*)*(void**)((char*)var0 + 0x5c) + var1, var2 - var1);
			var2 = *(int*)((char*)var0 + 0x60);
			*(int*)((char*)var0 + 0x60) = var2 - var1;
			return 0;
		}
		*(int*)((char*)var0 + 0x60) = 0;
		return var1 - var2;
	}
zero_case:
	return func_ov031_022039b0(arg0, arg1, (void*)0, 0);
ret0:
	return 0;
}
