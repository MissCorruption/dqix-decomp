#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);
extern int data_02109bf4;

// USA: func_ov001_021636d0
extern "C" ARM int func_ov001_021636d0(void* arg0, int arg1) {
	int var0 = func_ov017_021d60f4(arg0);
	if (var0 < 0) {
		var0 = 0;
	} else if (var0 > 0x7f) {
		var0 = 0x7f;
	}
	int var1 = 0;
	if (arg1 >= 2) {
		var1 = func_ov017_021d60f4((char*)arg0 + 8);
	}
	func_0209c2e0(&data_02109bf4, var0, var1);
	return 1;
}
