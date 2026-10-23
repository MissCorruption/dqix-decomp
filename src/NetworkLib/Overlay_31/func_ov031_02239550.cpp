#include <globaldefs.h>

struct Struct_ov031_02239550 { unsigned char unknown_0_[0x40]; int unknown_40_; unsigned char unknown_44_[0xc]; short unknown_50_; short unknown_52_; };
struct Struct_ov031_02290d18_9 { unsigned char unknown_0_[4]; struct Struct_ov031_02239550* unknown_4_; };
extern struct Struct_ov031_02290d18_9 data_ov031_02290d18;

extern "C" void func_ov031_022395b4(void);
extern "C" int func_020d5204(int arg0);
extern "C" ARM void func_ov031_022393e4(int arg0);

// USA: func_ov031_02239550
extern "C" ARM int func_ov031_02239550(void) {
	if ((unsigned int)(data_ov031_02290d18.unknown_4_->unknown_40_ - 4) <= 2) return 1;
	int var0 = func_020d5204((int)func_ov031_022395b4);
	if (var0 != 2) {
		func_ov031_022393e4(var0);
		return 0;
	}
	data_ov031_02290d18.unknown_4_->unknown_50_ = 0;
	data_ov031_02290d18.unknown_4_->unknown_52_ = 1;
	return 1;
}
