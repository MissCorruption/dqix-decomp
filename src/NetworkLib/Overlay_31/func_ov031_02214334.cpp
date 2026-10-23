#include <globaldefs.h>

extern "C" char* func_ov031_022133f8(int);
extern "C" int func_ov031_022141d4(void*);

// USA: func_ov031_02214334
extern "C" ARM int func_ov031_02214334(void) {
	char *var0 = func_ov031_022133f8(1);
	int var1 = func_ov031_022141d4(var0 + 0xa);
	return (var1 == 1) ? 0x12 : 0x11;
}
