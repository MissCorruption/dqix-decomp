#include <globaldefs.h>

extern "C" void func_0202ae18(void);
extern "C" int func_0202c508(void);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021d1c2c
extern "C" ARM void func_ov017_021d1c2c(unsigned char arg0, unsigned short arg1) {
	func_0202ae18();
	if (!func_0202c508()) return;
	unsigned char* var0 = (unsigned char*)func_02012fe4();
#if defined(jpn)
	*(unsigned short*)(var0 + 0x27f4) = arg0;
	*(unsigned short*)(var0 + 0x27f6) = arg1;
#else
	*(unsigned short*)(var0 + 0x27b4) = arg0;
	*(unsigned short*)(var0 + 0x27b6) = arg1;
#endif
	void* var1 = func_0202ae24();
	unsigned char var2[0x14];
	var2[0] = 0xb3;
	var2[4] = (unsigned char)arg0;
	var2[5] = (unsigned char)arg1;
	func_0205e330(var1, var2, 0);
}
