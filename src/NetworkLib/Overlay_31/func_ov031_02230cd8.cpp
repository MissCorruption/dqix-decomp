#include <globaldefs.h>

struct Struct_ov031_02290ca0_23 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char* unknown_8_;
};
extern struct Struct_ov031_02290ca0_23 data_ov031_02290ca0;
extern "C" void func_ov031_0222f9ec(void);

// USA: func_ov031_02230cd8
extern "C" ARM void func_ov031_02230cd8(void) {
	int var0 = 0;
	do {
		unsigned char *var1 = data_ov031_02290ca0.unknown_8_ + var0;
		if (var1[4] != 0) {
			var1[4]--;
			if (*(data_ov031_02290ca0.unknown_8_ + var0 + 4) == 0) func_ov031_0222f9ec();
		}
		var0++;
	} while (var0 < 4);
}
