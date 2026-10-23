#include <globaldefs.h>

// USA: func_ov031_0220b18c
extern "C" ARM void func_ov031_0220b18c(unsigned char* arg0, unsigned int* arg1, unsigned int arg2) {
	arg2 >>= 2;
	unsigned int var0 = 0;
	if (arg2 == 0) return;
	do {
		unsigned int var1 = *arg1++;
		var0++;
		arg0[0] = (unsigned char)(var1 >> 0x18);
		arg0[1] = (unsigned char)(var1 >> 0x10);
		arg0[2] = (unsigned char)(var1 >> 0x8);
		arg0[3] = (unsigned char)var1;
		arg0 += 4;
	} while (var0 < arg2);
}
