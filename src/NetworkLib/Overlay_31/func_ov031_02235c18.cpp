#include <globaldefs.h>

extern "C" void *func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" void func_020d1ba0(unsigned short *arg0, unsigned short arg1);
extern "C" int func_ov031_0221aff8(int arg0);

extern void *data_ov031_02290cfc;

// USA: func_ov031_02235c18
extern "C" ARM void func_ov031_02235c18(void) {
	void *var0 = func_ov031_0223cf4c(0x6f8, 0x20);
	char *var1 = (char*)var0 + 0xf8;
	data_ov031_02290cfc = var0;
	func_020d1ba0((unsigned short*)(var1 + 0x400), 0xa001);
	func_ov031_0221aff8((int)data_ov031_02290cfc);
}
