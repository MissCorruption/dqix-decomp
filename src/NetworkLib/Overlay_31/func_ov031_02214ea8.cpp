#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);
extern "C" int func_ov031_02214afc(unsigned int);
extern "C" int func_ov031_02214fc8(void* arg0, int arg1);
extern "C" int func_ov031_022151b0(void*, void*, int, int);

extern int data_ov031_02245fb0;

struct Struct_ov031_02214ea8 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };

// USA: func_ov031_02214ea8
extern "C" ARM int func_ov031_02214ea8(char* arg0) {
	unsigned long long var0 = GetCurrentTimestamp() - *(unsigned long long*)(arg0 + 0xcb0);
	unsigned long long var1 = _ll_udiv(var0 << 6, 0x82ea, 0);
	if (var1 < 150) {
		unsigned char var2 = arg0[0xd0f];
		char* var3 = arg0 + var2 * 0x24;
		Struct_ov031_02214ea8* var4 = (Struct_ov031_02214ea8*)(var3 + 0x300);
		if (var4->unknown_0_0_ != 1) goto ret5;
	}

	{
		unsigned char var5 = arg0[0xd0f];
		char* var6 = arg0 + 0x300;
		unsigned char var7 = var6[var5 * 0x24];
		var7 &= ~0xf;
		var6[var5 * 0x24] = var7;
	}
	int var8 = *(unsigned char*)(arg0 + 0xd0f) + 1;
	arg0[0xd0f] = var8;
	if (*(unsigned char*)(arg0 + 0xd10) <= (unsigned char)var8) {
		*(unsigned char*)(arg0 + 0xd15) = *(unsigned char*)(arg0 + 0xd15) + 1;
		arg0[0xd0f] = 0;
		arg0[0xd11] = (unsigned char)func_ov031_02214afc(*(unsigned char*)(arg0 + 0xd15));
	}

	if (*(signed char*)(arg0 + 0xd11) < 0) {
		arg0[0xd15] = 0;
		return func_ov031_02214fc8(arg0, 5);
	}

	*(unsigned long long*)(arg0 + 0xcb0) = GetCurrentTimestamp();
	var8 = *(unsigned char*)(arg0 + 0xd0f);
	func_ov031_022151b0(&data_ov031_02245fb0, arg0 + 0x304 + var8 * 0x24, *(signed char*)(arg0 + 0xd11), 0x300000);
ret5:
	return 5;
}
