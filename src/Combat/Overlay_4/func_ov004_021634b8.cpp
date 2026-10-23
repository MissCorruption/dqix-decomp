#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);

// USA: func_ov004_021634b8
extern "C" ARM void func_ov004_021634b8(void* arg0, int arg1, int arg2) {
	void* var0 = func_ov011_021849c8(arg0);
	void* var1 = func_ov023_021f6880(var0, arg1);
	if (var1 != NULL) {
		*((unsigned char*)var1 + 0x3a) = (unsigned char)arg2;
	}
}
