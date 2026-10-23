#include <globaldefs.h>

// USA: func_ov031_0220be04
extern "C" ARM void func_ov031_0220be04(unsigned short* arg0, int arg1, int arg2, int arg3) {
	while (arg1 != 0 && arg2 < arg3) {
		int var0 = arg1 + arg0[arg2];
		arg0[arg2] = (unsigned short)var0;
		arg2++;
		arg1 = (unsigned int)var0 >> 16;
	}
}
