#include <globaldefs.h>

extern "C" int func_020d5214(int arg0);
extern "C" void func_ov031_022393e4(int arg0);
extern "C" int func_ov031_02239a00(short* arg0);

// USA: func_ov031_022399d8
extern "C" ARM int func_ov031_022399d8(void) {
	int var0 = func_020d5214((int)func_ov031_02239a00);
	if (var0 == 2) return 1;
	func_ov031_022393e4(var0);
	return 0;
}
