#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" void func_ov031_0223e2c0(int, int);
extern "C" void func_ov031_02222e98(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222b420(void);

struct Struct_ov031_02290c80_2 { unsigned char unknown_0_[4]; int unknown_4_; };
extern Struct_ov031_02290c80_2 data_ov031_02290c80;

// USA: func_ov031_0222b1a4
extern "C" ARM void func_ov031_0222b1a4(void) {
	if (func_ov031_02222e0c() != 0) return;
	int var0 = data_ov031_02290c80.unknown_4_;
	if (var0 == 0) return;
	func_ov031_0223e2c0(1, var0);
	data_ov031_02290c80.unknown_4_ = 0;
	func_ov031_02222e98();
	func_ov031_022274c0((int)func_ov031_0222b420);
}
