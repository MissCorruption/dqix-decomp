#include <globaldefs.h>

extern "C" void func_ov031_022393e4(int arg0);
extern "C" void func_ov031_0223a374(void);
extern "C" int func_ov031_02239ad8(void);
extern "C" void func_ov031_02239368(int arg0);

// USA: func_ov031_02239aa4
extern "C" ARM void func_ov031_02239aa4(unsigned short* arg0) {
	unsigned short var0 = arg0[1];
	if (var0 != 0) {
		func_ov031_022393e4(var0);
		func_ov031_0223a374();
		return;
	}
	if (func_ov031_02239ad8() != 0) return;
	func_ov031_02239368(9);
}
