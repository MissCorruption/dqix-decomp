#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" void func_ov031_02236878(int);
extern unsigned char data_ov031_02290c6c;
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222a038(void);

// USA: func_ov031_02229fe8
extern "C" ARM void func_ov031_02229fe8(void) {
	int var0 = func_ov031_02222e0c();
	if (var0 == 0) goto isZero;
	if (var0 == 1) goto isOne;
	return;
isZero:
	func_ov031_02236878(7);
	goto shared;
isOne:
	func_ov031_02236878(6);
	data_ov031_02290c6c = 1;
shared:
	func_ov031_022274c0((int)func_ov031_0222a038);
}
