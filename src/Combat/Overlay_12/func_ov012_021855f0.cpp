#include <globaldefs.h>

// USA: func_ov012_021855f0
extern "C" ARM void func_ov012_021855f0(void *arg0, char *arg1, char *arg2) {
	char var0;
	while ((var0 = *arg1) != 0) {
		if (var0 >= 'a' && var0 <= 'z') {
			*arg2 = var0 - 0x20;
			var0 = *arg2;
		} else {
			*arg2 = var0;
			var0 = *arg2;
		}
		if (var0 != 0) {
			arg1++;
		}
		arg2++;
	}
}
