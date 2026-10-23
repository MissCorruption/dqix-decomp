#include <globaldefs.h>

extern "C" void func_ov031_0220bc18(unsigned short* arg0, unsigned short* arg1, int arg2, int arg3);

// USA: func_ov031_0220bc7c
extern "C" ARM void func_ov031_0220bc7c(unsigned short* arg0, int arg1) {
	int var0 = 0;
	if (arg1 > 0) {
		do {
			arg0[var0] = ~arg0[var0];
			var0++;
		} while (var0 < arg1);
	}
	func_ov031_0220bc18(arg0, arg0, 1, arg1);
}
