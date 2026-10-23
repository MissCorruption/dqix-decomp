#include <globaldefs.h>

extern unsigned char* data_ov031_02290d20;
extern "C" void func_ov027_021dcd20(void);

// USA: func_ov031_0223a5bc
extern "C" ARM int func_ov031_0223a5bc(void) {
	unsigned char var0 = data_ov031_02290d20[0xa90];
	if (var0 == 1 || var0 == 0x14 || var0 == 0x17 || var0 == 0x1a || var0 == 0x1d) {
		data_ov031_02290d20[0xa90] = 0x22;
		data_ov031_02290d20[0xaac] = 0;
		return 1;
	}
	if (var0 == 4 || var0 == 5 || var0 == 6 || var0 == 0xd) {
		if (var0 == 4) {
			unsigned int var1 = *(unsigned int*)(data_ov031_02290d20 + 0xa98);
			if (var1 < 6) return 0;
		}
		func_ov027_021dcd20();
		data_ov031_02290d20[0xa90] = 0x10;
		data_ov031_02290d20[0xaac] = 2;
		return 1;
	}
	if (var0 == 9 || var0 == 0xa) {
		data_ov031_02290d20[0xa90] = 0x20;
		return 1;
	}
	if (var0 == 0xc) {
		data_ov031_02290d20[0xa90] = 0x22;
		return 1;
	}
	return 0;
}
