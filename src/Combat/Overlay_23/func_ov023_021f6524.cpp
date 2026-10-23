#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);

// USA: func_ov023_021f6524
extern "C" ARM void* func_ov023_021f6524(void* arg0, int arg1) {
	void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
	if (var0 == 0) return 0;
	if (func_ov023_021f6f10(var0) != 7) return 0;
	return var0;
}
