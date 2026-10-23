#include <globaldefs.h>

// USA: func_ov031_0220b1d0
extern "C" ARM void func_ov031_0220b1d0(unsigned int* arg0, unsigned char* arg1, unsigned int arg2) {
	unsigned int var0 = 0;
	if (var0 < arg2) {
		do {
			unsigned char* var1 = arg1 + var0;
			*arg0++ = (var1[0] << 0x18) | (var1[1] << 0x10) | (var1[2] << 8) | var1[3];
			var0 += 4;
		} while (var0 < arg2);
	}
}
