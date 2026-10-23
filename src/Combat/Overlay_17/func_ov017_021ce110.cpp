#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021ce110
extern "C" ARM void func_ov017_021ce110(int arg0, unsigned short arg1, unsigned short arg2, unsigned char arg3) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	unsigned char var2 = (var1[4] & ~0x7f) | (arg0 & 0x7f);
	var2 = (var2 & ~0x80) | ((arg3 & 1) << 7);
	var1[0] = 0x8d;
	*(unsigned short*)(var1 + 6) = arg1;
	*(unsigned short*)(var1 + 8) = arg2;
	var1[4] = var2;
	func_0205e330(var0, var1, 0);
}
