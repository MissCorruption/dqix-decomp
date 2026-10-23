#include <globaldefs.h>

struct Struct_ov031_02290fbc_2 {
	int unknown_0_;
	unsigned char unknown_4_[8];
	int (*unknown_c_)(int);
	unsigned char unknown_10_[8];
	int unknown_18_;
};

extern "C" void func_ov031_02240f74(void);
extern "C" void func_ov031_0224030c(void);
extern "C" void func_ov031_022403b0(void);
extern struct Struct_ov031_02290fbc_2 data_ov031_02290fbc;

// USA: func_ov031_0223fde4
extern "C" ARM void func_ov031_0223fde4(void (*arg0)(void)) {
	func_ov031_02240f74();
	func_ov031_022403b0();
	data_ov031_02290fbc.unknown_c_(data_ov031_02290fbc.unknown_18_);
	func_ov031_0224030c();
	data_ov031_02290fbc.unknown_0_ = 0;
	arg0();
}
