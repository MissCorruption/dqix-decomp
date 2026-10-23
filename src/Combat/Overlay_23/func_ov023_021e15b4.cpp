#include <globaldefs.h>

extern "C" void* func_ov023_021e170c(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov023_021e15b4
extern "C" ARM void func_ov023_021e15b4(void* arg0, int arg1, int arg2, int arg3) {
	void* var0 = func_ov023_021e170c(arg0, arg1, arg2, arg3);
	if (var0 == 0) return;
	*(void**)arg0 = var0;
	while (var0 != 0) {
		void* var1 = func_ov023_021e170c(arg0, arg1, arg2, arg3);
		*(void**)var0 = var1;
		var0 = var1;
	}
}
