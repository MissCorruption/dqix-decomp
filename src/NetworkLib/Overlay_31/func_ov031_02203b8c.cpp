#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_ov031_022039b0(int, int, int, int);

// USA: func_ov031_02203b8c
extern "C" ARM void func_ov031_02203b8c(void) {
	void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (var0 == NULL) return;
	int var1 = *(int*)((char*)var0 + 0x60);
	if (var1 == 0) return;
	func_ov031_022039b0(*(int*)((char*)var0 + 0x5c), var1, 0, 0);
	*(int*)((char*)var0 + 0x60) = 0;
}
