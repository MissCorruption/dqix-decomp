#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" unsigned short func_ov023_021f6f10(void*);
extern "C" void func_ov004_0215534c(void*);

// USA: func_ov004_02155544
extern "C" ARM int func_ov004_02155544(void* arg0) {
	void* var0 = func_ov011_021849c8(arg0);
	void* var1 = func_ov023_021f6880(var0, 0x2c);
	if (!var1) return 0;
	if (func_ov023_021f6f10(var1) != 7) return 0;
	void* var2 = func_ov023_021f6880(var0, 3);
	if (!var2) return 0;
	if (func_ov023_021f6f10(var2) != 6) return 0;
	func_ov004_0215534c(arg0);
	return 0;
}
