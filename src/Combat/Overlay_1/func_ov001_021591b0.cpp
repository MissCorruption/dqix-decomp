#include <globaldefs.h>

extern "C" void* func_ov001_02158e4c(int arg0);

// USA: func_ov001_021591b0
extern "C" ARM void* func_ov001_021591b0(int arg0, int arg1) {
	int* var0 = (int*)func_ov001_02158e4c(arg0);
	if (var0) {
		var0[0] = 0xf;
		var0[7] = arg1;
	}
	return var0;
}
