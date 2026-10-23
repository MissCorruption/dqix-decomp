#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021cdd70
extern "C" ARM void func_ov017_021cdd70(unsigned short arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3, unsigned short arg4, unsigned short arg5, unsigned char arg6) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	var1[0] = 0x6b;
	unsigned char* var2 = var1 + 4;
	*(unsigned short*)(var2 + 0) = arg0;
	*(unsigned short*)(var2 + 2) = arg1;
	*(unsigned short*)(var2 + 4) = arg2;
	*(unsigned short*)(var2 + 6) = arg3;
	*(unsigned short*)(var2 + 0xa) = arg4;
	*(unsigned short*)(var2 + 8) = arg5;
	var2[0xc] = arg6;
	func_0205e330(var0, var1, 0);
}
