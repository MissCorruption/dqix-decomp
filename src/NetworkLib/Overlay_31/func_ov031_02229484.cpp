#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" void func_ov031_02222e40(int arg0);
extern "C" void func_ov031_0221ae00(void* arg0);
extern "C" int func_ov031_02236878(int arg0);
extern "C" int func_ov031_02229748(void);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_02229528(void);

struct Struct_ov031_02229484 { unsigned long long unknown_0_; unsigned long long unknown_8_; int unknown_10_; };

struct Struct_ov031_02290c5c_3 { unsigned char unknown_0_; unsigned char unknown_1_; };
extern Struct_ov031_02290c5c_3 data_ov031_02290c5c;

// USA: func_ov031_02229484
extern "C" ARM void func_ov031_02229484(void) {
	int var0 = func_ov031_02222e0c();
	switch (var0) {
	case 0:
		func_ov031_02236878(7);
		break;
	case 1: {
		Struct_ov031_02229484 var1;
		func_ov031_0221ae00(&var1);
		if (data_ov031_02290c5c.unknown_0_ != 0 && var1.unknown_0_ == 0) {
			func_ov031_02236878(9);
			func_ov031_02222e40(-1);
			return;
		}
		func_ov031_02236878(6);
		func_ov031_02229748();
		data_ov031_02290c5c.unknown_1_ = 1;
		break;
	}
	default:
		return;
	}
	func_ov031_022274c0((int)func_ov031_02229528);
}
