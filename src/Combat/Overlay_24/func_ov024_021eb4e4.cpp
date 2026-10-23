#include <globaldefs.h>

struct Struct_ov024_021da9e0_4 {
	char unknown_0_[0x48];
	int unknown_48_[8];
};

// USA: func_ov024_021eb4e4
extern "C" ARM void func_ov024_021eb4e4(struct Struct_ov024_021da9e0_4* arg0, int arg1) {
	for (int var0 = 0; var0 < 8; var0++) {
		if (arg0->unknown_48_[var0] == 0) {
			arg0->unknown_48_[var0] = arg1;
			return;
		}
	}
}
