#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021c9544
extern "C" ARM void func_ov017_021c9544(int arg0, int arg1, int arg2, int arg3) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	unsigned char* var2 = var1 + 4;
	unsigned char var3 = var2[3];
	unsigned char var4 = (unsigned char)arg1;
	signed char var5 = (signed char)arg3;
	var3 = (var3 & ~0xf) | (var4 & 0xf);
	var2[3] = var3;
	signed char var6 = *(signed char*)&var2[3];
	var1[0] = 0x86;
	var6 = (var6 & ~0xf0) | ((var5 & 0xf) << 4);
	*(short*)var2 = (short)arg0;
	var2[3] = var6;
	func_0205e330(var0, var1, 0);
}
