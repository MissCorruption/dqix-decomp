#include <globaldefs.h>

extern "C" void* func_ov001_02158e0c(int arg0);

// USA: func_ov001_0215911c
extern "C" ARM void* func_ov001_0215911c(int arg0, int arg1) {
	int* var0 = (int*)func_ov001_02158e0c(arg0);
	if (var0) {
		var0[0] = 0xc;
		var0[7] = arg1;
	}
	return var0;
}
