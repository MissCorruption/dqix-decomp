#include <globaldefs.h>

extern "C" void func_ov027_021dae1c(void);

struct Struct_ov027_021dd940_2 {
	char unknown_0_[0x14];
	int unknown_14_;
	int unknown_18_;
	int unknown_1c_;
	char unknown_20_[0x24 - 0x20];
	unsigned char unknown_24_;
};

extern Struct_ov027_021dd940_2 data_ov027_021dd940;

// USA: func_ov027_021dadf0
extern "C" ARM void func_ov027_021dadf0(void) {
	data_ov027_021dd940.unknown_18_ = 0;
	data_ov027_021dd940.unknown_1c_ = 0;
	data_ov027_021dd940.unknown_24_ = 1;
	data_ov027_021dd940.unknown_14_ = 0;
	func_ov027_021dae1c();
}
