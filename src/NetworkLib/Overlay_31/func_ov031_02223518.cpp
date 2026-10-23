#include <globaldefs.h>

extern "C" void func_ov031_022274e4(int *arg0, int *arg1);
extern "C" int func_ov031_0223690c(void *arg0);
extern "C" int func_ov031_02236ea0(void *arg0);

// USA: func_ov031_02223518
extern "C" ARM int func_ov031_02223518(void *arg0) {
	int var0;
	func_ov031_022274e4(&var0, 0);
	if (var0 == 1) return func_ov031_0223690c(arg0);
	if (var0 != 2) return var0;
	return func_ov031_02236ea0(arg0);
}
