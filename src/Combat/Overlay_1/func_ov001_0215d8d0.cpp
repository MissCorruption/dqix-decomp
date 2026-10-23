#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_ov001_021591b0(int arg0, int arg1);
extern int data_ov001_02165880;

// USA: func_ov001_0215d8d0
extern "C" ARM int func_ov001_0215d8d0(void* arg0) {
	int var0 = func_ov017_021d60f4(arg0);
	int var1 = *(int*)((char*)&data_ov001_02165880 + 0x24);
	func_ov001_021591b0(var1, var0);
	return 1;
}
