#include <globaldefs.h>

extern "C" unsigned int* func_ov023_021f5534(void* arg0, void* arg1);

// USA: func_ov023_021f5578
extern "C" ARM int func_ov023_021f5578(void* arg0, void* arg1, int arg2) {
	unsigned int* var0 = func_ov023_021f5534(arg0, arg1);
	if (var0 != 0) arg2 = *var0 >> 0x1a;
	return arg2;
}
