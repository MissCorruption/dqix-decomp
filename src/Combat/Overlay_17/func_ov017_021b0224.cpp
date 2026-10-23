#include <globaldefs.h>

extern "C" void func_ov017_021ce29c(void);
extern "C" void func_ov017_021b0a7c(void* arg0);

// USA: func_ov017_021b0224
extern "C" ARM int func_ov017_021b0224(unsigned char* arg0) {
	int var0 = 1;
	int var1;
	for (var1 = 1; var1 < 4; var1++) {
		if ((arg0 + var1)[0x1b] == 1) {
			if (!(arg0[0x1f] & (1 << var1))) {
				var0 = 0;
				break;
			}
		}
	}
	if (!var0) return arg0[0xa];
	func_ov017_021ce29c();
	func_ov017_021b0a7c(arg0);
	return 4;
}
