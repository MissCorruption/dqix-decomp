#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" int func_020ca3b8(int, int, int);
extern unsigned char* data_ov031_02290ce8;

// USA: func_ov031_02234f4c
extern "C" ARM void func_ov031_02234f4c(void* arg0, int arg1, int arg2, int arg3) {
	int var0 = arg3;
	void* var1 = arg0;
	unsigned char* var2 = data_ov031_02290ce8 + 4 + (arg1 << 1);
	int var3 = 0;
	if (var0 <= 0) return;
	int var4 = arg2 << 1;
	do {
		func_020ca3b8((int)var1, (int)var2, var4);
		var3++;
		var1 = (char*)var1 + 0x40;
		var2 += 0x40;
	} while (var3 < var0);
}
