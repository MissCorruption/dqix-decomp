#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_0205eabc(void* arg0, void* arg1, int arg2);
extern "C" void func_020bc078(int* arg0);
extern int data_ov001_02165958[16];
extern int data_02108760;

// USA: func_ov001_021635d0
extern "C" ARM int func_ov001_021635d0(void* arg0, int arg1) {
	unsigned int var0 = (unsigned int)func_ov017_021d60f4(arg0);
	if (var0 >= 16) {
		return 0;
	}
	int* var1 = &data_ov001_02165958[var0];
	if (*var1 == 0) {
		return 0;
	}
	int var2 = 0;
	if (arg1 >= 2) {
		var2 = func_ov017_021d60f4((char*)arg0 + 8);
	}
	func_0205eabc(&data_02108760, var1, var2);
	func_020bc078(var1);
	return 1;
}
