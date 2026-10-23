#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_ov031_02239108(unsigned short arg0);
extern "C" int func_ov027_021dcc24(int arg0);
extern "C" int func_ov031_0223883c(int arg0);
extern "C" void func_020c9be0(void);

// USA: func_ov031_022387f4
extern "C" ARM void func_ov031_022387f4(int arg0, int arg1) {
	func_ov031_02239108(2);
	if (func_ov027_021dcc24(arg1) != 0) {
		func_ov031_02239108(7);
		return;
	}
	if (func_ov031_0223883c(arg0) == 0) {
		func_020c9be0();
	}
}
