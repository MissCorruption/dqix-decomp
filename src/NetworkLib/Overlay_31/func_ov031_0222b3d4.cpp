#include <globaldefs.h>

extern "C" void func_ov031_0222b168(void);
extern "C" void func_ov031_0222b1a0(void);
extern "C" void func_ov031_0222b1a4(void);
extern "C" void func_ov031_022368e0(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_0222b1f0(void);

struct Struct_ov031_02290c80_5 { unsigned char unknown_0_[2]; unsigned short unknown_2_; };
extern Struct_ov031_02290c80_5 data_ov031_02290c80;

// USA: func_ov031_0222b3d4
extern "C" ARM void func_ov031_0222b3d4(void) {
	func_ov031_0222b168();
	func_ov031_0222b1a0();
	func_ov031_0222b1a4();
	data_ov031_02290c80.unknown_2_ = data_ov031_02290c80.unknown_2_ + 1;
	if (data_ov031_02290c80.unknown_2_ < 0x438) {
		return;
	}
	func_ov031_022368e0();
	func_ov031_022274c0((int)func_ov031_0222b1f0);
}
