#include <globaldefs.h>

extern "C" void func_ov017_021d0b30(int arg0, int arg1, int arg2);

// USA: func_ov017_021b042c
extern "C" ARM int func_ov017_021b042c(unsigned char* arg0) {
	int var0 = 1;
	int var1;
	for (var1 = 1; var1 < 4; var1++) {
		if ((arg0 + var1)[0x1b] == 1) {
			if (!(arg0[0x20] & (1 << var1))) {
				var0 = 0;
				break;
			}
		}
	}
	if (!var0) return arg0[0xa];
	func_ov017_021d0b30(3, 0, 0);
	return 5;
}
