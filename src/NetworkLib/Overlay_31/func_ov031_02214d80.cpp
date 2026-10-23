#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);
extern "C" int func_ov031_02214fc8(void* arg0, int arg1);
extern "C" int func_ov031_022151b0(void*, void*, int, int);

struct Struct_ov031_02214d80 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };

// USA: func_ov031_02214d80
extern "C" ARM int func_ov031_02214d80(char* arg0) {
	unsigned long long var0 = GetCurrentTimestamp() - *(unsigned long long*)(arg0 + 0xcb0);
	unsigned long long var1 = _ll_udiv(var0 << 6, 0x82ea, 0);
	if (var1 < 150) {
		unsigned int var2 = *(unsigned char*)(arg0 + 0xd0f);
		Struct_ov031_02214d80* var3 = (Struct_ov031_02214d80*)(arg0 + 0x447 + var2 * 4);
		if (var3->unknown_0_7_ != 1) goto ret4;
	}

	{
		unsigned int var4 = *(unsigned char*)(arg0 + 0xd0f);
		unsigned char* var5 = (unsigned char*)(arg0 + 0x447 + var4 * 4);
		*var5 = *var5 | 0x80;
	}

	{
		unsigned int var6;
		unsigned int var7;
		var7 = *(unsigned char*)(arg0 + 0xd12);
		var6 = *(unsigned char*)(arg0 + 0xd0f);
		if (var6 < var7) {
			do {
				Struct_ov031_02214d80* var8 = (Struct_ov031_02214d80*)(arg0 + 0x447 + var6 * 4);
				if (var8->unknown_0_7_ == 0) break;
				var6 = *(unsigned char*)(arg0 + 0xd0f) + 1;
				*(unsigned char*)(arg0 + 0xd0f) = var6;
				var7 = *(unsigned char*)(arg0 + 0xd12);
				var6 &= 0xff;
			} while (var6 < var7);
		}
		if (var7 <= var6) {
			arg0[0xd0f] = 0;
			return func_ov031_02214fc8(arg0, 4);
		}
	}

	*(unsigned long long*)(arg0 + 0xcb0) = GetCurrentTimestamp();
	{
		int var9 = *(unsigned char*)(arg0 + 0xd0f);
		unsigned short var10 = *(unsigned short*)(arg0 + 0x4a6 + var9 * 0xc0);
		func_ov031_022151b0(arg0 + 0x474 + var9 * 0xc0, arg0 + 0x47c + var9 * 0xc0, var10 - 1, 0x300000);
	}
ret4:
	return 4;
}
