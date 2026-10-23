#include <globaldefs.h>

// USA: func_ov003_0217063c
extern "C" ARM void func_ov003_0217063c(unsigned char* arg0, unsigned short* arg1, unsigned short* arg2) {
	signed char var0 = (signed char)arg0[1];
	unsigned short var1;
	if (var0 == 5) {
		var1 = *(unsigned short*)(arg0 + 0x20);
		if ((var1 & 0x10) || (var1 & 0x4)) {
			signed char var2;
			*arg1 = 0x2c;
			var2 = (signed char)arg0[8];
			*arg2 = var2 + (var2 << 4) + 0x3a;
			return;
		}
	}
	*arg1 = 0;
	*arg2 = 0;
}
