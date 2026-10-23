#include <globaldefs.h>

extern "C" unsigned int func_ov031_02207500();
extern "C" void func_ov031_02215690(void* arg0);
unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);

// USA: func_ov031_022153bc
extern "C" ARM int func_ov031_022153bc(char* arg0) {
	if ((int)func_ov031_02207500() != 0) {
		func_ov031_02215690(arg0);
		unsigned int var0 = *(unsigned char*)(arg0 + 0xd0c);
		unsigned int var1 = (var0 << 26) >> 30;
		return (var1 == 1) ? 0xf : 0xd;
	}
	unsigned long long var2 = GetCurrentTimestamp();
	unsigned long long var3 = *(unsigned long long*)(arg0 + 0xcb0);
	unsigned long long var4 = var2 - var3;
	unsigned long long var5 = var4 << 6;
	unsigned long long var6 = _ll_udiv(var5, 0x1ff6210, 0);
	if (var6 < 10) return 0xc;
	unsigned char var7 = *(unsigned char*)(arg0 + 0xd13);
	*(unsigned char*)(arg0 + var7 * 4 + 0x444) = 1;
	return 0xb;
}
