#include <globaldefs.h>

// USA: func_ov031_0220c92c
extern "C" ARM void func_ov031_0220c92c(unsigned char* arg0, unsigned short* arg1, int arg2, int arg3) {
	arg0 = arg0 + (arg2 - 1);
	if (arg2 > 1) {
		do {
			unsigned short var0 = *arg1;
			arg2 -= 2;
			*arg0-- = (unsigned char)var0;
			var0 = *arg1++;
			*arg0-- = (unsigned char)(var0 >> 8);
		} while (arg2 > 1);
	}
	if (arg2 > 0) {
		*arg0 = (unsigned char)*arg1;
	}
}
