#include <globaldefs.h>

extern void* data_02111304;

// USA: func_ov031_02203190
extern "C" ARM void func_ov031_02203190(void) {
	void* var0 = *((void**)&data_02111304 + 1);
	void* var1 = *(void**)((char*)var0 + 0xa4);
	if (var1 == NULL) return;
	*(unsigned char*)((char*)var1 + 0x8) = 10;
	*(int*)((char*)var1 + 0x44) = 0;
}
