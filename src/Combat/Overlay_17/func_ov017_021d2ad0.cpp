#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021d2ad0
extern "C" ARM void func_ov017_021d2ad0(short arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	var1[0] = 0x23;
	unsigned char* var2 = var1 + 4;
	var2[0] = arg0;
	*(int*)(var2 + 4) = arg1;
	*(int*)(var2 + 8) = arg2;
	*(int*)(var2 + 0xc) = arg3;
	var2[1] = arg4;
	func_0205e330(var0, var1, 0);
}
