#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021cea34
extern "C" ARM void func_ov017_021cea34(int arg0) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	var1[0] = 0x31;
	*(int*)(var1 + 4) = arg0;
	func_0205e330(var0, var1, 0);
}
