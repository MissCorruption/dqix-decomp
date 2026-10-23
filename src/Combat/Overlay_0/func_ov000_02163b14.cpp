#include <globaldefs.h>

extern "C" int func_020a1fa8(void);
extern "C" int func_ov026_021dbd1c(void* arg0, void* arg1, int arg2);

// USA: func_ov000_02163b14
extern "C" ARM int func_ov000_02163b14(void* arg0, void* arg1) {
	int var0 = func_020a1fa8();
	if (var0 != 3) {
		return var0;
	}
	return func_ov026_021dbd1c(arg0, arg1, 1);
}
