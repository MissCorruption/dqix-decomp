#include <globaldefs.h>

extern "C" void func_ov031_0223521c(void);
extern "C" void func_ov031_02235204(void);
extern "C" void func_ov031_022238cc(void);
extern "C" int FastIntModulus(int arg0, int arg1);
extern "C" void func_ov031_0222f9ec(void);
extern "C" void func_ov031_02230120(void);
extern "C" void func_ov031_022351f8(int arg0);
extern "C" void func_ov031_022308d4(void);
extern "C" void func_ov031_0223e2c0(int arg0, int arg1);

struct Struct_ov031_02290ca0_17 { unsigned char unknown_0_, unknown_1_, unknown_2_, unknown_3_; unsigned short unknown_4_; unsigned short unknown_6_; void* unknown_8_; };
extern struct Struct_ov031_02290ca0_17 data_ov031_02290ca0;

// USA: func_ov031_0223060c
extern "C" ARM void func_ov031_0223060c(int arg0) {
	func_ov031_0223521c();
	func_ov031_022238cc();

	if (data_ov031_02290ca0.unknown_4_ > 6) data_ov031_02290ca0.unknown_4_ -= 6;
	else data_ov031_02290ca0.unknown_4_ = 0;

	int var0 = FastIntModulus(data_ov031_02290ca0.unknown_4_, 0x1d);
	if (var0 == 0x17) {
		func_ov031_0222f9ec();
		return;
	}
	if (var0 > 0x17) {
		data_ov031_02290ca0.unknown_4_ = data_ov031_02290ca0.unknown_4_ + (0x1d - var0);
		var0 = 0;
	}
	func_ov031_02230120();
	if (var0 != 0) return;

	int var1 = (data_ov031_02290ca0.unknown_4_ * 0x37) / 145;
	func_ov031_022351f8(var1);
	func_ov031_02235204();
	func_ov031_022308d4();
	*(int*)((char*)data_ov031_02290ca0.unknown_8_ + 0x38) = 0;
	func_ov031_0223e2c0(0, arg0);
}
