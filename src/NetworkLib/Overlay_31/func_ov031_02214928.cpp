#include <globaldefs.h>

extern "C" char* func_ov031_022133f8(int);
extern "C" int func_ov031_0220d540(void);
extern "C" int func_ov031_02214b64(int);
extern "C" void func_ov031_0220cf6c(void);
extern "C" void func_ov031_0220d214(void);
extern "C" void func_ov031_0220d330(void);
extern "C" void func_ov031_022134cc(int arg0);

// USA: func_ov031_02214928
extern "C" ARM int func_ov031_02214928(void) {
	char* var0 = func_ov031_022133f8(0x10);
	unsigned int var1 = 9;

	switch (func_ov031_0220d540()) {
	case 3: {
		unsigned char var2 = var0[0xd0c];
		var1 = *(unsigned char*)(var0 + 0xd0e);
		unsigned int var3 = ((unsigned int)var2 << 0x18) >> 0x1e;
		if (var3 == 1) {
			unsigned char var4 = var0[0xd13];
			char* var5 = var0 + var4 * 4;
			var5[0x444] = 0;
			var1 = 7;
		} else if (var1 >= 3 && var1 <= 5) {
			func_ov031_02214b64(var1);
		}
		break;
	}
	case 6:
		func_ov031_0220cf6c();
		break;
	case 9:
		func_ov031_0220d214();
		break;
	case 12:
		func_ov031_0220d330();
		func_ov031_022134cc(4);
		var1 = 0x11;
		break;
	case 11:
		func_ov031_022134cc(0);
		var1 = 0x11;
		break;
	default:
		break;
	}

	return var1;
}
