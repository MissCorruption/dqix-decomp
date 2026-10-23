#include <globaldefs.h>

extern "C" ARM int func_ov031_02222e0c(void);
extern "C" void func_ov031_022368e0(void);
extern "C" void func_ov031_02236878(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_02234b2c(void);

extern unsigned char data_ov031_02290ce4;

// USA: func_ov031_02234ae0
extern "C" ARM void func_ov031_02234ae0(void) {
	if (data_ov031_02290ce4 != 0) {
		return;
	}
	if (func_ov031_02222e0c() != 0) {
		return;
	}
	data_ov031_02290ce4 = 2;
	func_ov031_022368e0();
	func_ov031_02236878(7);
	func_ov031_022274c0((int)func_ov031_02234b2c);
}
