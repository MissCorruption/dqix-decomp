#include <globaldefs.h>

extern "C" void func_02000b9c(int);
extern "C" int func_ov031_0221b9b0(void*);
extern "C" int func_ov031_0221c44c(void);
extern "C" void func_ov031_0221c1c4(void*);

// USA: func_ov031_02212cbc
extern "C" ARM int func_ov031_02212cbc(void* arg0) {
	int var0;
	int var1 = 0;
	func_02000b9c(0x2000c5c);
	var0 = func_ov031_0221b9b0(arg0);
	if (func_ov031_0221c44c()) {
		func_ov031_0221c1c4(arg0);
		var1 = 1;
	}
	if (var0 < 0) {
		return var1 ? 2 : 3;
	}
	return var1 ? 1 : 0;
}
