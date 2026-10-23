#include <globaldefs.h>

extern "C" int func_ov028_021d9748(void);
extern "C" void func_ov017_021d6134(int arg0, int arg1);

// USA: func_ov001_02163228
extern "C" ARM int func_ov001_02163228(int arg0) {
	int var0 = func_ov028_021d9748();
	func_ov017_021d6134(arg0, var0);
	return 1;
}
