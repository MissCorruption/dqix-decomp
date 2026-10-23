#include <globaldefs.h>

extern "C" unsigned short func_ov031_02239284(void* arg0);
extern "C" void* func_ov031_02239250(int arg0);
extern void* data_ov031_02290d20;

// USA: func_ov031_0223b040
extern "C" ARM int func_ov031_0223b040(void* arg0) {
	unsigned short var0 = func_ov031_02239284((char*)arg0 + 0xa);
	if (!var0) return 0;
	void* var1 = func_ov031_02239250(var0);
	*(void**)((char*)data_ov031_02290d20 + (var0 - 1) * 4 + 0xaa0) = var1;
	return 1;
}
