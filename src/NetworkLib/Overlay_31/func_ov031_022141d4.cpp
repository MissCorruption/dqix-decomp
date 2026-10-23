#include <globaldefs.h>

struct Struct_ov031_022141d4 { unsigned char unknown_0_; };

extern "C" int func_ov031_0221425c(void);
extern "C" void func_ov031_02219178(void);
extern "C" void func_ov031_02219080(void);
extern "C" int func_ov031_022142ec(void);

// USA: func_ov031_022141d4
extern "C" ARM int func_ov031_022141d4(Struct_ov031_022141d4* arg0) {
	unsigned char var0 = arg0->unknown_0_;
	if (var0 <= 0xa) {
		int var1 = func_ov031_0221425c();
		if (var1 == 1) {
			arg0->unknown_0_ = 0;
			return 1;
		}
		if (var1 == -1) {
			arg0->unknown_0_ = 0x12;
			return 1;
		}
	} else if (var0 == 0xe) {
		func_ov031_02219178();
		func_ov031_02219080();
		arg0->unknown_0_ = 0xc;
	} else if (var0 < 0x12) {
		if (func_ov031_022142ec() == 1) {
			arg0->unknown_0_ = 0xa;
		}
	}
	return 0;
}
