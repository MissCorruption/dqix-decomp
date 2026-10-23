#include <globaldefs.h>

extern "C" int func_020cee18(int*);
extern "C" int func_020cedfc(int);

// USA: func_ov031_0223dfd0
extern "C" ARM int func_ov031_0223dfd0(void) {
	int var0;
	int var1 = func_020cee18(&var0);
	if (var1 != 0) {
		return var1;
	}
	if (var0 == 0xf) {
		return var0;
	}
	return func_020cedfc(0xf);
}
