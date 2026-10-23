#include <globaldefs.h>

extern "C" void* func_ov001_02159f14(void*);

// USA: func_ov001_0215a3d8
extern "C" ARM void* func_ov001_0215a3d8(void* arg0, int arg1) {
	int* var0 = (int*)func_ov001_02159f14(arg0);
	if (var0) {
		var0[0] = 4;
		var0[4] = arg1;
	}
	return var0;
}
