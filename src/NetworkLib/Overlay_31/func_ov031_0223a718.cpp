#include <globaldefs.h>

extern unsigned char* data_ov031_02290d20;
extern "C" void func_ov031_0223a698(void);
extern "C" int func_ov031_02239fc8(void);

// USA: func_ov031_0223a718
extern "C" ARM int func_ov031_0223a718(void) {
	unsigned char var0 = data_ov031_02290d20[0xa90];
	if (var0 != 1 && var0 != 0x1a && var0 != 0x1d) {
		return 0;
	}
	func_ov031_0223a698();
	func_ov031_02239fc8();
	data_ov031_02290d20[0xa90] = 2;
	return 1;
}
