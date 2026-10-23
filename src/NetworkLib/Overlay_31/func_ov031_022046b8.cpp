#include <globaldefs.h>

extern "C" void func_ov031_0220321c(void);
extern "C" void func_ov031_02203190(void);
extern "C" void func_ov031_02203250(void);
extern "C" void func_ov031_022031bc(int arg0, unsigned short arg1, unsigned int arg2);
extern "C" int func_ov031_0220419c(void);
extern "C" int func_ov031_02204368(int arg0, int arg1);

// USA: func_ov031_022046b8
extern "C" ARM int func_ov031_022046b8(void) {
	func_ov031_0220321c();
	func_ov031_02203190();
	func_ov031_022031bc(0x44, 0x43, (unsigned int)-1);
	int var0;
	int var1 = 0;
	do {
		int var2 = func_ov031_0220419c();
		var0 = func_ov031_02204368(var2, var1);
		if (var0 == 1) {
			break;
		}
		var1++;
	} while (var1 < 4);
	func_ov031_02203250();
	return var0 == 1;
}
