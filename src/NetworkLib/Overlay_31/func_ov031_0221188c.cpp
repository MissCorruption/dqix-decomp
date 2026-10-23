#include <globaldefs.h>

extern "C" void* func_ov031_022123d4(void);
extern "C" void func_ov031_02211138(void);

// USA: func_ov031_0221188c
extern "C" ARM void* func_ov031_0221188c(void) {
	void* var0 = func_ov031_022123d4();
	if (var0 == NULL) {
		func_ov031_02211138();
	}
	return var0;
}
