#include <globaldefs.h>

extern "C" int func_ov031_0221a780();
extern "C" void func_ov031_0221a4cc();

// USA: func_ov031_02212598
extern "C" ARM int func_ov031_02212598(void) {
	int var0 = func_ov031_0221a780();
	unsigned int var1 = var0 - 3;
	if (var1 <= 2) func_ov031_0221a4cc();
	return var0;
}
