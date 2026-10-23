#include <globaldefs.h>

// USA: func_ov009_0218a484
extern "C" ARM void func_ov009_0218a484(int arg0, char *arg1, char *arg2) {
	int var0;
	while ((var0 = *arg1) != 0) {
		if (var0 >= 'a' && var0 <= 'z') {
			var0 -= 0x20;
			*arg2 = var0;
			var0 = *arg2;
		} else {
			*arg2 = var0;
			var0 = *arg2;
		}
		if (var0) {
			arg1++;
		}
		arg2++;
	}
}
